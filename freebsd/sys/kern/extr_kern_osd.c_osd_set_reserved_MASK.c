
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct rm_priotracker {int dummy; } ;
struct osd {size_t osd_nslots; void** osd_slots; } ;
struct TYPE_2__ {int osd_object_lock; int osd_list_lock; int osd_list; int ** osd_destructors; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,struct osd*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,size_t,...) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (void**,int ) ;
 int FUNC_4 (void**,void**,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (void**) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 void** FUNC_8 (void**,int,int ,int) ;
 int FUNC_9 (int *,struct rm_priotracker*) ;
 int FUNC_10 (int *,struct rm_priotracker*) ;

int
FUNC_11(u_int VAR_8, struct osd *VAR_9, u_int VAR_10, void **VAR_11,
    void *VAR_12)
{
 struct rm_priotracker VAR_13;

 FUNC_0(VAR_8 >= VAR_4 && VAR_8 <= VAR_5, ("Invalid type."));
 FUNC_0(VAR_10 > 0, ("Invalid slot."));
 FUNC_0(VAR_7[VAR_8].osd_destructors[VAR_10 - 1] != ((void*)0), ("Unused slot."));

 FUNC_9(&VAR_7[VAR_8].osd_object_lock, &VAR_13);
 if (VAR_10 > VAR_9->osd_nslots) {
  void **VAR_14;

  if (VAR_12 == ((void*)0)) {
   FUNC_2(
       "Not allocating null slot (type=%u, slot=%u).",
       VAR_8, VAR_10);
   FUNC_10(&VAR_7[VAR_8].osd_object_lock, &VAR_13);
   if (VAR_11)
    FUNC_7(VAR_11);
   return (0);
  }





  if (VAR_11) {




   VAR_14 = VAR_11;
   if (VAR_9->osd_nslots != 0) {
    FUNC_4(VAR_14, VAR_9->osd_slots,
        sizeof(void *) * VAR_9->osd_nslots);
    FUNC_3(VAR_9->osd_slots, VAR_2);
   }
  } else {
   VAR_14 = FUNC_8(VAR_9->osd_slots, sizeof(void *) * VAR_10,
       VAR_2, VAR_1 | VAR_3);
   if (VAR_14 == ((void*)0)) {
    FUNC_10(&VAR_7[VAR_8].osd_object_lock,
        &VAR_13);
    return (VAR_0);
   }
  }
  if (VAR_9->osd_nslots == 0) {




   FUNC_5(&VAR_7[VAR_8].osd_list_lock);
   FUNC_1(&VAR_7[VAR_8].osd_list, VAR_9, VAR_6);
   FUNC_6(&VAR_7[VAR_8].osd_list_lock);
   FUNC_2("Setting first slot (type=%u).", VAR_8);
  } else
   FUNC_2("Growing slots array (type=%u).", VAR_8);
  VAR_9->osd_slots = VAR_14;
  VAR_9->osd_nslots = VAR_10;
 } else if (VAR_11)
  FUNC_7(VAR_11);
 FUNC_2("Setting slot value (type=%u, slot=%u, value=%p).", VAR_8,
     VAR_10, VAR_12);
 VAR_9->osd_slots[VAR_10 - 1] = VAR_12;
 FUNC_10(&VAR_7[VAR_8].osd_object_lock, &VAR_13);
 return (0);
}
