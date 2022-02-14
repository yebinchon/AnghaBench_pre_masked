
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_qcop; } ;
typedef scalar_t__ qid_t ;
struct TYPE_2__ {int quota_sync; int get_dqblk; int set_dqblk; int get_info; int set_info; int quota_off; int quota_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_9, int VAR_10, int VAR_11,
      qid_t VAR_12)
{
 if (VAR_10 >= VAR_7)
  return -VAR_1;
 if (!VAR_9 && VAR_11 != 128)
  return -VAR_2;

 if (VAR_9 && !VAR_9->s_qcop)
  return -VAR_3;

 switch (VAR_11) {
  case 135:
   break;
  case 131:
   if (!VAR_9->s_qcop->quota_on)
    return -VAR_3;
   break;
  case 132:
   if (!VAR_9->s_qcop->quota_off)
    return -VAR_3;
   break;
  case 130:
   if (!VAR_9->s_qcop->set_info)
    return -VAR_3;
   break;
  case 134:
   if (!VAR_9->s_qcop->get_info)
    return -VAR_3;
   break;
  case 129:
   if (!VAR_9->s_qcop->set_dqblk)
    return -VAR_3;
   break;
  case 133:
   if (!VAR_9->s_qcop->get_dqblk)
    return -VAR_3;
   break;
  case 128:
   if (VAR_9 && !VAR_9->s_qcop->quota_sync)
    return -VAR_3;
   break;
  default:
   return -VAR_1;
 }


 switch (VAR_11) {
  case 135:
  case 134:
  case 130:
  case 129:
  case 133:


   if (!FUNC_3(VAR_9, VAR_10))
    return -VAR_5;
 }


 if (VAR_11 == 133) {
  if (((VAR_10 == VAR_8 && FUNC_1() != VAR_12) ||
       (VAR_10 == VAR_6 && !FUNC_2(VAR_12))) &&
      !FUNC_0(VAR_0))
   return -VAR_4;
 }
 else if (VAR_11 != 135 && VAR_11 != 128 && VAR_11 != 134)
  if (!FUNC_0(VAR_0))
   return -VAR_4;

 return 0;
}
