
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_user_mad {int timeout_ms; int retries; int agent_id; } ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int,void*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct ib_user_mad*) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int,struct ib_user_mad*,int) ;

int FUNC_5(int VAR_3, int VAR_4, void *VAR_5, int VAR_6,
       int VAR_7, int VAR_8)
{
 struct ib_user_mad *VAR_9 = VAR_5;
 int VAR_10;

 FUNC_1("fd %d agentid %d umad %p timeout %u",
       VAR_3, VAR_4, VAR_5, VAR_7);
 VAR_1 = 0;

 VAR_9->timeout_ms = VAR_7;
 VAR_9->retries = VAR_8;
 VAR_9->agent_id = VAR_4;

 if (VAR_2 > 1)
  FUNC_2(VAR_9);

 VAR_10 = FUNC_4(VAR_3, VAR_9, VAR_6 + FUNC_3());
 if (VAR_10 == VAR_6 + FUNC_3())
  return 0;

 FUNC_0("write returned %d != sizeof umad %zu + length %d (%m)",
       VAR_10, FUNC_3(), VAR_6);
 if (!VAR_1)
  VAR_1 = VAR_0;
 return -VAR_0;
}
