
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WSADATA ;
typedef int WORD ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 () ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int,char const**,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;

int
FUNC_12(int VAR_8, const char **VAR_9)
{
 if (FUNC_8(VAR_1, VAR_3) == VAR_2)
  return 1;
 if (!FUNC_6("EVENT_NO_DEBUG_LOCKS"))
  FUNC_4();


 if (FUNC_6("EVENT_DEBUG_MODE")) {
  FUNC_3();
  VAR_4 = 1;
 }
 if (FUNC_6("EVENT_DEBUG_LOGGING_ALL")) {
  FUNC_2(VAR_0);
 }

 FUNC_10(VAR_6);

 FUNC_5(&VAR_5, 0);

 if (FUNC_9(VAR_8,VAR_9,VAR_7))
  return 1;

 FUNC_7();

 return 0;
}
