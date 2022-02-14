
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set {struct bitmap_ipmac* data; } ;
struct bitmap_ipmac {int members; int gc; int timeout; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bitmap_ipmac*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ip_set *VAR_0)
{
 struct bitmap_ipmac *VAR_1 = VAR_0->data;

 if (FUNC_3(VAR_1->timeout))
  FUNC_0(&VAR_1->gc);

 FUNC_1(VAR_1->members);
 FUNC_2(VAR_1);

 VAR_0->data = ((void*)0);
}
