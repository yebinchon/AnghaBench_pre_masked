
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_entry {void** funcs; int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void** FUNC_1 (int) ;
 int FUNC_2 (struct tracepoint_entry*) ;

__attribute__((used)) static void *
FUNC_3(struct tracepoint_entry *VAR_2, void *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0, VAR_6;
 void **VAR_7, **VAR_8;

 VAR_7 = VAR_2->funcs;

 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_2(VAR_2);

 for (VAR_4 = 0; VAR_7[VAR_4]; VAR_4++) {
  if ((!VAR_3 || VAR_7[VAR_4] == VAR_3))
   VAR_5++;
 }

 if (VAR_4 - VAR_5 == 0) {

  VAR_2->funcs = ((void*)0);
  VAR_2->refcount = 0;
  FUNC_2(VAR_2);
  return VAR_7;
 } else {
  int VAR_9 = 0;


  VAR_8 = FUNC_1(VAR_4 - VAR_5 + 1);
  if (VAR_8 == ((void*)0))
   return FUNC_0(-VAR_1);
  for (VAR_6 = 0; VAR_7[VAR_6]; VAR_6++)
   if ((VAR_3 && VAR_7[VAR_6] != VAR_3))
    VAR_8[VAR_9++] = VAR_7[VAR_6];
  VAR_8[VAR_4 - VAR_5] = ((void*)0);
  VAR_2->refcount = VAR_4 - VAR_5;
  VAR_2->funcs = VAR_8;
 }
 FUNC_2(VAR_2);
 return VAR_7;
}
