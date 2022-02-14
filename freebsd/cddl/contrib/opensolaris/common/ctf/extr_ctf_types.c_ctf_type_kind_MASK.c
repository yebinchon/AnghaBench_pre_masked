
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctt_info; } ;
typedef TYPE_1__ ctf_type_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int **,int ) ;

int
FUNC_2(ctf_file_t *VAR_1, ctf_id_t VAR_2)
{
 const ctf_type_t *VAR_3;

 if ((VAR_3 = FUNC_1(&VAR_1, VAR_2)) == ((void*)0))
  return (VAR_0);

 return (FUNC_0(VAR_1, VAR_3->ctt_info));
}
