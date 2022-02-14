
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
 TYPE_1__* FUNC_1 (int **,int ) ;
 int FUNC_2 (int *,int ) ;

ctf_id_t
FUNC_3(ctf_file_t *VAR_2, ctf_id_t VAR_3)
{
 ctf_file_t *VAR_4 = VAR_2;
 const ctf_type_t *VAR_5;

 if ((VAR_5 = FUNC_1(&VAR_2, VAR_3)) == ((void*)0))
  return (VAR_0);

 switch (FUNC_0(VAR_2, VAR_5->ctt_info)) {
 case 131:
 case 129:
 case 128:
 case 132:
 case 130:
  return (VAR_5->ctt_type);
 default:
  return (FUNC_2(VAR_4, VAR_1));
 }
}
