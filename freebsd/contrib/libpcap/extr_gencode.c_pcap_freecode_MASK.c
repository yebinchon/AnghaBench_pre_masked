
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int * bf_insns; scalar_t__ bf_len; } ;


 int FUNC_0 (char*) ;

void
FUNC_1(struct bpf_program *VAR_0)
{
 VAR_0->bf_len = 0;
 if (VAR_0->bf_insns != ((void*)0)) {
  FUNC_0((char *)VAR_0->bf_insns);
  VAR_0->bf_insns = ((void*)0);
 }
}
