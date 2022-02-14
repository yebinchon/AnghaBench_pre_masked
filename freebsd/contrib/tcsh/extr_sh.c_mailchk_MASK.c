
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct varent {int ** vec; } ;
struct stat {scalar_t__ st_mtime; scalar_t__ st_size; scalar_t__ st_atime; int st_mode; } ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
typedef int DIR ;
typedef int Char ;


 char* FUNC_0 (int,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 struct varent* FUNC_2 (int ) ;
 int FUNC_3 (int **) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,int (*) (char*)) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ VAR_4 ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (char*,struct stat*) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (scalar_t__*) ;
 TYPE_1__ VAR_5 ;
 char* FUNC_15 (char*,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,...) ;

__attribute__((used)) static void
FUNC_18(void)
{
    struct varent *VAR_6;
    Char **VAR_7;
    time_t VAR_8;
    int VAR_9, VAR_10;
    struct stat VAR_11;
    int VAR_12;

    VAR_6 = FUNC_2(VAR_1);
    if (VAR_6 == ((void*)0) || VAR_6->vec == ((void*)0))
 return;
    (void) FUNC_14(&VAR_8);
    VAR_7 = VAR_6->vec;
    VAR_10 = FUNC_3(VAR_7);
    VAR_9 = (VAR_10 && FUNC_8(*VAR_7)) ? (--VAR_10, FUNC_7(*VAR_7++)) : VAR_0;
    if (VAR_9 < 1)
 VAR_9 = 1;
    if (VAR_2 + VAR_9 > VAR_8)
 return;
    for (; *VAR_7; VAR_7++) {
 char *VAR_13 = FUNC_11(*VAR_7);
 char *VAR_14 = VAR_13;

 if (FUNC_12(VAR_13, &VAR_11) < 0)
     continue;



 VAR_12 = VAR_11.st_mtime > VAR_4;

 if (FUNC_1(VAR_11.st_mode)) {
     DIR *VAR_15;
     int VAR_16 = 0;
     char *VAR_17;
     struct stat VAR_18;

     VAR_17 = FUNC_15("%s/new", VAR_13);

     if (FUNC_12(VAR_17, &VAR_18) != -1 && FUNC_1(VAR_18.st_mode)) {




  VAR_11 = VAR_18;



  VAR_12 = VAR_11.st_mtime > VAR_4;

  VAR_14 = VAR_17;
     }

     if (VAR_11.st_mtime <= VAR_2 + 1 || (VAR_3 && !VAR_12)) {
  FUNC_16(VAR_17);
  continue;
     }

     VAR_15 = FUNC_9(VAR_14);
     FUNC_16(VAR_17);
     if (VAR_15 == ((void*)0))
  continue;


     if (!FUNC_10(VAR_15) || !FUNC_10(VAR_15)) {
  (void)FUNC_6(VAR_15);
  continue;
     }

     while (FUNC_10(VAR_15))
  VAR_16++;

     (void)FUNC_6(VAR_15);
     if (VAR_16 == 0)
  continue;

     if (VAR_10 == 1)
  FUNC_17(FUNC_0(11, 3, "You have %d mail messages.\n"),
   VAR_16);
     else
  FUNC_17(FUNC_0(11, 4, "You have %d mail messages in %s.\n"),
   VAR_16, VAR_13);
 }
 else {
     char *VAR_19;

     if (VAR_11.st_size == 0 || VAR_11.st_atime >= VAR_11.st_mtime ||
  (VAR_11.st_atime <= VAR_2 && VAR_11.st_mtime <= VAR_2) ||
  (VAR_3 && !VAR_12))
  continue;
     VAR_19 = FUNC_13(VAR_12 ? FUNC_0(11, 6, "new ") : "");
     FUNC_4(VAR_19, FUNC_16);
     if (VAR_10 == 1)
  FUNC_17(FUNC_0(11, 5, "You have %smail.\n"), VAR_19);
     else
         FUNC_17(FUNC_0(11, 7, "You have %smail in %s.\n"), VAR_19, VAR_13);
     FUNC_5(VAR_19);
 }
    }
    VAR_2 = VAR_8;
}
