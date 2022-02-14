
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,scalar_t__,char*,int ,int) ;
 int FUNC_1 (char*,char*,long long) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_4, int64_t VAR_5)
{
 char VAR_6[6];
 int VAR_7;

 VAR_7 = VAR_3 | VAR_1 | VAR_2;

 FUNC_0(VAR_6, sizeof(VAR_6) - (VAR_5 < 0 ? 0 : 1),
     VAR_5, "", VAR_0, VAR_7);

 FUNC_1("value", "%lld", (long long) VAR_5);
 FUNC_2(VAR_4, VAR_6);
}
