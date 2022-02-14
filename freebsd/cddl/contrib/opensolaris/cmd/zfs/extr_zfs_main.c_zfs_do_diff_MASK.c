
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int *,int ,char*,char*,int) ;

__attribute__((used)) static int
FUNC_11(int VAR_11, char **VAR_12)
{
 zfs_handle_t *VAR_13;
 int VAR_14 = 0;
 char *VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0);
 char *VAR_17, *VAR_18;
 int VAR_19 = 0;
 int VAR_20;

 while ((VAR_20 = FUNC_2(VAR_11, VAR_12, "FHt")) != -1) {
  switch (VAR_20) {
  case 'F':
   VAR_14 |= VAR_3;
   break;
  case 'H':
   VAR_14 |= VAR_4;
   break;
  case 't':
   VAR_14 |= VAR_5;
   break;
  default:
   (void) FUNC_0(VAR_10,
       FUNC_3("invalid option '%c'\n"), VAR_9);
   FUNC_7(VAR_0);
  }
 }

 VAR_11 -= VAR_8;
 VAR_12 += VAR_8;

 if (VAR_11 < 1) {
  (void) FUNC_0(VAR_10,
      "%s", FUNC_3("must provide at least one snapshot name\n"));
  FUNC_7(VAR_0);
 }

 if (VAR_11 > 2) {
  (void) FUNC_0(VAR_10, "%s", FUNC_3("too many arguments\n"));
  FUNC_7(VAR_0);
 }

 VAR_16 = VAR_12[0];
 VAR_15 = (VAR_11 == 2) ? VAR_12[1] : ((void*)0);

 VAR_18 = ((void*)0);
 if (*VAR_16 != '@')
  VAR_18 = FUNC_6(VAR_16);
 else if (VAR_15)
  VAR_18 = FUNC_6(VAR_15);
 if (VAR_18 == ((void*)0))
  FUNC_7(VAR_0);

 if ((VAR_17 = FUNC_5(VAR_18, '@')) != ((void*)0))
  *VAR_17 = '\0';

 if ((VAR_13 = FUNC_9(VAR_7, VAR_18, VAR_6)) == ((void*)0))
  return (1);

 FUNC_1(VAR_18);





 (void) FUNC_4(VAR_1);

 VAR_19 = FUNC_10(VAR_13, VAR_2, VAR_16, VAR_15, VAR_14);

 FUNC_8(VAR_13);

 return (VAR_19 != 0);
}
