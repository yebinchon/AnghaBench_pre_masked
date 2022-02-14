
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmtp_session {int terminate; } ;
struct capi_ctr {struct cmtp_session* driverdata; } ;


 int FUNC_0 (char*,struct capi_ctr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct capi_ctr*) ;
 int FUNC_3 (struct cmtp_session*) ;

__attribute__((used)) static void FUNC_4(struct capi_ctr *VAR_0)
{
 struct cmtp_session *VAR_1 = VAR_0->driverdata;

 FUNC_0("ctrl %p", VAR_0);

 FUNC_2(VAR_0);

 FUNC_1(&VAR_1->terminate);
 FUNC_3(VAR_1);
}
