
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
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int,scalar_t__,char*,int ,int) ;
 int FUNC_1 (char*,char*,long long) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_7, int64_t VAR_8)
{
 char VAR_9[6];
 int VAR_10;

 VAR_10 = VAR_1 | VAR_4 | VAR_2;
 if (VAR_6 == VAR_5)
  VAR_10 |= VAR_3;

 FUNC_0(VAR_9, sizeof(VAR_9) - (VAR_8 < 0 ? 0 : 1),
     VAR_8, "", VAR_0, VAR_10);

 FUNC_1("value", "%lld", (long long) VAR_8);
 FUNC_2(VAR_7, VAR_9);
}
