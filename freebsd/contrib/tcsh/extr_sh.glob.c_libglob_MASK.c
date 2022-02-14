
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ gl_pathc; int gl_flags; scalar_t__ gl_matchc; scalar_t__ gl_pathv; scalar_t__ gl_offs; } ;
typedef TYPE_1__ glob_t ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 int ** FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static Char **
FUNC_7(Char **VAR_14)
{
    int VAR_15 = VAR_9 | VAR_8 | VAR_3;
    glob_t VAR_16;
    char *VAR_17;
    int VAR_18 = FUNC_0(VAR_13) != 0, VAR_19 = 0, VAR_20 = 0;

    if (FUNC_0(VAR_11))
       VAR_15 |= VAR_5;

    if (FUNC_0(VAR_12))
       VAR_15 |= VAR_10;

    if (!VAR_14 || !VAR_14[0])
 return(VAR_14);

    VAR_16.gl_offs = 0;
    VAR_16.gl_pathv = 0;
    VAR_16.gl_pathc = 0;

    if (VAR_18)
 VAR_15 |= VAR_7;

    do {
 VAR_17 = FUNC_5(*VAR_14);
 switch (FUNC_2(VAR_17, VAR_15, 0, &VAR_16)) {
 case 129:
     FUNC_3(&VAR_16);
     FUNC_4(VAR_17);
     FUNC_6(VAR_1 | VAR_0);

 case 128:
     FUNC_3(&VAR_16);
     FUNC_6(VAR_2);

 default:
     break;
 }
 if (VAR_16.gl_flags & VAR_6) {
     VAR_20 |= (VAR_16.gl_matchc != 0);
     VAR_19 = 1;
 }
 VAR_15 |= VAR_4;
    }
    while (*++VAR_14);
    VAR_14 = (VAR_16.gl_pathc == 0 || (VAR_19 && !VAR_20 && !VAR_18)) ?
 ((void*)0) : FUNC_1(VAR_16.gl_pathv);
    FUNC_3(&VAR_16);
    return (VAR_14);
}
