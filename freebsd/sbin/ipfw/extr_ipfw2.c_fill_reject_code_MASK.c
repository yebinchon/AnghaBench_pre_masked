
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char**,int ) ;

__attribute__((used)) static void
FUNC_3(u_short *VAR_2, char *VAR_3)
{
 int VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_2(VAR_3, &VAR_5, 0);
 if (VAR_5 == VAR_3 || *VAR_5 != '\0' || VAR_4 >= 0x100)
  VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (VAR_4 < 0)
  FUNC_0(VAR_0, "unknown ICMP unreachable code ``%s''", VAR_3);
 *VAR_2 = VAR_4;
 return;
}
