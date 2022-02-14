
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int default_priority; } ;


 int FUNC_0 (struct ucl_parser*,int,int ) ;

bool
FUNC_1 (struct ucl_parser *VAR_0, int VAR_1)
{
 if (VAR_0 == ((void*)0)) {
  return 0;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_0->default_priority);
}
