
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int default_priority; } ;


 int FUNC_0 (struct ucl_parser*,unsigned char const*,size_t,int ) ;

bool
FUNC_1 (struct ucl_parser *VAR_0, const char *VAR_1,
  size_t VAR_2)
{
 if (VAR_0 == ((void*)0)) {
  return 0;
 }

 return FUNC_0 (VAR_0,
   (const unsigned char *)VAR_1, VAR_2, VAR_0->default_priority);
}
