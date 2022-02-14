
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd ;
typedef int asection ;
struct TYPE_2__ {int obfd; } ;
typedef int PXDB_header ;
typedef int DOC_info_PXDB_header ;


 char* FUNC_0 (int) ;
 unsigned long FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_7 (bfd *VAR_1)
{
  asection *VAR_2, *VAR_3, *VAR_4;
  unsigned int VAR_5;
  char *VAR_6;
  bfd_size_type VAR_7;

  unsigned long VAR_8;
  unsigned int VAR_9;

  VAR_4 = FUNC_2 (VAR_1, "$HEADER$");
  if (!VAR_4)
    {
      return 0;
    }

  VAR_3 = FUNC_2 (VAR_1, "$DEBUG$");
  VAR_2 = FUNC_2 (VAR_1, "$PINFO$");

  if (VAR_2 && !VAR_3)
    {



      VAR_7 = FUNC_4 (VAR_0->obfd, VAR_4);

      if (VAR_7 == (bfd_size_type) sizeof (DOC_info_PXDB_header))
 {
   VAR_6 = FUNC_0 (sizeof (DOC_info_PXDB_header));
   FUNC_6 (VAR_6, 0, sizeof (DOC_info_PXDB_header));

   if (!FUNC_3 (VAR_1,
      VAR_4,
      VAR_6, 0,
      VAR_7))
     FUNC_5 ("bfd_get_section_contents\n");

   VAR_8 = FUNC_1 (VAR_1, (bfd_byte *) (VAR_6 + sizeof (int) * 4));
   VAR_9 = (VAR_8 >> 31) & 0x1;

   if (!VAR_9)
     FUNC_5 ("file debug header info invalid\n");
   VAR_5 = 0;
 }

      else
 FUNC_5 ("invalid $HEADER$ size in executable \n");
    }

  else
    {
      VAR_7 = FUNC_4 (VAR_0->obfd, VAR_4);

      if (VAR_7 == (bfd_size_type) sizeof (PXDB_header))
 {

   VAR_6 = FUNC_0 (sizeof (PXDB_header));
   FUNC_6 (VAR_6, 0, sizeof (PXDB_header));
   if (!FUNC_3 (VAR_1,
      VAR_4,
      VAR_6, 0,
      VAR_7))
     FUNC_5 ("bfd_get_section_contents\n");

   VAR_8 = FUNC_1 (VAR_1, (bfd_byte *) (VAR_6 + sizeof (int) * 3));
   VAR_9 = (VAR_8 >> 31) & 0x1;

   if (VAR_9)
     VAR_5 = 0;
   else
     FUNC_5 ("file debug header invalid\n");
 }
      else
 VAR_5 = 1;
    }

  if (VAR_5)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}
