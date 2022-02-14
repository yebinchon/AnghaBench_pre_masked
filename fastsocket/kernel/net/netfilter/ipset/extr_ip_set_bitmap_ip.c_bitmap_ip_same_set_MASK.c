
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set {struct bitmap_ip* data; } ;
struct bitmap_ip {scalar_t__ first_ip; scalar_t__ last_ip; scalar_t__ netmask; scalar_t__ timeout; } ;



__attribute__((used)) static bool
FUNC_0(const struct ip_set *VAR_0, const struct ip_set *VAR_1)
{
 const struct bitmap_ip *VAR_2 = VAR_0->data;
 const struct bitmap_ip *VAR_3 = VAR_1->data;

 return VAR_2->first_ip == VAR_3->first_ip &&
        VAR_2->last_ip == VAR_3->last_ip &&
        VAR_2->netmask == VAR_3->netmask &&
        VAR_2->timeout == VAR_3->timeout;
}
