
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum event_type { ____Placeholder_event_type } event_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static enum event_type FUNC_2(char **VAR_3)
{
 enum event_type VAR_4;

 for (;;) {
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4 != VAR_2 && VAR_4 != VAR_0)
   return VAR_4;
  FUNC_1(*VAR_3);
  *VAR_3 = ((void*)0);
 }


 *VAR_3 = ((void*)0);
 return VAR_1;
}
