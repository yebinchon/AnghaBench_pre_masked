
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dst_entry {int dummy; } ;
struct TYPE_4__ {struct dn_route* dn_next; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct dn_route {TYPE_2__ u; } ;
struct TYPE_6__ {int lock; int chain; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct dn_route* FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 int VAR_3;
 struct dn_route *VAR_4, *VAR_5;

 for(VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(&VAR_1[VAR_3].lock);

  if ((VAR_4 = FUNC_3(&VAR_1[VAR_3].chain, ((void*)0))) == ((void*)0))
   goto nothing_to_declare;

  for(; VAR_4; VAR_4=VAR_5) {
   VAR_5 = VAR_4->u.dst.dn_next;
   VAR_4->u.dst.dn_next = ((void*)0);
   FUNC_0((struct dst_entry *)VAR_4);
  }

nothing_to_declare:
  FUNC_2(&VAR_1[VAR_3].lock);
 }
}
