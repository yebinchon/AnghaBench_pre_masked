
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rrset_parse {scalar_t__ section; int flags; int rrset_class; struct rr_parse* rr_first; int type; } ;
struct rr_parse {struct rr_parse* next; } ;
struct msg_parse {int dummy; } ;
typedef int sldns_buffer ;
typedef int hashvalue_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rrset_parse*,struct rr_parse*,int **,size_t*,int *) ;
 int FUNC_1 (int ) ;
 struct rrset_parse* FUNC_2 (struct msg_parse*,int *,int ,int ,int *,size_t,int ,int ) ;
 int FUNC_3 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(sldns_buffer* VAR_4, struct msg_parse* VAR_5,
 struct rrset_parse* VAR_6)
{

 uint8_t* VAR_7 = ((void*)0);
 size_t VAR_8 = 0;
 struct rr_parse* VAR_9;

 if(!FUNC_1(VAR_6->type))
  return;
 for(VAR_9 = VAR_6->rr_first; VAR_9; VAR_9 = VAR_9->next) {
  if(FUNC_0(VAR_6, VAR_9, &VAR_7, &VAR_8, VAR_4)) {

   hashvalue_type VAR_10 = FUNC_3(VAR_4, VAR_7,
    VAR_0, VAR_6->rrset_class, 0);
   struct rrset_parse* VAR_11 = FUNC_2(
    VAR_5, VAR_4, VAR_10, 0, VAR_7, VAR_8,
    VAR_0, VAR_6->rrset_class);
   if(VAR_11 && VAR_11->section == VAR_2) {
    VAR_11->flags |= VAR_3;
   }


   VAR_10 = FUNC_3(VAR_4, VAR_7, VAR_1,
    VAR_6->rrset_class, 0);
   VAR_11 = FUNC_2(VAR_5, VAR_4, VAR_10, 0, VAR_7,
    VAR_8, VAR_1, VAR_6->rrset_class);
   if(VAR_11 && VAR_11->section == VAR_2) {
    VAR_11->flags |= VAR_3;
   }
  }
 }
}
