
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sa_pred_ent {scalar_t__ is_loopback; scalar_t__ parse; } ;
typedef int ss ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,struct sockaddr*,int*) ;
 scalar_t__ FUNC_2 (struct sockaddr*) ;
 struct sa_pred_ent* VAR_0 ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct sockaddr_storage VAR_2;
 int VAR_3, VAR_4;

 for (VAR_4=0; VAR_0[VAR_4].parse; ++VAR_4) {
  struct sa_pred_ent *VAR_5 = &VAR_0[VAR_4];
  int VAR_6 = sizeof(VAR_2);

  VAR_3 = FUNC_1(VAR_5->parse, (struct sockaddr*)&VAR_2, &VAR_6);

  if (VAR_3<0) {
   FUNC_0(("Couldn't parse %s!", VAR_5->parse));
   continue;
  }


  if (VAR_5->is_loopback != FUNC_2((struct sockaddr*)&VAR_2)) {
   FUNC_0(("evutil_sockaddr_loopback(%s) not as expected",
    VAR_5->parse));
  }
 }
}
