
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char*,int,char*,int ) ;

__attribute__((used)) static void
FUNC_3(
 const char *VAR_0,
 u_long VAR_1
 )
{
 char VAR_2[24];
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, sizeof(VAR_2), "%lu", VAR_1);
 FUNC_0(VAR_3 >= 0 && (size_t)VAR_3 < sizeof(VAR_2));
 FUNC_1(VAR_0, VAR_2, VAR_3);
}
