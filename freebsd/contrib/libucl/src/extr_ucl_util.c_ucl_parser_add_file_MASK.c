
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int default_priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ucl_parser*,char const*,int ,int ,int ) ;

bool
FUNC_1 (struct ucl_parser *VAR_2, const char *VAR_3)
{
 if (VAR_2 == ((void*)0)) {
  return 0;
 }

 return FUNC_0(VAR_2, VAR_3,
   VAR_2->default_priority, VAR_0,
   VAR_1);
}
