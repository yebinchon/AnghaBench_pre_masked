
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_entry {int re_negate; int re_regexp; void* re_pattern; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct re_entry*,int ) ;
 struct re_entry* FUNC_2 (int,int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,void*,int) ;
 int FUNC_7 (int,int *,char*,int) ;
 int VAR_5 ;
 void* FUNC_8 (char*) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(char *VAR_6)
{
 char *VAR_7, *VAR_8, VAR_9[64];
 struct re_entry *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_8 = FUNC_8(VAR_6);
 VAR_7 = VAR_8;
 VAR_14 = FUNC_11(VAR_8);
 for (VAR_12 = 0, VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  if (VAR_8[VAR_13] == ',' && VAR_13 > 0) {
   if (VAR_8[VAR_13 - 1] == '\\')
    FUNC_10(&VAR_8[VAR_13 - 1], &VAR_8[VAR_13], VAR_14);
   else {
    VAR_12++;
    VAR_8[VAR_13] = '\0';
   }
  }
 }
 FUNC_0(&VAR_4);
 for (VAR_13 = 0; VAR_13 < VAR_12 + 1; VAR_13++) {
  VAR_10 = FUNC_2(1, sizeof(*VAR_10));
  if (VAR_10 == ((void*)0)) {
   (void) FUNC_4(VAR_5, "calloc: %s\n",
       FUNC_9(VAR_2));
   FUNC_3(1);
  }
  if (*VAR_8 == '~') {
   VAR_8++;
   VAR_10->re_negate = 1;
  }
  VAR_10->re_pattern = FUNC_8(VAR_8);
  VAR_11 = FUNC_6(&VAR_10->re_regexp, VAR_10->re_pattern,
      VAR_0 | VAR_1);
  if (VAR_11 != 0) {
   FUNC_7(VAR_11, &VAR_10->re_regexp, VAR_9, 64);
   (void) FUNC_4(VAR_5, "regcomp: %s\n", VAR_9);
   FUNC_3(1);
  }
  FUNC_1(&VAR_4, VAR_10, VAR_3);
  VAR_14 = FUNC_11(VAR_8);
  VAR_8 += VAR_14 + 1;
 }
 FUNC_5(VAR_7);
}
