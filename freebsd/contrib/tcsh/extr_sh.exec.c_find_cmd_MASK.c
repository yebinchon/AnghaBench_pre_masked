
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {char** vec; } ;
struct biltins {int bname; } ;
typedef char Char ;


 char* FUNC_0 (int,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int ,char*) ;
 struct varent* FUNC_2 (int ) ;
 struct varent* FUNC_3 (char*,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,char) ;
 struct biltins const* VAR_5 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char**) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (int,int) ;
 int VAR_6 ;
 int FUNC_13 (char*) ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 struct biltins const* VAR_9 ;
 size_t VAR_10 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char) ;

int
FUNC_18(Char *VAR_13, int VAR_14)
{
    struct varent *VAR_15;
    const struct biltins *VAR_16;
    Char **VAR_17;
    Char *VAR_18;
    int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23 = 0;

    if (VAR_14 && FUNC_4(FUNC_14(VAR_13), '/')) {
 FUNC_16("%s", FUNC_0(13, 7, "where: / in command makes no sense\n"));
 return VAR_23;
    }



    if (VAR_14 && FUNC_3(VAR_13, &VAR_4)) {
 if ((VAR_15 = FUNC_3(VAR_13, &VAR_4)) != ((void*)0)) {
     FUNC_16(FUNC_0(13, 8, "%S is aliased to "), VAR_13);
     if (VAR_15->vec != ((void*)0))
  FUNC_6(VAR_15->vec);
     FUNC_17('\n');
     VAR_23 = 1;
 }
    }



    for (VAR_16 = VAR_5; VAR_16 < &VAR_5[VAR_8]; VAR_16++) {
 if (FUNC_10(VAR_13, FUNC_15(VAR_16->bname))) {
     VAR_23 = 1;
     if (VAR_14)
  FUNC_16(FUNC_0(13, 9, "%S is a shell built-in\n"), VAR_13);
     else
  return VAR_23;
 }
    }
    if ((VAR_15 = FUNC_2(VAR_2)) == ((void*)0))
 return VAR_23;

    VAR_19 = VAR_7 ? FUNC_13(VAR_13) : 0;

    VAR_18 = FUNC_1(VAR_3, VAR_13);
    FUNC_7(VAR_18, VAR_11);

    VAR_20 = 0;
retry:
    for (VAR_17 = VAR_15->vec, VAR_21 = 0; VAR_17 && *VAR_17; VAR_17++, VAR_21++) {
 if (VAR_7 && !FUNC_10(*VAR_17, VAR_1)) {




     int VAR_24 = FUNC_12(VAR_19, VAR_21);
     if (!FUNC_5(VAR_12, VAR_24))
  continue;

 }
 VAR_22 = FUNC_11(*VAR_17, VAR_18, 0);






 if (VAR_22) {
     VAR_23 = 1;
     if (VAR_14) {
  FUNC_16("%S/", *VAR_17);
  FUNC_16("%S\n", VAR_13);
     }
     else
  return VAR_23;
 }
    }




    if (!VAR_14 && FUNC_2(VAR_0) && !VAR_20 && VAR_7) {
 FUNC_9(((void*)0), ((void*)0));
 VAR_20 = 1;
 goto retry;
    }
    FUNC_8(VAR_18);
    return VAR_23;
}
