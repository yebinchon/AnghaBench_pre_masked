
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trust_anchor {TYPE_1__* autr; } ;
struct autr_ta {scalar_t__ s; struct autr_ta* next; scalar_t__ pending_count; struct autr_ta* rr; int dname_len; int rr_len; } ;
struct TYPE_2__ {struct autr_ta* keys; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct autr_ta*) ;
 scalar_t__ FUNC_1 (struct autr_ta*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct trust_anchor* VAR_4)
{
 struct autr_ta* VAR_5, **VAR_6;
 VAR_6 = &VAR_4->autr->keys;
 VAR_5 = VAR_4->autr->keys;
 while(VAR_5) {

  if(VAR_5->s == VAR_2 || VAR_5->s == VAR_1 ||
   FUNC_1(VAR_5->rr, VAR_5->rr_len, VAR_5->dname_len)
   != VAR_3) {
   struct autr_ta* VAR_7 = VAR_5->next;

   FUNC_0(VAR_5->rr);
   FUNC_0(VAR_5);

   *VAR_6 = VAR_7;
   VAR_5 = VAR_7;
   continue;
  }

  if(VAR_5->s != VAR_0)
   VAR_5->pending_count = 0;
  VAR_6 = &VAR_5->next;
  VAR_5 = VAR_5->next;
 }
}
