
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct bpf_insn {int dummy; } ;
struct TYPE_3__ {size_t wirelen; int * mem; scalar_t__ buflen; int pkt; } ;
typedef TYPE_1__ bpf_args_t ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*,struct mbuf*,unsigned char*,size_t,size_t) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int *,struct bpf_insn*,TYPE_1__*) ;

__attribute__((used)) static inline unsigned int
FUNC_4(struct bpf_insn *VAR_1,
    unsigned char VAR_2[], size_t VAR_3, size_t VAR_4)
{
 uint32_t VAR_5[VAR_0];
 struct mbuf VAR_6, VAR_7;
 bpf_args_t VAR_8;
 unsigned int VAR_9;

 VAR_8.pkt = FUNC_0(&VAR_6, &VAR_7, VAR_2, VAR_3, VAR_4);
 VAR_8.buflen = 0;
 VAR_8.wirelen = VAR_3;
 VAR_8.mem = VAR_5;

 FUNC_1();
 VAR_9 = FUNC_3(((void*)0), VAR_1, &VAR_8);
 FUNC_2();

 return VAR_9;
}
