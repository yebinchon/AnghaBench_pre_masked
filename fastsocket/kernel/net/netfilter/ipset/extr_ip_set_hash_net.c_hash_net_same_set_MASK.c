
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set_hash {scalar_t__ maxelem; scalar_t__ timeout; } ;
struct ip_set {struct ip_set_hash* data; } ;



__attribute__((used)) static bool
FUNC_0(const struct ip_set *VAR_0, const struct ip_set *VAR_1)
{
 const struct ip_set_hash *VAR_2 = VAR_0->data;
 const struct ip_set_hash *VAR_3 = VAR_1->data;


 return VAR_2->maxelem == VAR_3->maxelem &&
        VAR_2->timeout == VAR_3->timeout;
}
