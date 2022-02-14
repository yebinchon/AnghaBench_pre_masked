
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printc {int show_all_datasets; int show_space; int script_fmt; int show_snaps; } ;
typedef int pc ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct printc*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char**,char*) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int **) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int *,struct printc*) ;
 int FUNC_11 (int ,int *,struct printc*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *,char*,int) ;
 int VAR_4 ;
 char* FUNC_14 (char*) ;
 int FUNC_15 (int) ;

int
FUNC_16(int VAR_5, char *VAR_6[])
{
 struct printc VAR_7;
 nvpair_t *VAR_8;
 nvlist_t *VAR_9, *VAR_10;
 int VAR_11, VAR_12;
 char *VAR_13;
 bool VAR_14;

 VAR_13 = ((void*)0);
 VAR_10 = ((void*)0);
 VAR_12 = 0;
 FUNC_3(&VAR_7, sizeof(VAR_7));
 VAR_14 = 0;
 while ((VAR_11 = FUNC_6(VAR_5, VAR_6, "aDHsc:C:")) != -1) {
  switch (VAR_11) {
  case 'a':
   VAR_7.show_all_datasets = 1;
   break;
  case 'D':
   VAR_7.show_space = 1;
   break;
  case 'H':
   VAR_7.script_fmt = 1;
   break;
  case 's':
   VAR_7.show_snaps = 1;
   break;
  case 'c':
   if (VAR_13 != ((void*)0))
    FUNC_5(VAR_13);
   VAR_13 = FUNC_14(VAR_1);
   VAR_14 = 0;
   break;
  case 'C':
   if (VAR_13 != ((void*)0))
    FUNC_5(VAR_13);
   VAR_13 = FUNC_14(VAR_1);
   VAR_14 = 1;
   break;
  default:
   FUNC_4(VAR_4, "bectl list: unknown option '-%c'\n",
       VAR_3);
   return (FUNC_15(0));
  }
 }

 VAR_5 -= VAR_2;

 if (VAR_5 != 0) {
  FUNC_4(VAR_4, "bectl list: extra argument provided\n");
  return (FUNC_15(0));
 }

 if (FUNC_1(&VAR_10) != 0) {
  FUNC_4(VAR_4, "bectl list: failed to allocate prop nvlist\n");
  return (1);
 }
 if (FUNC_0(VAR_0, VAR_10) != 0) {

  FUNC_4(VAR_4, "bectl list: failed to fetch boot environments\n");
  return (1);
 }


 if (VAR_13 == ((void*)0))
  VAR_13 = FUNC_14("name");

 FUNC_13(VAR_10, VAR_13, VAR_14);


 if (VAR_7.show_all_datasets || VAR_7.show_snaps)
  VAR_7.show_space = 0;
 if (!VAR_7.script_fmt)
  FUNC_10(VAR_10, &VAR_7);


 for (VAR_8 = FUNC_7(VAR_10, ((void*)0)); VAR_8 != ((void*)0);
     VAR_8 = FUNC_7(VAR_10, VAR_8)) {
  FUNC_9(VAR_8, &VAR_9);

  if (VAR_12 > 0 && (VAR_7.show_all_datasets || VAR_7.show_snaps))
   FUNC_12("\n");

  FUNC_11(FUNC_8(VAR_8), VAR_9, &VAR_7);
  VAR_12++;
 }

 FUNC_5(VAR_13);
 FUNC_2(VAR_10);

 return (0);
}
