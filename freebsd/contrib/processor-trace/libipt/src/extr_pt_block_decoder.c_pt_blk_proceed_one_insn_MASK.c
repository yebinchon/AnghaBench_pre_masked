
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pt_insn_ext {scalar_t__ isid; int ip; int iclass; int size; int raw; scalar_t__ truncated; int mode; } ;
struct pt_insn {scalar_t__ isid; int ip; int iclass; int size; int raw; scalar_t__ truncated; int mode; } ;
struct pt_block_decoder {int asid; int image; int ip; int mode; } ;
struct pt_block {int truncated; scalar_t__ isid; scalar_t__ ninsn; int end_ip; int iclass; int size; int raw; } ;
typedef int insn ;
typedef int iext ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct pt_insn_ext*,int ,int) ;
 int FUNC_2 (struct pt_block*) ;
 int FUNC_3 (struct pt_block_decoder*,struct pt_insn_ext*,struct pt_insn_ext*) ;
 int FUNC_4 (struct pt_insn_ext*,struct pt_insn_ext*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct pt_block_decoder *VAR_1,
       struct pt_block *VAR_2,
       struct pt_insn *VAR_3,
       struct pt_insn_ext *VAR_4)
{
 struct pt_insn_ext VAR_5;
 struct pt_insn VAR_6;
 uint16_t VAR_7;
 int VAR_8;

 if (!VAR_1 || !VAR_2 || !VAR_3 || !VAR_4)
  return -VAR_0;


 VAR_7 = VAR_2->ninsn + 1;
 if (!VAR_7)
  return 0;


 if (VAR_2->truncated)
  return 0;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 VAR_6.mode = VAR_1->mode;
 VAR_6.ip = VAR_1->ip;

 VAR_8 = FUNC_4(&VAR_6, &VAR_5, VAR_1->image, &VAR_1->asid);
 if (VAR_8 < 0)
  return VAR_8;


 if (VAR_6.isid != VAR_2->isid) {
  if (!FUNC_2(VAR_2))
   return 0;

  VAR_2->isid = VAR_6.isid;
 }




 if (VAR_6.truncated) {
  FUNC_0(VAR_2->raw, VAR_6.raw, VAR_6.size);
  VAR_2->size = VAR_6.size;
  VAR_2->truncated = 1;
 }


 VAR_8 = FUNC_3(VAR_1, &VAR_6, &VAR_5);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_2->iclass = VAR_6.iclass;
 VAR_2->end_ip = VAR_6.ip;
 VAR_2->ninsn = VAR_7;

 *VAR_3 = VAR_6;
 *VAR_4 = VAR_5;

 return 1;
}
