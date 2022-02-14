
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int path ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int * VAR_6 ;
 char* VAR_7 ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 void* FUNC_3 (char*,int ) ;
 void* FUNC_4 (void*,char*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int ,char*,int ,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int,char*,char*,char*) ;
 int * FUNC_12 (char*,char) ;
 char* FUNC_13 (int ) ;
 char* FUNC_14 (char**,char*) ;
 int * VAR_9 ;
 int FUNC_15 (char*,char*,int ) ;

__attribute__((used)) static void
FUNC_16(void)
{
 char *VAR_10, VAR_11[VAR_4], *VAR_12, *VAR_13;
 uint32_t *VAR_14;
 void *VAR_15;
 int VAR_16;

 VAR_16 = 0;
 VAR_12 = VAR_13 = FUNC_13(FUNC_10());
 if (VAR_13 == ((void*)0))
  FUNC_5(VAR_1, "Not enough memory for library path");

 if (FUNC_12(VAR_13, ':') != ((void*)0))
  VAR_10 = FUNC_14(&VAR_13, ":");
 else
  VAR_10 = VAR_13;

 while (VAR_10 != ((void*)0)) {
  FUNC_11(VAR_11, sizeof(VAR_11), "%s/geom_%s.so", VAR_10,
      VAR_7);
  VAR_16 = FUNC_0(VAR_11, VAR_2);
  if (VAR_16 == -1) {
   if (VAR_8 == VAR_0) {




    VAR_10 = FUNC_14(&VAR_13, ":");
    continue;
   }
   FUNC_5(VAR_1, "Cannot access library");
  }
  break;
 }
 FUNC_8(VAR_12);

 if (VAR_16 == -1)
  return;
 VAR_15 = FUNC_3(VAR_11, VAR_5);
 if (VAR_15 == ((void*)0))
  FUNC_6(VAR_1, "Cannot open library: %s.", FUNC_2());
 VAR_14 = FUNC_4(VAR_15, "lib_version");
 if (VAR_14 == ((void*)0)) {
  FUNC_15("Cannot find symbol %s: %s.", "lib_version", FUNC_2());
  FUNC_1(VAR_15);
  FUNC_7(VAR_1);
 }
 if (*VAR_14 != VAR_3) {
  FUNC_1(VAR_15);
  FUNC_6(VAR_1, "%s and %s are not synchronized.",
      FUNC_9(), VAR_11);
 }
 VAR_9 = FUNC_4(VAR_15, "version");
 if (VAR_9 == ((void*)0)) {
  FUNC_15("Cannot find symbol %s: %s.", "version", FUNC_2());
  FUNC_1(VAR_15);
  FUNC_7(VAR_1);
 }
 VAR_6 = FUNC_4(VAR_15, "class_commands");
 if (VAR_6 == ((void*)0)) {
  FUNC_15("Cannot find symbol %s: %s.", "class_commands",
      FUNC_2());
  FUNC_1(VAR_15);
  FUNC_7(VAR_1);
 }
}
