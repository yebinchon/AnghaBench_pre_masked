
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


 int FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct rtable*) ;
 int FUNC_2 (unsigned int) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_3 (struct rtable*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(unsigned VAR_1, struct rtable *VAR_2)
{
 struct rtable **VAR_3, *VAR_4;

 VAR_3 = &VAR_0[VAR_1].chain;
 FUNC_4(FUNC_2(VAR_1));
 FUNC_0(VAR_2);
 while ((VAR_4 = *VAR_3) != ((void*)0)) {
  if (VAR_4 == VAR_2 || FUNC_3(VAR_4)) {
   *VAR_3 = VAR_4->u.dst.rt_next;
   FUNC_1(VAR_4);
   continue;
  }
  VAR_3 = &VAR_4->u.dst.rt_next;
 }
 FUNC_5(FUNC_2(VAR_1));
}
