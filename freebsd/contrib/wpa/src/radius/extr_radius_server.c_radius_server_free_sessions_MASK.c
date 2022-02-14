
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_session {struct radius_session* next; } ;
struct radius_server_data {int dummy; } ;


 int FUNC_0 (struct radius_server_data*,struct radius_session*) ;

__attribute__((used)) static void FUNC_1(struct radius_server_data *VAR_0,
     struct radius_session *VAR_1)
{
 struct radius_session *VAR_2, *VAR_3;

 VAR_2 = VAR_1;
 while (VAR_2) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_0(VAR_0, VAR_3);
 }
}
