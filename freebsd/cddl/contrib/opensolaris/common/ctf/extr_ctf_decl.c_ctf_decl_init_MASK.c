
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* cd_order; int cd_qualp; int cd_ordp; char* cd_buf; char* cd_ptr; char* cd_end; } ;
typedef TYPE_1__ ctf_decl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(ctf_decl_t *VAR_2, char *VAR_3, size_t VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2, sizeof (ctf_decl_t));

 for (VAR_5 = VAR_0; VAR_5 < VAR_1; VAR_5++)
  VAR_2->cd_order[VAR_5] = VAR_0 - 1;

 VAR_2->cd_qualp = VAR_0;
 VAR_2->cd_ordp = VAR_0;

 VAR_2->cd_buf = VAR_3;
 VAR_2->cd_ptr = VAR_3;
 VAR_2->cd_end = VAR_3 + VAR_4;
}
