
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 char const* FUNC_0 (int ,char*,int const) ;

__attribute__((used)) static const char *
FUNC_1(const uint16_t VAR_1)
{
 return VAR_1 > 255 ? "INVALID code" : FUNC_0(VAR_0, "code%u", VAR_1);
}
