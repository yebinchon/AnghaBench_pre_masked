
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
typedef int * osd_method_t ;
typedef int * osd_destructor_t ;
struct TYPE_2__ {size_t osd_ntslots; int osd_nmethods; int osd_module_lock; int ** osd_methods; int ** osd_destructors; int osd_object_lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,size_t,size_t) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int **,void*,int) ;
 int FUNC_3 (int **,int ) ;
 void* FUNC_4 (int,int ,int ) ;
 int * VAR_4 ;
 TYPE_1__* VAR_5 ;
 int ** FUNC_5 (int **,int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int
FUNC_10(u_int VAR_6, osd_destructor_t VAR_7, osd_method_t *VAR_8)
{
 void *VAR_9;
 u_int VAR_10, VAR_11;

 FUNC_0(VAR_6 >= VAR_2 && VAR_6 <= VAR_3, ("Invalid type."));





 if (VAR_7 == ((void*)0))
  VAR_7 = VAR_4;

 FUNC_8(&VAR_5[VAR_6].osd_module_lock);



 for (VAR_10 = 0; VAR_10 < VAR_5[VAR_6].osd_ntslots; VAR_10++) {
  if (VAR_5[VAR_6].osd_destructors[VAR_10] == ((void*)0)) {
   FUNC_1("Unused slot found (type=%u, slot=%u).",
       VAR_6, VAR_10);
   break;
  }
 }



 if (VAR_10 == VAR_5[VAR_6].osd_ntslots) {
  VAR_5[VAR_6].osd_ntslots++;
  if (VAR_5[VAR_6].osd_nmethods != 0)
   VAR_5[VAR_6].osd_methods = FUNC_5(VAR_5[VAR_6].osd_methods,
       sizeof(osd_method_t) * VAR_5[VAR_6].osd_ntslots *
       VAR_5[VAR_6].osd_nmethods, VAR_0, VAR_1);
  VAR_9 = FUNC_4(sizeof(osd_destructor_t) *
      VAR_5[VAR_6].osd_ntslots, VAR_0, VAR_1);
  FUNC_6(&VAR_5[VAR_6].osd_object_lock);
  FUNC_2(VAR_5[VAR_6].osd_destructors, VAR_9,
      sizeof(osd_destructor_t) * VAR_10);
  FUNC_3(VAR_5[VAR_6].osd_destructors, VAR_0);
  VAR_5[VAR_6].osd_destructors = VAR_9;
  FUNC_7(&VAR_5[VAR_6].osd_object_lock);
  FUNC_1("New slot allocated (type=%u, slot=%u).",
      VAR_6, VAR_10 + 1);
 }

 VAR_5[VAR_6].osd_destructors[VAR_10] = VAR_7;
 if (VAR_5[VAR_6].osd_nmethods != 0) {
  for (VAR_11 = 0; VAR_11 < VAR_5[VAR_6].osd_nmethods; VAR_11++)
   VAR_5[VAR_6].osd_methods[VAR_10 * VAR_5[VAR_6].osd_nmethods + VAR_11]
       = VAR_8 != ((void*)0) ? VAR_8[VAR_11] : ((void*)0);
 }
 FUNC_9(&VAR_5[VAR_6].osd_module_lock);
 return (VAR_10 + 1);
}
