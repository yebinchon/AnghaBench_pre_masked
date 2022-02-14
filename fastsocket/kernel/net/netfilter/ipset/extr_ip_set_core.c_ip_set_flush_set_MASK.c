
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_set {int lock; TYPE_1__* variant; int name; } ;
struct TYPE_2__ {int (* flush ) (struct ip_set*) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ip_set*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ip_set *VAR_0)
{
 FUNC_0("set: %s\n", VAR_0->name);

 FUNC_2(&VAR_0->lock);
 VAR_0->variant->flush(VAR_0);
 FUNC_3(&VAR_0->lock);
}
