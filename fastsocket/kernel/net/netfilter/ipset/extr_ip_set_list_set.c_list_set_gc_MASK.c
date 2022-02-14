
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct list_set {TYPE_1__ gc; int timeout; } ;
struct ip_set {int lock; struct list_set* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct list_set*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(unsigned long VAR_2)
{
 struct ip_set *VAR_3 = (struct ip_set *) VAR_2;
 struct list_set *VAR_4 = VAR_3->data;

 FUNC_3(&VAR_3->lock);
 FUNC_2(VAR_4);
 FUNC_4(&VAR_3->lock);

 VAR_4->gc.expires = VAR_1 + FUNC_0(VAR_4->timeout) * VAR_0;
 FUNC_1(&VAR_4->gc);
}
