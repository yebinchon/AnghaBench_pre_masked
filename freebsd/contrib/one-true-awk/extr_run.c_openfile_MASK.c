
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files {char* fname; int mode; int * fp; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 struct files* VAR_6 ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct files*,int ,int) ;
 int VAR_7 ;
 int * FUNC_4 (char const*,char*) ;
 struct files* FUNC_5 (struct files*,int) ;
 int * VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 char* FUNC_7 (char const*) ;

FILE *FUNC_8(int VAR_10, const char *VAR_11)
{
 const char *VAR_12 = VAR_11;
 int VAR_13, VAR_14;
 FILE *VAR_15 = ((void*)0);

 if (*VAR_12 == '\0')
  FUNC_0("null file name in print or getline");
 for (VAR_13=0; VAR_13 < VAR_7; VAR_13++)
  if (VAR_6[VAR_13].fname && FUNC_6(VAR_12, VAR_6[VAR_13].fname) == 0) {
   if (VAR_10 == VAR_6[VAR_13].mode || (VAR_10==VAR_0 && VAR_6[VAR_13].mode==VAR_3))
    return VAR_6[VAR_13].fp;
   if (VAR_10 == VAR_1)
    return VAR_6[VAR_13].fp;
  }
 if (VAR_10 == VAR_1)
  return ((void*)0);

 for (VAR_13=0; VAR_13 < VAR_7; VAR_13++)
  if (VAR_6[VAR_13].fp == ((void*)0))
   break;
 if (VAR_13 >= VAR_7) {
  struct files *VAR_16;
  int VAR_17 = VAR_7 + VAR_2;
  VAR_16 = FUNC_5(VAR_6, VAR_17 * sizeof(*VAR_16));
  if (VAR_16 == ((void*)0))
   FUNC_0("cannot grow files for %s and %d files", VAR_12, VAR_17);
  FUNC_3(&VAR_16[VAR_7], 0, VAR_2 * sizeof(*VAR_16));
  VAR_7 = VAR_17;
  VAR_6 = VAR_16;
 }
 FUNC_1(VAR_9);
 VAR_14 = VAR_10;
 if (VAR_10 == VAR_3) {
  VAR_15 = FUNC_2(VAR_12, "w");
 } else if (VAR_10 == VAR_0) {
  VAR_15 = FUNC_2(VAR_12, "a");
  VAR_14 = VAR_3;
 } else if (VAR_10 == '|') {
  VAR_15 = FUNC_4(VAR_12, "w");
 } else if (VAR_10 == VAR_4) {
  VAR_15 = FUNC_4(VAR_12, "r");
 } else if (VAR_10 == VAR_5) {
  VAR_15 = FUNC_6(VAR_12, "-") == 0 ? VAR_8 : FUNC_2(VAR_12, "r");
 } else
  FUNC_0("illegal redirection %d", VAR_10);
 if (VAR_15 != ((void*)0)) {
  VAR_6[VAR_13].fname = FUNC_7(VAR_12);
  VAR_6[VAR_13].fp = VAR_15;
  VAR_6[VAR_13].mode = VAR_14;
 }
 return VAR_15;
}
