
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,unsigned int,unsigned int,unsigned int,char const*) ;

__attribute__((used)) static const char *
FUNC_1(uint32_t VAR_0)
{
 static char VAR_1[32];

 unsigned int VAR_2 = VAR_0 / 10000000U;
 VAR_0 -= VAR_2 * 10000000U;

 unsigned int VAR_3 = VAR_0 / 10000U;
 VAR_0 -= VAR_3 * 10000U;

 unsigned int VAR_4 = VAR_0 / 10U;
 VAR_0 -= VAR_4 * 10U;

 const char *VAR_5 = VAR_0 == 0 ? "alpha" : VAR_0 == 1 ? "beta" : "";

 FUNC_0(VAR_1, sizeof(VAR_1), "%u.%u.%u%s",
   VAR_2, VAR_3, VAR_4, VAR_5);
 return VAR_1;
}
