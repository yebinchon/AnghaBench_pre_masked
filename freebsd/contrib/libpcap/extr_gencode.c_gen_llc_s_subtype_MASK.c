
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;
typedef int compiler_state_t ;
typedef int bpf_u_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct block*,struct block*) ;
 struct block* FUNC_1 (int *) ;
 struct block* FUNC_2 (int *,int ,int,int ,int ,int ) ;

struct block *
FUNC_3(compiler_state_t *VAR_3, bpf_u_int32 VAR_4)
{
 struct block *VAR_5, *VAR_6;




 VAR_5 = FUNC_1(VAR_3);




 VAR_6 = FUNC_2(VAR_3, VAR_2, 2, VAR_0, VAR_4, VAR_1);
 FUNC_0(VAR_5, VAR_6);
 return VAR_6;
}
