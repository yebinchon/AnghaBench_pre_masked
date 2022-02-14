
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_jit_filter {int size; int * func; } ;
struct bpf_insn {int dummy; } ;
typedef struct bpf_jit_filter bpf_jit_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (struct bpf_insn*,int,int *) ;
 int FUNC_1 (struct bpf_jit_filter*,...) ;
 scalar_t__ FUNC_2 (int,...) ;

bpf_jit_filter *
FUNC_3(struct bpf_insn *VAR_3, int VAR_4)
{
 bpf_jit_filter *VAR_5;






 VAR_5 = (struct bpf_jit_filter *)FUNC_2(sizeof(*VAR_5));

 if (VAR_5 == ((void*)0))
  return (((void*)0));


 if (VAR_3 == ((void*)0) || VAR_4 == 0) {
  VAR_5->func = VAR_2;
  return (VAR_5);
 }


 if ((VAR_5->func = FUNC_0(VAR_3, VAR_4, &VAR_5->size)) == ((void*)0)) {



  FUNC_1(VAR_5);

  return (((void*)0));
 }

 return (VAR_5);
}
