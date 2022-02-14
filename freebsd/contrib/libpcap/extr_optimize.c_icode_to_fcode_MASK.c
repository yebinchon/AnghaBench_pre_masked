
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct icode {int dummy; } ;
struct bpf_insn {int dummy; } ;
struct block {int dummy; } ;
struct TYPE_3__ {struct bpf_insn* ftail; struct bpf_insn* fstart; } ;
typedef TYPE_1__ conv_state_t ;
typedef int compiler_state_t ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,struct icode*,struct block*) ;
 int FUNC_2 (struct icode*,struct block*) ;
 int FUNC_3 (struct bpf_insn*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (struct icode*) ;

struct bpf_insn *
FUNC_7(compiler_state_t *VAR_0, struct icode *VAR_1,
    struct block *VAR_2, u_int *VAR_3)
{
 u_int VAR_4;
 struct bpf_insn *VAR_5;
 conv_state_t VAR_6;





 for (;;) {
     FUNC_6(VAR_1);
     VAR_4 = *VAR_3 = FUNC_2(VAR_1, VAR_2);

     VAR_5 = (struct bpf_insn *)FUNC_4(sizeof(*VAR_5) * VAR_4);
     if (VAR_5 == ((void*)0))
      FUNC_0(VAR_0, "malloc");
     FUNC_5((char *)VAR_5, 0, sizeof(*VAR_5) * VAR_4);
     VAR_6.fstart = VAR_5;
     VAR_6.ftail = VAR_5 + VAR_4;

     FUNC_6(VAR_1);
     if (FUNC_1(VAR_0, &VAR_6, VAR_1, VAR_2))
  break;
     FUNC_3(VAR_5);
 }

 return VAR_5;
}
