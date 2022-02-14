
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum event_type { ____Placeholder_event_type } event_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static enum event_type FUNC_2(char **VAR_2)
{
 enum event_type VAR_3;

 for (;;) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 != VAR_1)
   return VAR_3;

  FUNC_1(*VAR_2);
 }


 *VAR_2 = ((void*)0);
 return VAR_0;
}
