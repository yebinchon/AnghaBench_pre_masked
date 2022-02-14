
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service {scalar_t__ s_magic; char const* s_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

const char *
FUNC_1(struct service *VAR_1)
{

 FUNC_0(VAR_1->s_magic == VAR_0);
 return (VAR_1->s_name);
}
