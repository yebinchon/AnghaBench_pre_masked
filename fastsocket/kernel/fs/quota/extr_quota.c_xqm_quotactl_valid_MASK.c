
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_qcop; } ;
typedef scalar_t__ qid_t ;
struct TYPE_2__ {int quota_sync; int get_xquota; int set_xquota; int get_xstate; int set_xstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_8, int VAR_9, int VAR_10,
         qid_t VAR_11)
{
 if (VAR_9 >= VAR_6)
  return -VAR_1;
 if (!VAR_8)
  return -VAR_2;
 if (!VAR_8->s_qcop)
  return -VAR_3;

 switch (VAR_10) {
  case 131:
  case 132:
  case 130:
   if (!VAR_8->s_qcop->set_xstate)
    return -VAR_3;
   break;
  case 134:
   if (!VAR_8->s_qcop->get_xstate)
    return -VAR_3;
   break;
  case 128:
   if (!VAR_8->s_qcop->set_xquota)
    return -VAR_3;
   break;
  case 133:
   if (!VAR_8->s_qcop->get_xquota)
    return -VAR_3;
   break;
  case 129:
   if (!VAR_8->s_qcop->quota_sync)
    return -VAR_3;
   break;
  default:
   return -VAR_1;
 }


 if (VAR_10 == 133) {
  if (((VAR_9 == VAR_7 && FUNC_1() != VAR_11) ||
       (VAR_9 == VAR_5 && !FUNC_2(VAR_11))) &&
       !FUNC_0(VAR_0))
   return -VAR_4;
 } else if (VAR_10 != 134 && VAR_10 != 129) {
  if (!FUNC_0(VAR_0))
   return -VAR_4;
 }

 return 0;
}
