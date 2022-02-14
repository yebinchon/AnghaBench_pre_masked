
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int bf_len; struct bpf_insn* bf_insns; } ;
struct bpf_insn {int code; int jt; int jf; int k; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (struct bpf_insn const*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;

void
FUNC_3(const struct bpf_program *VAR_2, int VAR_3)
{
 const struct bpf_insn *VAR_4;
 int VAR_5;
 int VAR_6 = VAR_2->bf_len;

 VAR_4 = VAR_2->bf_insns;
 if (VAR_3 > 2) {
  FUNC_1("%d\n", VAR_6);
  for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_4, ++VAR_5) {
   FUNC_1("%u %u %u %u\n", VAR_4->code,
          VAR_4->jt, VAR_4->jf, VAR_4->k);
  }
  return ;
 }
 if (VAR_3 > 1) {
  for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_4, ++VAR_5)
   FUNC_1("{ 0x%x, %d, %d, 0x%08x },\n",
          VAR_4->code, VAR_4->jt, VAR_4->jf, VAR_4->k);
  return;
 }
 for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_4, ++VAR_5) {






  FUNC_2(FUNC_0(VAR_4, VAR_5));
 }
}
