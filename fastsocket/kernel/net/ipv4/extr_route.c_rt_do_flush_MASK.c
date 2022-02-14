
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct rtable* rt_next; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct rtable {TYPE_2__ u; } ;
struct TYPE_6__ {struct rtable* chain; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct rtable*) ;
 int FUNC_3 (unsigned int) ;
 unsigned int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_4 (struct rtable*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(int VAR_2)
{
 unsigned int VAR_3;
 struct rtable *VAR_4, *VAR_5;
 struct rtable * VAR_6;

 for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++) {
  if (VAR_2 && FUNC_1())
   FUNC_0();
  VAR_4 = VAR_1[VAR_3].chain;
  if (!VAR_4)
   continue;

  FUNC_5(FUNC_3(VAR_3));
  VAR_4 = VAR_1[VAR_3].chain;
  VAR_1[VAR_3].chain = ((void*)0);
  VAR_6 = ((void*)0);

  FUNC_6(FUNC_3(VAR_3));

  for (; VAR_4 != VAR_6; VAR_4 = VAR_5) {
   VAR_5 = VAR_4->u.dst.rt_next;
   FUNC_2(VAR_4);
  }
 }
}
