
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum event_type { ____Placeholder_event_type } event_type ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(enum event_type VAR_0, const char *VAR_1,
      enum event_type VAR_2, const char *VAR_3)
{
 if (VAR_0 != VAR_2) {
  FUNC_0("Error: expected type %d but read %d",
      VAR_2, VAR_0);
  return -1;
 }

 if (FUNC_1(VAR_1, VAR_3) != 0) {
  FUNC_0("Error: expected '%s' but read '%s'",
      VAR_3, VAR_1);
  return -1;
 }
 return 0;
}
