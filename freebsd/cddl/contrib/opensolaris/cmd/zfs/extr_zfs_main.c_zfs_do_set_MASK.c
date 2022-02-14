
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_6 (char*,char) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char**,int ,int ,int *,int *,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_9(int VAR_5, char **VAR_6)
{
 nvlist_t *VAR_7 = ((void*)0);
 int VAR_8 = -1;
 int VAR_9 = 0;


 if (VAR_5 > 1 && VAR_6[1][0] == '-') {
  (void) FUNC_0(VAR_4, FUNC_1("invalid option '%c'\n"),
      VAR_6[1][1]);
  FUNC_7(VAR_0);
 }


 if (VAR_5 < 2) {
  (void) FUNC_0(VAR_4, "%s", FUNC_1("missing arguments\n"));
  FUNC_7(VAR_0);
 }
 if (VAR_5 < 3) {
  if (FUNC_6(VAR_6[1], '=') == ((void*)0)) {
   (void) FUNC_0(VAR_4, "%s", FUNC_1("missing property=value "
       "argument(s)\n"));
  } else {
   (void) FUNC_0(VAR_4, "%s", FUNC_1("missing dataset "
       "name(s)\n"));
  }
  FUNC_7(VAR_0);
 }


 for (int VAR_10 = 1; VAR_10 < VAR_5; VAR_10++) {
  if (FUNC_6(VAR_6[VAR_10], '=') != ((void*)0)) {
   if (VAR_8 > 0) {

    (void) FUNC_0(VAR_4, FUNC_1("invalid "
        "argument order\n"), VAR_10);
    FUNC_7(VAR_0);
   }
  } else if (VAR_8 < 0) {
   VAR_8 = VAR_10;
  }
 }
 if (VAR_8 < 0) {
  (void) FUNC_0(VAR_4, "%s", FUNC_1("missing dataset name(s)\n"));
  FUNC_7(VAR_0);
 }


 if (FUNC_3(&VAR_7, VAR_1, 0) != 0)
  FUNC_2();
 for (int VAR_11 = 1; VAR_11 < VAR_8; VAR_11++) {
  if ((VAR_9 = FUNC_5(VAR_7, VAR_6[VAR_11])) != 0)
   goto error;
 }

 VAR_9 = FUNC_8(VAR_5 - VAR_8, VAR_6 + VAR_8, 0,
     VAR_2, ((void*)0), ((void*)0), 0, VAR_3, VAR_7);

error:
 FUNC_4(VAR_7);
 return (VAR_9);
}
