
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_user_mad {int agent_id; int length; } ;


 int FUNC_0 (char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,void*,int) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int,int) ;
 int VAR_3 ;
 int FUNC_4 (int,void*,int) ;
 int FUNC_5 () ;

int FUNC_6(int VAR_4, void *VAR_5, int *VAR_6, int VAR_7)
{
 struct ib_user_mad *VAR_8 = VAR_5;
 int VAR_9;

 VAR_3 = 0;
 FUNC_1("fd %d umad %p timeout %u", VAR_4, VAR_5, VAR_7);

 if (!VAR_5 || !VAR_6) {
  VAR_3 = VAR_0;
  return -VAR_0;
 }

 if (VAR_7 && (VAR_9 = FUNC_3(VAR_4, VAR_7)) < 0) {
  if (!VAR_3)
   VAR_3 = -VAR_9;
  return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_4, VAR_5, FUNC_5() + *VAR_6);

 FUNC_2(VAR_5, FUNC_5() + *VAR_6);

 if ((VAR_9 >= 0) && (VAR_9 <= FUNC_5() + *VAR_6)) {
  FUNC_0("mad received by agent %d length %d", VAR_8->agent_id, VAR_9);
  if (VAR_9 > FUNC_5())
   *VAR_6 = VAR_9 - FUNC_5();
  else
   *VAR_6 = 0;
  return VAR_8->agent_id;
 }

 if (VAR_9 == -VAR_2) {
  if (!VAR_3)
   VAR_3 = VAR_2;
  return VAR_9;
 }

 FUNC_0("read returned %zu > sizeof umad %zu + length %d (%m)",
       VAR_8->length - FUNC_5(), FUNC_5(), *VAR_6);

 *VAR_6 = VAR_8->length - FUNC_5();
 if (!VAR_3)
  VAR_3 = VAR_1;
 return -VAR_3;
}
