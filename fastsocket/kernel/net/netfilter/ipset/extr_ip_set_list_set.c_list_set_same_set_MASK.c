
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_set {scalar_t__ size; scalar_t__ timeout; } ;
struct ip_set {struct list_set* data; } ;



__attribute__((used)) static bool
FUNC_0(const struct ip_set *VAR_0, const struct ip_set *VAR_1)
{
 const struct list_set *VAR_2 = VAR_0->data;
 const struct list_set *VAR_3 = VAR_1->data;

 return VAR_2->size == VAR_3->size &&
        VAR_2->timeout == VAR_3->timeout;
}
