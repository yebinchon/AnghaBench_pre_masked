
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__ const* ctf_dmodel; } ;
typedef TYPE_1__ ctf_file_t ;
struct TYPE_7__ {int ctd_code; int * ctd_name; } ;
typedef TYPE_2__ ctf_dmodel_t ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int
FUNC_1(ctf_file_t *VAR_2, int VAR_3)
{
 const ctf_dmodel_t *VAR_4;

 for (VAR_4 = VAR_1; VAR_4->ctd_name != ((void*)0); VAR_4++) {
  if (VAR_4->ctd_code == VAR_3) {
   VAR_2->ctf_dmodel = VAR_4;
   return (0);
  }
 }

 return (FUNC_0(VAR_2, VAR_0));
}
