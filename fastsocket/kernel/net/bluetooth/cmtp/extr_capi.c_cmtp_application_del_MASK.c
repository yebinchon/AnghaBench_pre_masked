
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmtp_session {int dummy; } ;
struct cmtp_application {int list; } ;


 int FUNC_0 (char*,struct cmtp_session*,struct cmtp_application*) ;
 int FUNC_1 (struct cmtp_application*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cmtp_session *VAR_0, struct cmtp_application *VAR_1)
{
 FUNC_0("session %p application %p", VAR_0, VAR_1);

 if (VAR_1) {
  FUNC_2(&VAR_1->list);
  FUNC_1(VAR_1);
 }
}
