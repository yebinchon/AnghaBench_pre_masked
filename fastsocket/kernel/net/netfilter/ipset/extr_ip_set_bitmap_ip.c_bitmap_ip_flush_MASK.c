
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set {struct bitmap_ip* data; } ;
struct bitmap_ip {int memsize; int members; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct ip_set *VAR_0)
{
 struct bitmap_ip *VAR_1 = VAR_0->data;

 FUNC_0(VAR_1->members, 0, VAR_1->memsize);
}
