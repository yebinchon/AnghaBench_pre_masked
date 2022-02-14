
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn_ext {int dummy; } ;
struct pt_insn {int dummy; } ;
struct pt_block_decoder {int status; int ip; } ;


 int FUNC_0 (int *,struct pt_block_decoder*,struct pt_insn const*,struct pt_insn_ext const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct pt_block_decoder *VAR_3,
         const struct pt_insn *VAR_4,
         const struct pt_insn_ext *VAR_5)
{
 int VAR_6;

 if (!VAR_3)
  return -VAR_0;

 VAR_6 = FUNC_0(&VAR_3->ip, VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;




 VAR_3->status = VAR_6;


 if (VAR_6 & VAR_2)
  return -VAR_1;

 return 0;
}
