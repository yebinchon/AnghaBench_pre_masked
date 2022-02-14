
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc_class_hash {int hashelems; } ;
struct Qdisc_class_common {int hnode; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct Qdisc_class_hash *VAR_0,
        struct Qdisc_class_common *VAR_1)
{
 FUNC_0(&VAR_1->hnode);
 VAR_0->hashelems--;
}
