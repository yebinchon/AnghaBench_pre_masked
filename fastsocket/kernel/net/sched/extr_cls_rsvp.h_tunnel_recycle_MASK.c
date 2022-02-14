
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int tmap ;
struct rsvp_session {struct rsvp_filter** ht; struct rsvp_session* next; } ;
struct rsvp_head {int tmap; int tgenerator; struct rsvp_session** ht; } ;
struct TYPE_2__ {int classid; } ;
struct rsvp_filter {scalar_t__ tunnelhdr; TYPE_1__ res; struct rsvp_filter* next; } ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct rsvp_head*) ;

__attribute__((used)) static void FUNC_3(struct rsvp_head *VAR_0)
{
 struct rsvp_session **VAR_1 = VAR_0->ht;
 u32 VAR_2[256/32];
 int VAR_3, VAR_4;

 FUNC_1(VAR_2, 0, sizeof(VAR_2));

 for (VAR_3=0; VAR_3<256; VAR_3++) {
  struct rsvp_session *VAR_5;
  for (VAR_5 = VAR_1[VAR_3]; VAR_5; VAR_5 = VAR_5->next) {
   for (VAR_4=0; VAR_4<=16; VAR_4++) {
    struct rsvp_filter *VAR_6;

    for (VAR_6 = VAR_5->ht[VAR_4]; VAR_6; VAR_6 = VAR_6->next) {
     if (VAR_6->tunnelhdr == 0)
      continue;
     VAR_0->tgenerator = VAR_6->res.classid;
     FUNC_2(VAR_0);
    }
   }
  }
 }

 FUNC_0(VAR_0->tmap, VAR_2, sizeof(VAR_2));
}
