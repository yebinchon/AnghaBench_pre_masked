
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int bf_len; struct bpf_insn* bf_insns; } ;
struct bpf_insn {int code; int jt; int jf; int k; } ;


 int FUNC_0 (struct bpf_insn*,int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int ) ;

void
FUNC_3(const struct bpf_program *VAR_0, int VAR_1)
{
 struct bpf_insn *VAR_2;
 int VAR_3;
 int VAR_4 = VAR_0->bf_len;

 VAR_2 = VAR_0->bf_insns;
 if (VAR_1 > 2) {
  FUNC_1("%d\n", VAR_4);
  for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_2, ++VAR_3) {
   FUNC_1("%u %u %u %u\n", VAR_2->code,
          VAR_2->jt, VAR_2->jf, VAR_2->k);
  }
  return ;
 }
 if (VAR_1 > 1) {
  for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_2, ++VAR_3)
   FUNC_1("{ 0x%x, %d, %d, 0x%08x },\n",
          VAR_2->code, VAR_2->jt, VAR_2->jf, VAR_2->k);
  return;
 }
 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_2, ++VAR_3) {




  FUNC_2(FUNC_0(VAR_2, VAR_3));
 }
}
