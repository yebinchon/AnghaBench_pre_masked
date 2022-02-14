
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ip_set {struct bitmap_port* data; } ;
struct TYPE_3__ {unsigned long data; scalar_t__ expires; int function; } ;
struct bitmap_port {TYPE_1__ gc; int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct ip_set *VAR_3)
{
 struct bitmap_port *VAR_4 = VAR_3->data;

 FUNC_2(&VAR_4->gc);
 VAR_4->gc.data = (unsigned long) VAR_3;
 VAR_4->gc.function = VAR_1;
 VAR_4->gc.expires = VAR_2 + FUNC_0(VAR_4->timeout) * VAR_0;
 FUNC_1(&VAR_4->gc);
}
