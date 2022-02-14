
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uschar ;


 int FUNC_0 (char*,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (char**,int*,int,int,char**,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__**) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__*) ;

char *FUNC_8(const char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 int VAR_5;
 uschar *VAR_6 = (uschar *) VAR_1;
 uschar *VAR_7, *VAR_8;
 static uschar *VAR_9 = ((void*)0);
 static int VAR_10 = 100;

 VAR_7 = VAR_6;
 if (VAR_9 == ((void*)0) && (VAR_9 = (uschar *) FUNC_4(VAR_10)) == ((void*)0))
  FUNC_0("out of space for character class [%.10s...] 1", VAR_6);
 VAR_8 = VAR_9;
 for (VAR_2 = 0; (VAR_3 = *VAR_6++) != 0; ) {
  if (VAR_3 == '\\') {
   VAR_3 = FUNC_5(&VAR_6);
  } else if (VAR_3 == '-' && VAR_2 > 0 && VAR_8[-1] != 0) {
   if (*VAR_6 != 0) {
    VAR_3 = VAR_8[-1];
    VAR_4 = *VAR_6++;
    if (VAR_4 == '\\')
     VAR_4 = FUNC_5(&VAR_6);
    if (FUNC_2(VAR_3, VAR_4) > 0) {
     VAR_8--;
     VAR_2--;
     continue;
    }
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
     if ((FUNC_2(VAR_3, VAR_5) > 0) ||
         FUNC_2(VAR_5, VAR_4) > 0)
      continue;
     if (!FUNC_1((char **) &VAR_9, &VAR_10, VAR_8-VAR_9+2, 100, (char **) &VAR_8, "cclenter1"))
      FUNC_0("out of space for character class [%.10s...] 2", VAR_6);
     *VAR_8++ = VAR_5;
     VAR_2++;
    }
    continue;
   }
  }
  if (!FUNC_1((char **) &VAR_9, &VAR_10, VAR_8-VAR_9+2, 100, (char **) &VAR_8, "cclenter2"))
   FUNC_0("out of space for character class [%.10s...] 3", VAR_6);
  *VAR_8++ = VAR_3;
  VAR_2++;
 }
 *VAR_8 = 0;
 FUNC_3( ("cclenter: in = |%s|, out = |%s|\n", VAR_7, VAR_9) );
 FUNC_7(VAR_7);
 return (char *) FUNC_6((char *) VAR_9);
}
