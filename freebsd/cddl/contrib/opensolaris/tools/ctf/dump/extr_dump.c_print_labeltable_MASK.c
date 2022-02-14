
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ulong_t ;
struct TYPE_8__ {int ctl_typeidx; int ctl_label; } ;
typedef TYPE_1__ ctf_lblent_t ;
struct TYPE_9__ {int cth_lbloff; int cth_objtoff; } ;
typedef TYPE_2__ ctf_header_t ;
struct TYPE_10__ {int cd_ctflen; scalar_t__ cd_ctfdata; } ;
typedef TYPE_3__ ctf_data_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*) ;
 char* FUNC_3 (int ,TYPE_2__ const*,TYPE_3__ const*) ;

__attribute__((used)) static int
FUNC_4(const ctf_header_t *VAR_1, const ctf_data_t *VAR_2)
{
 void *VAR_3 = (void *) (VAR_2->cd_ctfdata + VAR_1->cth_lbloff);
 const ctf_lblent_t *VAR_4 = VAR_3;
 ulong_t VAR_5, VAR_6 = (VAR_1->cth_objtoff - VAR_1->cth_lbloff) / sizeof (*VAR_4);

 FUNC_1("- Label Table ");

 if (VAR_1->cth_lbloff & 3)
  FUNC_0("cth_lbloff is not aligned properly\n");
 if (VAR_1->cth_lbloff >= VAR_2->cd_ctflen)
  FUNC_0("file is truncated or cth_lbloff is corrupt\n");
 if (VAR_1->cth_objtoff >= VAR_2->cd_ctflen)
  FUNC_0("file is truncated or cth_objtoff is corrupt\n");
 if (VAR_1->cth_lbloff > VAR_1->cth_objtoff)
  FUNC_0("file is corrupt -- cth_lbloff > cth_objtoff\n");

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++, VAR_4++) {
  (void) FUNC_2("  %5u %s\n", VAR_4->ctl_typeidx,
      FUNC_3(VAR_4->ctl_label, VAR_1, VAR_2));
 }

 return (VAR_0);
}
