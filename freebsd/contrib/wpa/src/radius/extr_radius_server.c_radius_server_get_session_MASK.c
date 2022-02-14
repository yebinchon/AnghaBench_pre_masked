
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_session {unsigned int sess_id; struct radius_session* next; } ;
struct radius_client {struct radius_session* sessions; } ;



__attribute__((used)) static struct radius_session *
FUNC_0(struct radius_client *VAR_0, unsigned int VAR_1)
{
 struct radius_session *VAR_2 = VAR_0->sessions;

 while (VAR_2) {
  if (VAR_2->sess_id == VAR_1) {
   break;
  }
  VAR_2 = VAR_2->next;
 }

 return VAR_2;
}
