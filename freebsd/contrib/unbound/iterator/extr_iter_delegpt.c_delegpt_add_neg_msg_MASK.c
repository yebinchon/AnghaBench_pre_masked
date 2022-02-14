
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reply_info {scalar_t__ an_numrrsets; int flags; } ;
struct TYPE_3__ {scalar_t__ qtype; int qname_len; int qname; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct msgreply_entry {TYPE_1__ key; TYPE_2__ entry; } ;
struct delegpt_ns {int got4; int got6; int resolved; } ;
struct delegpt {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct delegpt_ns* FUNC_1 (struct delegpt*,int ,int ) ;

void FUNC_2(struct delegpt* VAR_2, struct msgreply_entry* VAR_3)
{
 struct reply_info* VAR_4 = (struct reply_info*)VAR_3->entry.data;
 if(!VAR_4) return;


 if(FUNC_0(VAR_4->flags) != 0 || VAR_4->an_numrrsets == 0) {
  struct delegpt_ns* VAR_5 = FUNC_1(VAR_2, VAR_3->key.qname,
   VAR_3->key.qname_len);
  if(VAR_5) {
   if(VAR_3->key.qtype == VAR_0)
    VAR_5->got4 = 1;
   else if(VAR_3->key.qtype == VAR_1)
    VAR_5->got6 = 1;
   if(VAR_5->got4 && VAR_5->got6)
    VAR_5->resolved = 1;
  }
 }
}
