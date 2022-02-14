
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_event {int ie_flags; } ;
typedef enum intr_type { ____Placeholder_intr_type } intr_type ;
typedef int driver_intr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct intr_event*,char const*,int *,int ,void*,int ,int,void**) ;
 int FUNC_2 (struct intr_event**,int *,int,int ,int *,int *,int *,int ,char*,int) ;
 int VAR_3 ;

int
FUNC_3(struct intr_event **VAR_4, const char *VAR_5, driver_intr_t VAR_6,
     void *VAR_7, int VAR_8, enum intr_type VAR_9, void **VAR_10)
{
 struct intr_event *VAR_11;
 int VAR_12;

 if (VAR_9 & VAR_2)
  return (VAR_0);

 VAR_11 = (VAR_4 != ((void*)0)) ? *VAR_4 : ((void*)0);

 if (VAR_11 != ((void*)0)) {
  if (!(VAR_11->ie_flags & VAR_1))
   return (VAR_0);
 } else {
  VAR_12 = FUNC_2(&VAR_11, ((void*)0), VAR_1, 0,
      ((void*)0), ((void*)0), ((void*)0), VAR_3, "swi%d:", VAR_8);
  if (VAR_12)
   return (VAR_12);
  if (VAR_4 != ((void*)0))
   *VAR_4 = VAR_11;
 }
 VAR_12 = FUNC_1(VAR_11, VAR_5, ((void*)0), VAR_6, VAR_7,
     FUNC_0(VAR_8), VAR_9, VAR_10);
 return (VAR_12);
}
