
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const ucl_object_t ;
struct ucl_parser {int dummy; } ;
typedef int ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (unsigned char*,int,int,int *) ;
 unsigned char* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*) ;
 unsigned char* FUNC_10 (unsigned char*,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_11 (int const*,int ) ;
 int const* FUNC_12 (int const*,char*) ;
 int FUNC_13 (int const*) ;
 int FUNC_14 (struct ucl_parser*,unsigned char*,int) ;
 int FUNC_15 (struct ucl_parser*) ;
 char* FUNC_16 (struct ucl_parser*) ;
 int const* FUNC_17 (struct ucl_parser*) ;
 struct ucl_parser* FUNC_18 (int ) ;

int
FUNC_19(int VAR_5, char **VAR_6)
{
 const char *VAR_7 = ((void*)0);
 unsigned char *VAR_8;
 struct ucl_parser *VAR_9;
 int VAR_10, VAR_11 = 0, VAR_12 = 0;
 ssize_t VAR_13;
 ucl_object_t *VAR_14 = ((void*)0);
 const ucl_object_t *VAR_15;
 FILE *VAR_16;

 if (VAR_5 > 1) {
  VAR_7 = VAR_6[1];
 }

 if (VAR_7 != ((void*)0)) {
  VAR_16 = FUNC_4 (VAR_7, "r");
  if (VAR_16 == ((void*)0)) {
   FUNC_0 (-VAR_2);
  }
 }
 else {
  VAR_16 = VAR_4;
 }

 VAR_9 = FUNC_18 (0);
 VAR_8 = FUNC_7 (VAR_0);
 VAR_13 = VAR_0;
 VAR_12 = 0;

 while (!FUNC_2 (VAR_16) && !FUNC_3 (VAR_16)) {
  if (VAR_12 == VAR_13) {
   VAR_8 = FUNC_10 (VAR_8, VAR_13 * 2);
   VAR_13 *= 2;
   if (VAR_8 == ((void*)0)) {
    FUNC_8 ("realloc");
    FUNC_0 (VAR_1);
   }
  }
  VAR_12 += FUNC_6 (VAR_8 + VAR_12, 1, VAR_13 - VAR_12, VAR_16);
 }

 if (FUNC_3 (VAR_16)) {
  FUNC_5 (VAR_3, "Failed to read the input file.\n");
  FUNC_0 (VAR_1);
 }

 FUNC_14 (VAR_9, VAR_8, VAR_12);
 FUNC_1 (VAR_16);
 if (FUNC_16(VAR_9)) {
  FUNC_9 ("Error occured: %s\n", FUNC_16(VAR_9));
  VAR_11 = 1;
  goto end;
 }

 VAR_14 = FUNC_17 (VAR_9);
 if (FUNC_16 (VAR_9)) {
  FUNC_9 ("Error occured: %s\n", FUNC_16(VAR_9));
  VAR_11 = 1;
  goto end;
 }

 if (VAR_5 > 2) {
  for (VAR_10 = 2; VAR_10 < VAR_5; VAR_10++) {
   FUNC_9 ("search for \"%s\"... ", VAR_6[VAR_10]);
   VAR_15 = FUNC_12 (VAR_14, VAR_6[VAR_10]);
   FUNC_9 ("%sfound\n", (VAR_15 == ((void*)0) )?"not ":"");
   FUNC_11 (VAR_15, 0);
  }
 }
 else {
  FUNC_11 (VAR_14, 0);
 }

end:
 if (VAR_9 != ((void*)0)) {
  FUNC_15 (VAR_9);
 }
 if (VAR_14 != ((void*)0)) {
  FUNC_13 (VAR_14);
 }

 return VAR_11;
}
