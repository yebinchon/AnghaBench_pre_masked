
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tomoyo_domain_info {int dummy; } ;
struct TYPE_2__ {struct tomoyo_domain_info* security; } ;


 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static inline struct tomoyo_domain_info *FUNC_1(void)
{
 return FUNC_0()->security;
}
