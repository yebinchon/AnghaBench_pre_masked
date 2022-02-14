
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rbuf ;
typedef int on ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,char*,char const*,int ) ;
 int FUNC_2 (char*,char const*,int,...) ;
 scalar_t__ FUNC_3 (int,int ,int ,int*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;

void
FUNC_6(int VAR_8,
  const char *VAR_9)
{
 int VAR_10;

 static int VAR_11;

 if (FUNC_0(VAR_8, VAR_0, VAR_2) == -1)
  FUNC_1(1, "fcntl(%s) O_NONBLOCK: %s",
         VAR_9, FUNC_4(VAR_7));
 VAR_10 = 1;
 if (FUNC_3(VAR_8, VAR_3,VAR_4, &VAR_10,sizeof(VAR_10)) < 0)
  FUNC_2("setsockopt(%s,SO_BROADCAST): %s",
         VAR_9, FUNC_4(VAR_7));







 if (VAR_11 >= (4*1024)) {
  if (FUNC_3(VAR_8, VAR_3, VAR_6,
          &VAR_11, sizeof(VAR_11)) < 0)
   FUNC_2("setsockopt(%s,SO_RCVBUF=%d): %s",
          VAR_9, VAR_11, FUNC_4(VAR_7));
 } else {
  for (VAR_11 = 60*1024; ; VAR_11 -= 4096) {
   if (FUNC_3(VAR_8, VAR_3, VAR_6,
           &VAR_11, sizeof(VAR_11)) == 0) {
    FUNC_5("RCVBUF=%d", VAR_11);
    break;
   }
   if (VAR_11 < (4*1024)) {
    FUNC_2("setsockopt(%s,SO_RCVBUF = %d): %s",
           VAR_9, VAR_11, FUNC_4(VAR_7));
    break;
   }
  }
 }
}
