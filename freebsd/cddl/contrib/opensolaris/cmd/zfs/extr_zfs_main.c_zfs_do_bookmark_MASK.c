
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int snapname ;
typedef int nvlist_t ;
typedef int errbuf ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,char const*) ;
 int FUNC_1 (int *,char*,char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_5 (int,char**,char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (char*,int,char*,char*) ;
 int VAR_7 ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_15(int VAR_8, char **VAR_9)
{
 char VAR_10[VAR_2];
 zfs_handle_t *VAR_11;
 nvlist_t *VAR_12;
 int VAR_13 = 0;
 int VAR_14;


 while ((VAR_14 = FUNC_5(VAR_8, VAR_9, "")) != -1) {
  switch (VAR_14) {
  case '?':
   (void) FUNC_4(VAR_7,
       FUNC_6("invalid option '%c'\n"), VAR_6);
   goto usage;
  }
 }

 VAR_8 -= VAR_5;
 VAR_9 += VAR_5;


 if (VAR_8 < 1) {
  (void) FUNC_4(VAR_7, "%s", FUNC_6("missing snapshot argument\n"));
  goto usage;
 }
 if (VAR_8 < 2) {
  (void) FUNC_4(VAR_7, "%s", FUNC_6("missing bookmark argument\n"));
  goto usage;
 }

 if (FUNC_9(VAR_9[1], '#') == ((void*)0)) {
  (void) FUNC_4(VAR_7,
      FUNC_6("invalid bookmark name '%s' -- "
      "must contain a '#'\n"), VAR_9[1]);
  goto usage;
 }

 if (VAR_9[0][0] == '@') {




  (void) FUNC_11(VAR_10, VAR_9[1], sizeof (VAR_10));
  *FUNC_9(VAR_10, '#') = '\0';
  (void) FUNC_10(VAR_10, VAR_9[0], sizeof (VAR_10));
 } else {
  (void) FUNC_11(VAR_10, VAR_9[0], sizeof (VAR_10));
 }
 VAR_11 = FUNC_14(VAR_4, VAR_10, VAR_3);
 if (VAR_11 == ((void*)0))
  goto usage;
 FUNC_13(VAR_11);


 VAR_12 = FUNC_2();
 FUNC_1(VAR_12, VAR_9[1], VAR_10);
 VAR_13 = FUNC_7(VAR_12, ((void*)0));
 FUNC_3(VAR_12);

 if (VAR_13 != 0) {
  const char *VAR_15;
  char VAR_16[1024];

  (void) FUNC_8(VAR_16, sizeof (VAR_16),
      FUNC_0(VAR_1,
      "cannot create bookmark '%s'"), VAR_9[1]);

  switch (VAR_13) {
  case 128:
   VAR_15 = "bookmark is in a different pool";
   break;
  case 132:
   VAR_15 = "bookmark exists";
   break;
  case 131:
   VAR_15 = "invalid argument";
   break;
  case 129:
   VAR_15 = "bookmark feature not enabled";
   break;
  case 130:
   VAR_15 = "out of space";
   break;
  default:
   VAR_15 = "unknown error";
   break;
  }
  (void) FUNC_4(VAR_7, "%s: %s\n", VAR_16,
      FUNC_0(VAR_1, VAR_15));
 }

 return (VAR_13 != 0);

usage:
 FUNC_12(VAR_0);
 return (-1);
}
