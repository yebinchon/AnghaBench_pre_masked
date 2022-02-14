
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum event_type { ____Placeholder_event_type } event_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 char FUNC_2 () ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*,char*,char,char) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static enum event_type FUNC_6(char **VAR_2)
{
 enum event_type VAR_3;
 char *VAR_4 = ((void*)0);

 do {
  FUNC_0(VAR_4);
  VAR_3 = FUNC_3(&VAR_4);
 } while (VAR_3 == VAR_0 || VAR_3 == VAR_1);


 if (VAR_4 &&
     (FUNC_5(VAR_4, "=") == 0 || FUNC_5(VAR_4, "!") == 0) &&
     FUNC_2() == '~') {

  *VAR_2 = FUNC_1(3);
  FUNC_4(*VAR_2, "%c%c", *VAR_4, '~');
  FUNC_0(VAR_4);

  FUNC_3(&VAR_4);
  FUNC_0(VAR_4);
 } else
  *VAR_2 = VAR_4;

 return VAR_3;
}
