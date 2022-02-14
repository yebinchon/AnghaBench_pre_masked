
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_7 ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_11 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,char*,int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (int ,char*,int) ;
 int FUNC_13 (int *,int *,int ) ;
 scalar_t__ FUNC_14 (char*,int) ;
 int * FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int
FUNC_17(int VAR_12, char **VAR_13)
{
 zfs_handle_t *VAR_14 = ((void*)0);
 boolean_t VAR_15 = VAR_0;
 nvlist_t *VAR_16;
 int VAR_17 = 0;
 int VAR_18;

 if (FUNC_4(&VAR_16, VAR_2, 0) != 0)
  FUNC_3();


 while ((VAR_18 = FUNC_1(VAR_12, VAR_13, "o:p")) != -1) {
  switch (VAR_18) {
  case 'o':
   if (FUNC_6(VAR_16, VAR_8) != 0)
    return (1);
   break;
  case 'p':
   VAR_15 = VAR_1;
   break;
  case '?':
   (void) FUNC_0(VAR_11, FUNC_2("invalid option '%c'\n"),
       VAR_10);
   goto usage;
  }
 }

 VAR_12 -= VAR_9;
 VAR_13 += VAR_9;


 if (VAR_12 < 1) {
  (void) FUNC_0(VAR_11, "%s", FUNC_2("missing source dataset "
      "argument\n"));
  goto usage;
 }
 if (VAR_12 < 2) {
  (void) FUNC_0(VAR_11, "%s", FUNC_2("missing target dataset "
      "argument\n"));
  goto usage;
 }
 if (VAR_12 > 2) {
  (void) FUNC_0(VAR_11, "%s", FUNC_2("too many arguments\n"));
  goto usage;
 }


 if ((VAR_14 = FUNC_15(VAR_7, VAR_13[0], VAR_5)) == ((void*)0))
  return (1);

 if (VAR_15 && FUNC_14(VAR_13[1], VAR_4 |
     VAR_6)) {





  if (FUNC_12(VAR_7, VAR_13[1], VAR_4 |
      VAR_6))
   return (0);
  if (FUNC_11(VAR_7, VAR_13[1]) != 0)
   return (1);
 }


 VAR_17 = FUNC_9(VAR_14, VAR_13[1], VAR_16);


 if (VAR_17 == 0) {
  zfs_handle_t *VAR_19;

  VAR_19 = FUNC_15(VAR_7, VAR_13[1], VAR_3);
  if (VAR_19 != ((void*)0)) {





   if (FUNC_7(VAR_19)) {
    if ((VAR_17 = FUNC_13(VAR_19, ((void*)0), 0)) != 0) {
     (void) FUNC_0(VAR_11, "%s", FUNC_2("clone "
         "successfully created, "
         "but not mounted\n"));
    } else if ((VAR_17 = FUNC_16(VAR_19)) != 0) {
     (void) FUNC_0(VAR_11, "%s", FUNC_2("clone "
         "successfully created, "
         "but not shared\n"));
    }
   }
   FUNC_10(VAR_19);
  }
 }

 FUNC_10(VAR_14);
 FUNC_5(VAR_16);

 return (!!VAR_17);

usage:
 if (VAR_14)
  FUNC_10(VAR_14);
 FUNC_5(VAR_16);
 FUNC_8(VAR_0);
 return (-1);
}
