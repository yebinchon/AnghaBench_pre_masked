
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
typedef int ssize_t ;
struct TYPE_6__ {int ctt_info; } ;
typedef TYPE_1__ ctf_type_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_7__ {int cte_bits; int cte_offset; int cte_format; } ;
typedef TYPE_2__ ctf_encoding_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;


 int VAR_1 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,TYPE_1__ const*,int *,int *) ;
 TYPE_1__* FUNC_8 (int **,int ) ;
 int FUNC_9 (int *,int ) ;

int
FUNC_10(ctf_file_t *VAR_2, ctf_id_t VAR_3, ctf_encoding_t *VAR_4)
{
 ctf_file_t *VAR_5 = VAR_2;
 const ctf_type_t *VAR_6;
 ssize_t VAR_7;
 uint_t VAR_8;

 if ((VAR_6 = FUNC_8(&VAR_2, VAR_3)) == ((void*)0))
  return (VAR_0);

 (void) FUNC_7(VAR_2, VAR_6, ((void*)0), &VAR_7);

 switch (FUNC_6(VAR_2, VAR_6->ctt_info)) {
 case 128:
  VAR_8 = *(const uint_t *)((uintptr_t)VAR_6 + VAR_7);
  VAR_4->cte_format = FUNC_4(VAR_8);
  VAR_4->cte_offset = FUNC_5(VAR_8);
  VAR_4->cte_bits = FUNC_3(VAR_8);
  break;
 case 129:
  VAR_8 = *(const uint_t *)((uintptr_t)VAR_6 + VAR_7);
  VAR_4->cte_format = FUNC_1(VAR_8);
  VAR_4->cte_offset = FUNC_2(VAR_8);
  VAR_4->cte_bits = FUNC_0(VAR_8);
  break;
 default:
  return (FUNC_9(VAR_5, VAR_1));
 }

 return (0);
}
