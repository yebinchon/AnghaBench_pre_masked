
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpuset_t ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (char const) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, cpuset_t *VAR_3)
{
 enum { NONE, NUM, DASH } VAR_4;
 int VAR_5;
 int VAR_6;
 const char *VAR_7;

 VAR_4 = NONE;
 VAR_6 = VAR_5 = 0;
 for (VAR_7 = VAR_2; *VAR_7 != '\0';) {
  if (FUNC_3(*VAR_7)) {
   VAR_6 = FUNC_1(VAR_7);
   if (VAR_6 > VAR_0)
    FUNC_2(VAR_1,
        "Only %d cpus supported", VAR_0);
   while (FUNC_3(*VAR_7))
    VAR_7++;
   switch (VAR_4) {
   case NONE:
    VAR_5 = VAR_6;
    VAR_4 = NUM;
    break;
   case DASH:
    for (; VAR_5 <= VAR_6; VAR_5++)
     FUNC_0(VAR_5, VAR_3);
    VAR_4 = NONE;
    break;
   case NUM:
   default:
    return (0);
   }
   continue;
  }
  switch (*VAR_7) {
  case ',':
   switch (VAR_4) {
   case NONE:
    break;
   case NUM:
    FUNC_0(VAR_6, VAR_3);
    VAR_4 = NONE;
    break;
   case DASH:
    return (0);
    break;
   }
   break;
  case '-':
   if (VAR_4 != NUM)
    return (0);
   VAR_4 = DASH;
   break;
  default:
   return (0);
  }
  VAR_7++;
 }
 switch (VAR_4) {
  case NONE:
   break;
  case NUM:
   FUNC_0(VAR_6, VAR_3);
   break;
  case DASH:
   return (0);
 }
 return (1);
}
