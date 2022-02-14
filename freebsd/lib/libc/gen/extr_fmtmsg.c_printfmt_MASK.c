
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 char const* VAR_6 ;
 char* FUNC_0 (size_t) ;
 char* FUNC_1 (char*) ;
 char const* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char const*,size_t) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static char *
FUNC_6(char *VAR_7, long VAR_8, const char *VAR_9, int VAR_10,
    const char *VAR_11, const char *VAR_12, const char *VAR_13)
{
 size_t VAR_14;
 char *VAR_15, *VAR_16;
 const char *VAR_17;

 VAR_14 = 32;
 if (VAR_9 != VAR_4)
  VAR_14 += FUNC_5(VAR_9);
 if ((VAR_17 = FUNC_2(VAR_10)) != ((void*)0))
  VAR_14 += FUNC_5(VAR_17);
 if (VAR_11 != VAR_6)
  VAR_14 += FUNC_5(VAR_11);
 if (VAR_12 != VAR_3)
  VAR_14 += FUNC_5(VAR_12);
 if (VAR_13 != VAR_5)
  VAR_14 += FUNC_5(VAR_13);

 if ((VAR_16 = FUNC_0(VAR_14)) == ((void*)0))
  return (((void*)0));
 *VAR_16 = '\0';
 while ((VAR_15 = FUNC_1(VAR_7)) != ((void*)0)) {
  if (FUNC_3(VAR_15, "label") == 0 && VAR_9 != VAR_4) {
   VAR_0;
   FUNC_4(VAR_16, VAR_9, VAR_14);
  } else if (FUNC_3(VAR_15, "severity") == 0 && VAR_17 != ((void*)0)) {
   VAR_0;
   FUNC_4(VAR_16, FUNC_2(VAR_10), VAR_14);
  } else if (FUNC_3(VAR_15, "text") == 0 && VAR_11 != VAR_6) {
   VAR_0;
   FUNC_4(VAR_16, VAR_11, VAR_14);
  } else if (FUNC_3(VAR_15, "action") == 0 && VAR_12 != VAR_3) {
   VAR_1;
   FUNC_4(VAR_16, "TO FIX: ", VAR_14);
   FUNC_4(VAR_16, VAR_12, VAR_14);
  } else if (FUNC_3(VAR_15, "tag") == 0 && VAR_13 != VAR_5) {
   VAR_2;
   FUNC_4(VAR_16, VAR_13, VAR_14);
  }
 }
 VAR_1;
 return (VAR_16);
}
