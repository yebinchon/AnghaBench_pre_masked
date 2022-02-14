
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct bpf_insn*,size_t) ;

__attribute__((used)) static inline bool
FUNC_3(struct bpf_insn *VAR_0, size_t VAR_1)
{
 bool VAR_2;

 FUNC_0();
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_1();

 return VAR_2;
}
