
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rrset_parse {scalar_t__ section; scalar_t__ type; struct rrset_parse* rrset_all_next; } ;
struct msg_parse {int flags; struct rrset_parse* rrset_first; } ;
typedef enum rrset_trust { ____Placeholder_rrset_trust } rrset_trust ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static enum rrset_trust
FUNC_0(struct msg_parse* VAR_12, struct rrset_parse* VAR_13)
{
 uint16_t VAR_14 = VAR_12->flags & VAR_0;
 if(VAR_13->section == VAR_3) {
  if(VAR_14) {

   if(VAR_12->rrset_first &&
    VAR_12->rrset_first->section==VAR_3
    && VAR_12->rrset_first->type==VAR_1){
    if(VAR_13 == VAR_12->rrset_first)
     return VAR_7;
    else return VAR_8;
   }
   if(VAR_12->rrset_first &&
    VAR_12->rrset_first->section==VAR_3
    && VAR_12->rrset_first->type==VAR_2){
    if(VAR_13 == VAR_12->rrset_first ||
       VAR_13 == VAR_12->rrset_first->rrset_all_next)
     return VAR_7;
    else return VAR_8;
   }
   return VAR_7;
  }
  else return VAR_8;
 } else if(VAR_13->section == VAR_4) {
  if(VAR_14) return VAR_9;
  else return VAR_10;
 } else {

  if(VAR_14) return VAR_5;
  else return VAR_6;
 }

 return VAR_11;
}
