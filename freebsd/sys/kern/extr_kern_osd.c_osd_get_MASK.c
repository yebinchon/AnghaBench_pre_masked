
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct rm_priotracker {int dummy; } ;
struct osd {size_t osd_nslots; void** osd_slots; } ;
struct TYPE_2__ {int osd_object_lock; int ** osd_destructors; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,size_t,size_t,...) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *,struct rm_priotracker*) ;
 int FUNC_3 (int *,struct rm_priotracker*) ;

void *
FUNC_4(u_int VAR_3, struct osd *VAR_4, u_int VAR_5)
{
 struct rm_priotracker VAR_6;
 void *VAR_7;

 FUNC_0(VAR_3 >= VAR_0 && VAR_3 <= VAR_1, ("Invalid type."));
 FUNC_0(VAR_5 > 0, ("Invalid slot."));
 FUNC_0(VAR_2[VAR_3].osd_destructors[VAR_5 - 1] != ((void*)0), ("Unused slot."));

 FUNC_2(&VAR_2[VAR_3].osd_object_lock, &VAR_6);
 if (VAR_5 > VAR_4->osd_nslots) {
  VAR_7 = ((void*)0);
  FUNC_1("Slot doesn't exist (type=%u, slot=%u).", VAR_3, VAR_5);
 } else {
  VAR_7 = VAR_4->osd_slots[VAR_5 - 1];
  FUNC_1("Returning slot value (type=%u, slot=%u, value=%p).",
      VAR_3, VAR_5, VAR_7);
 }
 FUNC_3(&VAR_2[VAR_3].osd_object_lock, &VAR_6);
 return (VAR_7);
}
