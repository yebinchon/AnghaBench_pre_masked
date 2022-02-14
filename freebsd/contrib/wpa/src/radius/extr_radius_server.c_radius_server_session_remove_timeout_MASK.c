
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_session {int sess_id; } ;
struct radius_server_data {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct radius_server_data*,struct radius_session*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
       void *VAR_1)
{
 struct radius_server_data *VAR_2 = VAR_0;
 struct radius_session *VAR_3 = VAR_1;
 FUNC_0("Removing completed session 0x%x", VAR_3->sess_id);
 FUNC_1(VAR_2, VAR_3);
}
