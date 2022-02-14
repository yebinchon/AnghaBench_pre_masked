
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int sndbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ,int ,int*,int*) ;
 scalar_t__ FUNC_1 (int,int ,int*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (int,char*,char const*,int,int,int,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_5, int VAR_6, const char *VAR_7,
     size_t VAR_8)
{

 socklen_t VAR_9;
 int VAR_10, VAR_11;
 int VAR_12 = VAR_1;

 if (VAR_8 >= 5 && FUNC_2(VAR_7, "PONG\n", 5) == 0)
  VAR_12 = VAR_0;

 VAR_9 = sizeof(VAR_10);
 VAR_10 = 0;
 if (FUNC_0(VAR_6, VAR_2, VAR_3, &VAR_10, &VAR_9) < 0)
  VAR_10 = -1;

 if (FUNC_1(VAR_6, VAR_4, &VAR_11) < 0)
  VAR_11 = -1;

 FUNC_3(VAR_12,
     "CTRL-DEBUG: %s: sock=%d sndbuf=%d outq=%d send_len=%d",
     VAR_5, VAR_6, VAR_10, VAR_11, (int) VAR_8);

}
