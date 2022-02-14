
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tok {int dummy; } ;


 struct tok* VAR_0 ;
 struct tok* VAR_1 ;
 char const* FUNC_0 (struct tok const*,char*,int const) ;

const char *
FUNC_1(const uint32_t VAR_2)
{
 const struct tok *VAR_3 = (VAR_2 & 0xff000000) == 0 ? VAR_1 : VAR_0;
 return FUNC_0(VAR_3, "unknown", VAR_2);
}
