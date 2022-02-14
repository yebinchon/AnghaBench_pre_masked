
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rpcap_filterbpf_insn {void* k; int jt; int jf; void* code; } ;
struct rpcap_filter {void* nitems; void* filtertype; } ;
struct bpf_program {int bf_len; struct bpf_insn* bf_insns; } ;
struct bpf_insn {int k; int jt; int jf; int code; } ;
struct TYPE_4__ {int errbuf; } ;
typedef TYPE_1__ pcap_t ;
typedef int int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct bpf_program*,int *,int,int ) ;
 scalar_t__ FUNC_3 (int *,int,int *,int*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(pcap_t *VAR_4, char *VAR_5, int *VAR_6, struct bpf_program *VAR_7)
{
 struct rpcap_filter *VAR_8;
 struct rpcap_filterbpf_insn *VAR_9;
 struct bpf_insn *VAR_10;
 struct bpf_program VAR_11;
 unsigned int VAR_12;

 if (VAR_7->bf_len == 0)
 {
  if (FUNC_2(VAR_4, &VAR_11, ((void*)0) , 1, 0) == -1)
   return -1;

  VAR_7 = &VAR_11;
 }

 VAR_8 = (struct rpcap_filter *) VAR_5;

 if (FUNC_3(((void*)0), sizeof(struct rpcap_filter), ((void*)0), VAR_6,
  VAR_1, VAR_3, VAR_4->errbuf, VAR_0))
  return -1;

 VAR_8->filtertype = FUNC_1(VAR_2);
 VAR_8->nitems = FUNC_0((int32)VAR_7->bf_len);

 if (FUNC_3(((void*)0), VAR_7->bf_len * sizeof(struct rpcap_filterbpf_insn),
  ((void*)0), VAR_6, VAR_1, VAR_3, VAR_4->errbuf, VAR_0))
  return -1;

 VAR_9 = (struct rpcap_filterbpf_insn *) (VAR_8 + 1);
 VAR_10 = VAR_7->bf_insns;

 for (VAR_12 = 0; VAR_12 < VAR_7->bf_len; VAR_12++)
 {
  VAR_9->code = FUNC_1(VAR_10->code);
  VAR_9->jf = VAR_10->jf;
  VAR_9->jt = VAR_10->jt;
  VAR_9->k = FUNC_0(VAR_10->k);

  VAR_9++;
  VAR_10++;
 }

 return 0;
}
