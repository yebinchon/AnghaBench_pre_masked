
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zone {struct local_zone* taglist; struct local_zone* name; int region; int lock; } ;


 int FUNC_0 (struct local_zone*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct local_zone* VAR_0)
{
 if(!VAR_0)
  return;
 FUNC_1(&VAR_0->lock);
 FUNC_2(VAR_0->region);
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->taglist);
 FUNC_0(VAR_0);
}
