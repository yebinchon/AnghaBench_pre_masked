
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char*,int,char*,int,double) ;

__attribute__((used)) static void
FUNC_3(
 const char * VAR_0,
 int VAR_1,
 int VAR_2,
 double VAR_3
 )
{
 char VAR_4[40];
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, sizeof(VAR_4),
        (VAR_1 ? "%.*f" : "%.*g"),
        VAR_2, VAR_3);
 FUNC_0(VAR_5 >= 0 && (size_t)VAR_5 < sizeof(VAR_4));
 FUNC_1(VAR_0, VAR_4, VAR_5);
}
