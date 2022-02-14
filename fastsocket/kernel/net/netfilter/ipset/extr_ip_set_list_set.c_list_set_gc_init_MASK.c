
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; scalar_t__ expires; int function; } ;
struct list_set {TYPE_1__ gc; int timeout; } ;
struct ip_set {struct list_set* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct ip_set *VAR_3)
{
 struct list_set *VAR_4 = VAR_3->data;

 FUNC_2(&VAR_4->gc);
 VAR_4->gc.data = (unsigned long) VAR_3;
 VAR_4->gc.function = VAR_2;
 VAR_4->gc.expires = VAR_1 + FUNC_0(VAR_4->timeout) * VAR_0;
 FUNC_1(&VAR_4->gc);
}
