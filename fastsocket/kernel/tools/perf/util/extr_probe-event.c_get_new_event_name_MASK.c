
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t,char*,char const*,...) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct strlist*,char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_3, size_t VAR_4, const char *VAR_5,
         struct strlist *VAR_6, bool VAR_7)
{
 int VAR_8, VAR_9;


 VAR_9 = FUNC_0(VAR_3, VAR_4, "%s", VAR_5);
 if (VAR_9 < 0) {
  FUNC_1("snprintf() failed: %s\n", FUNC_3(-VAR_9));
  return VAR_9;
 }
 if (!FUNC_4(VAR_6, VAR_3))
  return 0;

 if (!VAR_7) {
  FUNC_2("Error: event \"%s\" already exists. "
      "(Use -f to force duplicates.)\n", VAR_5);
  return -VAR_0;
 }


 for (VAR_8 = 1; VAR_8 < VAR_2; VAR_8++) {
  VAR_9 = FUNC_0(VAR_3, VAR_4, "%s_%d", VAR_5, VAR_8);
  if (VAR_9 < 0) {
   FUNC_1("snprintf() failed: %s\n", FUNC_3(-VAR_9));
   return VAR_9;
  }
  if (!FUNC_4(VAR_6, VAR_3))
   break;
 }
 if (VAR_8 == VAR_2) {
  FUNC_2("Too many events are on the same function.\n");
  VAR_9 = -VAR_1;
 }

 return VAR_9;
}
