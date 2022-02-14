
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
typedef int config ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gctl_req*) ;
 struct gctl_req* FUNC_1 () ;
 char* FUNC_2 (struct gctl_req*) ;
 int FUNC_3 (struct gctl_req*,char*,int,...) ;
 int FUNC_4 (struct gctl_req*,char*,int,char*) ;
 int FUNC_5 (int,char* const*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (char*,char const*) ;

__attribute__((used)) static void
FUNC_9(int VAR_7, char * const *VAR_8)
{
 struct gctl_req *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 const char *VAR_13;
 char VAR_14[20], VAR_15[VAR_0 + 1];
 const char *VAR_16;

 VAR_10 = 0;
 VAR_16 = "list";

 if (VAR_7) {
  VAR_6 = 1;
  VAR_5 = 1;
  VAR_16 = VAR_8[0];
  while ((VAR_12 = FUNC_5(VAR_7, VAR_8, "rsvV")) != -1) {
   switch (VAR_12) {
   case 'r':
    VAR_10 |= VAR_1;
    break;
   case 's':
    VAR_10 |= VAR_2;
    break;
   case 'v':
    VAR_10 |= VAR_3;
    break;
   case 'V':
    VAR_10 |= VAR_3;
    VAR_10 |= VAR_4;
    break;
   case '?':
   default:
    return;
   }
  }
  VAR_7 -= VAR_5;
  VAR_8 += VAR_5;

 }

 VAR_9 = FUNC_1();
 FUNC_3(VAR_9, "class", -1, "VINUM");
 FUNC_3(VAR_9, "verb", -1, "list");
 FUNC_3(VAR_9, "cmd", -1, VAR_16);
 FUNC_3(VAR_9, "argc", sizeof(int), &VAR_7);
 FUNC_3(VAR_9, "flags", sizeof(int), &VAR_10);
 FUNC_4(VAR_9, "config", sizeof(VAR_15), VAR_15);
 if (VAR_7) {
  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
   FUNC_7(VAR_14, sizeof(VAR_14), "argv%d", VAR_11);
   FUNC_3(VAR_9, VAR_14, -1, VAR_8[VAR_11]);
  }
 }
 VAR_13 = FUNC_2(VAR_9);
 if (VAR_13 != ((void*)0)) {
  FUNC_8("can't get configuration: %s", VAR_13);
  FUNC_0(VAR_9);
  return;
 }

 FUNC_6("%s", VAR_15);
 FUNC_0(VAR_9);
}
