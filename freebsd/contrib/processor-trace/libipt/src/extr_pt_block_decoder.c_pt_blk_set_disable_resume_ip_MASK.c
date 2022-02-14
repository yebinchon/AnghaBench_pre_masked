
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn {int iclass; unsigned long long ip; unsigned long long size; } ;
struct pt_block_decoder {unsigned long long ip; } ;


 int VAR_0 ;



__attribute__((used)) static int FUNC_0(struct pt_block_decoder *VAR_1,
     const struct pt_insn *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 switch (VAR_2->iclass) {
 case 129:
 case 128:
  VAR_1->ip = VAR_2->ip + VAR_2->size;
  break;

 default:
  VAR_1->ip = 0ull;
  break;
 }

 return 0;
}
