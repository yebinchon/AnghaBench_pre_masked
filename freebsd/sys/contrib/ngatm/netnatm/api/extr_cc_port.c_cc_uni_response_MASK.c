
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ccreq {struct ccconn* conn; } ;
struct ccport {scalar_t__ admin; int cookies; } ;
struct ccconn {int dummy; } ;


 int FUNC_0 (struct ccreq*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct ccreq*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct ccconn*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct ccport*,char*,scalar_t__) ;
 struct ccreq* FUNC_4 (struct ccport*,scalar_t__) ;
 int VAR_6 ;

int
FUNC_5(struct ccport *VAR_7, u_int VAR_8, u_int VAR_9, u_int VAR_10)
{
 struct ccconn *VAR_11;
 struct ccreq *VAR_12;

 if (VAR_8 == 0)
  return (VAR_3);

 if (VAR_7->admin != VAR_0)
  return (VAR_4);

 if ((VAR_12 = FUNC_4(VAR_7, VAR_8)) == ((void*)0)) {
  FUNC_3(VAR_7, "UNI response for unknown cookie %u", VAR_8);
  return (VAR_3);
 }
 VAR_11 = VAR_12->conn;

 FUNC_1(&VAR_7->cookies, VAR_12, VAR_6);
 FUNC_0(VAR_12);

 if (VAR_9 == VAR_5)
  return (FUNC_2(VAR_11, VAR_2,
      VAR_8, VAR_9, VAR_10));
 else
  return (FUNC_2(VAR_11, VAR_1,
      VAR_8, VAR_9, VAR_10));
}
