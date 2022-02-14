
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; scalar_t__ revents; scalar_t__ events; } ;
typedef int hostname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct pollfd*,int,int) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int,char*,int) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,char*,...) ;

__attribute__((used)) static void FUNC_9(void)
{
 char VAR_6[128];
 int VAR_7;
 int VAR_8;
 struct pollfd VAR_9[2];
 int VAR_10 = 1;
 int VAR_11;

 VAR_11 = FUNC_1();
 if (VAR_11 >= 0)
  VAR_10 = 2;

 while (1) {
  VAR_7 = FUNC_2(VAR_4, VAR_2);
  if (VAR_7 < 0) {
   FUNC_8(VAR_1,
    "Open %s Failed: retry in %d seconds\n",
    VAR_4, VAR_5);
   FUNC_7(VAR_5);
   continue;
  }

  VAR_9[0].fd = VAR_7;
  VAR_9[0].events = 0;
  VAR_9[0].revents = 0;

  VAR_9[1].fd = VAR_11;
  VAR_9[1].events = VAR_3;
  VAR_9[1].revents = 0;

  VAR_8 = FUNC_3(VAR_9, VAR_10, -1);

  if (VAR_8 > 0) {
   if (FUNC_5(VAR_7, VAR_6, sizeof(VAR_6)) != 0)
    VAR_6[0] = '\0';

   if (VAR_9[0].revents != 0)
    FUNC_8(VAR_1, "Hostname change: %s\n", VAR_6);

   if (VAR_9[1].revents != 0)
    FUNC_4(VAR_11, VAR_6);

   VAR_8 = FUNC_6((const char *)VAR_6, 0);
  } else {
   FUNC_8(VAR_1, "Poll %s Failed\n", VAR_4);
   VAR_8 = -VAR_0;
  }

  FUNC_0(VAR_7);

  if (VAR_8)
   FUNC_7(VAR_5);
 }
}
