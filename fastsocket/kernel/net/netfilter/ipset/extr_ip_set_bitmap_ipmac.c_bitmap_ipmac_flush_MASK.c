
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set {struct bitmap_ipmac* data; } ;
struct bitmap_ipmac {int last_ip; int first_ip; int dsize; int members; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ip_set *VAR_0)
{
 struct bitmap_ipmac *VAR_1 = VAR_0->data;

 FUNC_0(VAR_1->members, 0,
        (VAR_1->last_ip - VAR_1->first_ip + 1) * VAR_1->dsize);
}
