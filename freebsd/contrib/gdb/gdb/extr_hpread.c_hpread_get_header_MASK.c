
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct objfile {char* name; int obfd; } ;
typedef int asection ;
struct TYPE_5__ {int version; int oi_entries; int aa_entries; int cd_entries; int files; int functions; int pg_entries; int time; int globals; int inlined; int sa_header; int bighdr; scalar_t__ pxdbed; int md_entries; int fd_entries; int pd_entries; } ;
typedef TYPE_1__* PXDB_header_ptr ;
typedef int PXDB_header ;
typedef TYPE_1__ DOC_info_PXDB_header ;


 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,TYPE_1__*,int ,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4 (struct objfile *VAR_0, PXDB_header_ptr VAR_1)
{
  asection *VAR_2, *VAR_3, *VAR_4;






  VAR_4 = FUNC_0 (VAR_0->obfd, "$HEADER$");
  if (!VAR_4)
    {
      return 0;
    }





  VAR_3 = FUNC_0 (VAR_0->obfd, "$DEBUG$");
  VAR_2 = FUNC_0 (VAR_0->obfd, "$PINFO$");
  if (VAR_3)
    {

      FUNC_1 (VAR_0->obfd, VAR_4,
    VAR_1, 0, sizeof (PXDB_header));

      if (!VAR_1->pxdbed)
 {

   return 0;
 }
    }

  else if (VAR_2)
    {


      DOC_info_PXDB_header VAR_5;
      FUNC_1 (VAR_0->obfd,
    VAR_4,
    &VAR_5, 0,
    sizeof (DOC_info_PXDB_header));

      if (!VAR_5.pxdbed)
 {

   FUNC_3 ("File \"%s\" not processed by pxdb!", VAR_0->name);
   return 0;
 }


      VAR_1->pd_entries = VAR_5.pd_entries;
      VAR_1->fd_entries = VAR_5.fd_entries;
      VAR_1->md_entries = VAR_5.md_entries;
      VAR_1->pxdbed = VAR_5.pxdbed;
      VAR_1->bighdr = VAR_5.bighdr;
      VAR_1->sa_header = VAR_5.sa_header;
      VAR_1->inlined = VAR_5.inlined;
      VAR_1->globals = VAR_5.globals;
      VAR_1->time = VAR_5.time;
      VAR_1->pg_entries = VAR_5.pg_entries;
      VAR_1->functions = VAR_5.functions;
      VAR_1->files = VAR_5.files;
      VAR_1->cd_entries = VAR_5.cd_entries;
      VAR_1->aa_entries = VAR_5.aa_entries;
      VAR_1->oi_entries = VAR_5.oi_entries;
      VAR_1->version = VAR_5.version;
    }

  else
    {





      return 0;

    }

  return 1;
}
