
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct dn_route* dn_next; } ;
struct TYPE_4__ {TYPE_2__ dst; } ;
struct dn_route {TYPE_1__ u; int fl; } ;
struct TYPE_6__ {int lock; struct dn_route* chain; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (struct dn_route*) ;
 int FUNC_2 (TYPE_2__*,unsigned long) ;
 unsigned long VAR_1 ;
 int FUNC_3 (struct dn_route*,struct dn_route*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dn_route *VAR_2, unsigned VAR_3, struct dn_route **VAR_4)
{
 struct dn_route *VAR_5, **VAR_6;
 unsigned long VAR_7 = VAR_1;

 VAR_6 = &VAR_0[VAR_3].chain;

 FUNC_4(&VAR_0[VAR_3].lock);
 while((VAR_5 = *VAR_6) != ((void*)0)) {
  if (FUNC_0(&VAR_5->fl, &VAR_2->fl)) {

   *VAR_6 = VAR_5->u.dst.dn_next;
   FUNC_3(VAR_5->u.dst.dn_next,
        VAR_0[VAR_3].chain);
   FUNC_3(VAR_0[VAR_3].chain, VAR_5);

   FUNC_2(&VAR_5->u.dst, VAR_7);
   FUNC_5(&VAR_0[VAR_3].lock);

   FUNC_1(VAR_2);
   *VAR_4 = VAR_5;
   return 0;
  }
  VAR_6 = &VAR_5->u.dst.dn_next;
 }

 FUNC_3(VAR_2->u.dst.dn_next, VAR_0[VAR_3].chain);
 FUNC_3(VAR_0[VAR_3].chain, VAR_2);

 FUNC_2(&VAR_2->u.dst, VAR_7);
 FUNC_5(&VAR_0[VAR_3].lock);
 *VAR_4 = VAR_2;
 return 0;
}
