
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct bpf_program {int bf_len; struct bpf_insn* bf_insns; } ;
struct bpf_insn {int k; int jf; int jt; int code; } ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ pcap_t ;


 scalar_t__ FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int,unsigned char*) ;

__attribute__((used)) static int FUNC_4(pcap_t *VAR_0, struct bpf_program *VAR_1) {
 int VAR_2 = VAR_0->fd;
 int VAR_3;
 struct bpf_insn *VAR_4;
 uint16_t VAR_5;
 uint32_t VAR_6;

 FUNC_3(VAR_2, 1, (unsigned char *)"F");
 VAR_3 = VAR_1->bf_len;
 VAR_6 = FUNC_1(VAR_3);
 FUNC_3(VAR_2, 4, (unsigned char *)&VAR_6);
 VAR_4 = VAR_1->bf_insns;
 while (VAR_3--) {
  VAR_5 = FUNC_2(VAR_4->code);
  VAR_6 = FUNC_1(VAR_4->k);
  FUNC_3(VAR_2, 2, (unsigned char *)&VAR_5);
  FUNC_3(VAR_2, 1, (unsigned char *)&VAR_4->jt);
  FUNC_3(VAR_2, 1, (unsigned char *)&VAR_4->jf);
  FUNC_3(VAR_2, 4, (unsigned char *)&VAR_6);
  VAR_4++;
 }
 if (FUNC_0(VAR_2, ((void*)0)))
  return -1;
 return 0;
}
