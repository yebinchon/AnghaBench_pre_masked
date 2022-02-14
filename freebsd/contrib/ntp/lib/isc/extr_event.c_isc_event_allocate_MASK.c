
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isc_event {int dummy; } ;
typedef int * isc_taskaction_t ;
typedef int isc_mem_t ;
typedef int isc_eventtype_t ;
typedef int isc_event_t ;


 int FUNC_0 (void const*,void*) ;
 int FUNC_1 (int *,size_t,int ,int *,int ,int *,void*,void*,int ,int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int * FUNC_3 (int *,size_t) ;

isc_event_t *
FUNC_4(isc_mem_t *VAR_1, void *VAR_2, isc_eventtype_t VAR_3,
     isc_taskaction_t VAR_4, const void *VAR_5, size_t VAR_6)
{
 isc_event_t *VAR_7;
 void *VAR_8;

 FUNC_2(VAR_6 >= sizeof(struct isc_event));
 FUNC_2(VAR_4 != ((void*)0));

 VAR_7 = FUNC_3(VAR_1, VAR_6);
 if (VAR_7 == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_5, VAR_8);

 FUNC_1(VAR_7, VAR_6, 0, ((void*)0), VAR_3, VAR_4, VAR_8,
         VAR_2, VAR_0, VAR_1);

 return (VAR_7);
}
