
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;
typedef int compiler_state_t ;
typedef scalar_t__ bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct block*,struct block*) ;
 struct block* FUNC_1 (int *,int ,int,int ,scalar_t__) ;
 struct block* FUNC_2 (int *,int ,int,int ,scalar_t__) ;

__attribute__((used)) static struct block *
FUNC_3(compiler_state_t *VAR_2, int VAR_3, bpf_int32 VAR_4,
    bpf_int32 VAR_5)
{
 struct block *VAR_6, *VAR_7;

 if (VAR_4 > VAR_5) {



  bpf_int32 VAR_8;

  VAR_8 = VAR_4;
  VAR_4 = VAR_5;
  VAR_5 = VAR_8;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_3, VAR_0, VAR_4);
 VAR_7 = FUNC_2(VAR_2, VAR_1, VAR_3, VAR_0, VAR_5);

 FUNC_0(VAR_6, VAR_7);

 return VAR_7;
}
