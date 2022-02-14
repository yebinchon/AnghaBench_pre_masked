
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set {struct bitmap_port* data; } ;
struct bitmap_port {scalar_t__ first_port; scalar_t__ last_port; scalar_t__ timeout; } ;



__attribute__((used)) static bool
FUNC_0(const struct ip_set *VAR_0, const struct ip_set *VAR_1)
{
 const struct bitmap_port *VAR_2 = VAR_0->data;
 const struct bitmap_port *VAR_3 = VAR_1->data;

 return VAR_2->first_port == VAR_3->first_port &&
        VAR_2->last_port == VAR_3->last_port &&
        VAR_2->timeout == VAR_3->timeout;
}
