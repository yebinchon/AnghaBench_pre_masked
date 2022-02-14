
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct rm_priotracker {int dummy; } ;
struct osd {size_t osd_nslots; int * osd_slots; } ;
struct TYPE_2__ {int osd_object_lock; int ** osd_destructors; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,size_t,...) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (size_t,struct osd*,size_t,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int *,struct rm_priotracker*) ;
 int FUNC_4 (int *,struct rm_priotracker*) ;

void
FUNC_5(u_int VAR_3, struct osd *VAR_4)
{
 struct rm_priotracker VAR_5;
 u_int VAR_6;

 FUNC_0(VAR_3 >= VAR_0 && VAR_3 <= VAR_1, ("Invalid type."));

 if (VAR_4->osd_nslots == 0) {
  FUNC_0(VAR_4->osd_slots == ((void*)0), ("Non-null osd_slots."));

  return;
 }

 FUNC_3(&VAR_2[VAR_3].osd_object_lock, &VAR_5);
 for (VAR_6 = 1; VAR_6 <= VAR_4->osd_nslots; VAR_6++) {
  if (VAR_2[VAR_3].osd_destructors[VAR_6 - 1] != ((void*)0))
   FUNC_2(VAR_3, VAR_4, VAR_6, 0);
  else
   FUNC_1("Unused slot (type=%u, slot=%u).", VAR_3, VAR_6);
 }
 FUNC_4(&VAR_2[VAR_3].osd_object_lock, &VAR_5);
 FUNC_1("Object exit (type=%u).", VAR_3);
}
