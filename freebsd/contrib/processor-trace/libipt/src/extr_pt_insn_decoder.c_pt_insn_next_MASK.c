
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_mapped_section {int dummy; } ;
struct pt_insn_ext {int dummy; } ;
struct pt_insn_decoder {int status; int mode; int ip; scalar_t__ speculative; int enabled; } ;
struct pt_insn {int speculative; int isid; int mode; int ip; } ;
typedef int insn ;


 int FUNC_0 (struct pt_insn*,size_t,struct pt_insn*) ;
 int FUNC_1 (struct pt_insn*,int ,int) ;
 int FUNC_2 (struct pt_insn_decoder*,struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_3 (struct pt_insn_decoder*,struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_4 (struct pt_insn_decoder*,struct pt_mapped_section const*,struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_5 (struct pt_insn_decoder*,struct pt_mapped_section const**) ;
 int FUNC_6 (struct pt_insn_decoder*,struct pt_insn*,struct pt_insn_ext*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_7(struct pt_insn_decoder *VAR_6, struct pt_insn *VAR_7,
   size_t VAR_8)
{
 const struct pt_mapped_section *VAR_9;
 struct pt_insn_ext VAR_10;
 struct pt_insn VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 if (!VAR_7 || !VAR_6)
  return -VAR_1;






 if (!VAR_6->enabled) {
  if (VAR_6->status & VAR_4)
   return -VAR_0;

  return -VAR_2;
 }

 VAR_12 = VAR_8 == sizeof(VAR_11) ? VAR_7 : &VAR_11;


 FUNC_1(VAR_12, 0, sizeof(*VAR_12));






 if (VAR_6->speculative)
  VAR_12->speculative = 1;
 VAR_12->ip = VAR_6->ip;
 VAR_12->mode = VAR_6->mode;

 VAR_14 = FUNC_5(VAR_6, &VAR_9);
 if (VAR_14 < 0) {
  if (VAR_14 != -VAR_3)
   return VAR_14;

  VAR_9 = ((void*)0);
 }




 VAR_12->isid = VAR_14;

 VAR_13 = FUNC_4(VAR_6, VAR_9, VAR_12, &VAR_10);
 if (VAR_13 < 0) {



  (void) FUNC_0(VAR_7, VAR_8, VAR_12);
  return VAR_13;
 }




 VAR_13 = FUNC_0(VAR_7, VAR_8, VAR_12);
 if (VAR_13 < 0)
  return VAR_13;





 VAR_13 = FUNC_2(VAR_6, VAR_12, &VAR_10);
 if (VAR_13 != 0) {
  if (VAR_13 < 0)
   return VAR_13;

  if (VAR_13 & VAR_5)
   return VAR_13;
 }


 VAR_13 = FUNC_6(VAR_6, VAR_12, &VAR_10);
 if (VAR_13 < 0)
  return VAR_13;






 return FUNC_3(VAR_6, VAR_12, &VAR_10);
}
