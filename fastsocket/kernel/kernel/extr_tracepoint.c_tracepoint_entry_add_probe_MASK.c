
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_entry {void** funcs; int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void** FUNC_2 (int) ;
 int FUNC_3 (struct tracepoint_entry*) ;
 int FUNC_4 (void**,void**,int) ;

__attribute__((used)) static void *
FUNC_5(struct tracepoint_entry *VAR_2, void *VAR_3)
{
 int VAR_4 = 0;
 void **VAR_5, **VAR_6;

 FUNC_1(!VAR_3);

 FUNC_3(VAR_2);
 VAR_5 = VAR_2->funcs;
 if (VAR_5) {

  for (VAR_4 = 0; VAR_5[VAR_4]; VAR_4++)
   if (VAR_5[VAR_4] == VAR_3)
    return FUNC_0(-VAR_0);
 }

 VAR_6 = FUNC_2(VAR_4 + 2);
 if (VAR_6 == ((void*)0))
  return FUNC_0(-VAR_1);
 if (VAR_5)
  FUNC_4(VAR_6, VAR_5, VAR_4 * sizeof(void *));
 VAR_6[VAR_4] = VAR_3;
 VAR_6[VAR_4 + 1] = ((void*)0);
 VAR_2->refcount = VAR_4 + 1;
 VAR_2->funcs = VAR_6;
 FUNC_3(VAR_2);
 return VAR_5;
}
