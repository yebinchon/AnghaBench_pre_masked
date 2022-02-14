
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int teOptFileType ;
struct TYPE_7__ {int pzProgName; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_6__ {char* argString; } ;
struct TYPE_8__ {TYPE_1__ optArg; } ;
typedef TYPE_3__ tOptDesc ;
struct stat {int st_mode; } ;


 char* FUNC_0 (size_t,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 char VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char const*,struct stat*) ;
 char* FUNC_7 (char const*,int ) ;

__attribute__((used)) static void
FUNC_8(teOptFileType VAR_6, tOptions * VAR_7, tOptDesc * VAR_8)
{
    char const * VAR_9 = VAR_8->optArg.argString;
    struct stat VAR_10;

    VAR_5 = 0;

    switch (VAR_6 & VAR_3) {
    case 128:
        if ((FUNC_6(VAR_9, &VAR_10) == 0) || (VAR_5 != VAR_2)) {
            if (VAR_5 == 0)
                VAR_5 = VAR_1;
            FUNC_4(VAR_7->pzProgName, "stat", VAR_9);

        }


    default:
    case 130:
    {
        char * VAR_11 = FUNC_7(VAR_9, VAR_0);
        size_t VAR_12;

        if (VAR_11 == ((void*)0))




            break;

        VAR_12 = (size_t)(VAR_11 - VAR_9);
        VAR_11 = FUNC_0(VAR_12 + 1, "fname");
        FUNC_5(VAR_11, VAR_9, VAR_12);
        VAR_11[VAR_12] = VAR_4;

        if ((FUNC_6(VAR_11, &VAR_10) != 0) || (VAR_5 = VAR_1, ! FUNC_2(VAR_10.st_mode)))
            FUNC_4(VAR_7->pzProgName, "stat", VAR_11);


        FUNC_1(VAR_11);
        break;
    }

    case 129:
        if ( (FUNC_6(VAR_9, &VAR_10) != 0)
           || (VAR_5 = VAR_1, ! FUNC_3(VAR_10.st_mode)) )
            FUNC_4(VAR_7->pzProgName, "stat", VAR_9);


        break;
    }
}
