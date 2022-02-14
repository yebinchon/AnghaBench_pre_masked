
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cbq_ovl {int strategy; int penalty; int priority2; } ;
struct cbq_class {int penalty; int overlimit; int priority2; int priority; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct cbq_class *VAR_7, struct tc_cbq_ovl *VAR_8)
{
 switch (VAR_8->strategy) {
 case 132:
  VAR_7->overlimit = VAR_2;
  break;
 case 131:
  VAR_7->overlimit = VAR_3;
  break;
 case 129:
  if (VAR_8->priority2-1 >= VAR_1 ||
      VAR_8->priority2-1 <= VAR_7->priority)
   return -VAR_0;
  VAR_7->priority2 = VAR_8->priority2-1;
  VAR_7->overlimit = VAR_5;
  break;
 case 130:
  VAR_7->overlimit = VAR_4;
  break;
 case 128:
  VAR_7->overlimit = VAR_6;
  break;
 default:
  return -VAR_0;
 }
 VAR_7->penalty = VAR_8->penalty;
 return 0;
}
