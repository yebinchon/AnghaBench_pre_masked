
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctt_type; int ctt_info; } ;
typedef TYPE_1__ ctf_type_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* FUNC_2 (int **,int ) ;
 int FUNC_3 (int *,int ) ;

ctf_id_t
FUNC_4(ctf_file_t *VAR_2, ctf_id_t VAR_3)
{
 ctf_id_t VAR_4 = VAR_3, VAR_5 = VAR_3;
 ctf_file_t *VAR_6 = VAR_2;
 const ctf_type_t *VAR_7;

 while ((VAR_7 = FUNC_2(&VAR_2, VAR_3)) != ((void*)0)) {
  switch (FUNC_0(VAR_2, VAR_7->ctt_info)) {
  case 129:
  case 128:
  case 131:
  case 130:
   if (VAR_7->ctt_type == VAR_3 || VAR_7->ctt_type == VAR_5 ||
       VAR_7->ctt_type == VAR_4) {
    FUNC_1("type %ld cycle detected\n", VAR_5);
    return (FUNC_3(VAR_6, VAR_1));
   }
   VAR_4 = VAR_3;
   VAR_3 = VAR_7->ctt_type;
   break;
  default:
   return (VAR_3);
  }
 }

 return (VAR_0);
}
