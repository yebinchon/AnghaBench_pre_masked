
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int prompt3 ;
typedef int prompt2 ;
typedef int prompt1 ;
struct TYPE_6__ {TYPE_1__* meth; } ;
typedef TYPE_2__ UI ;
struct TYPE_5__ {char* (* ui_construct_prompt ) (TYPE_2__*,char const*,char const*) ;} ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (TYPE_2__*,char const*,char const*) ;

char *FUNC_6(UI *VAR_2, const char *VAR_3,
                          const char *VAR_4)
{
    char *VAR_5 = ((void*)0);

    if (VAR_2->meth->ui_construct_prompt != ((void*)0))
        VAR_5 = VAR_2->meth->ui_construct_prompt(VAR_2, VAR_3, VAR_4);
    else {
        char VAR_6[] = "Enter ";
        char VAR_7[] = " for ";
        char VAR_8[] = ":";
        int VAR_9 = 0;

        if (VAR_3 == ((void*)0))
            return ((void*)0);
        VAR_9 = sizeof(VAR_6) - 1 + FUNC_4(VAR_3);
        if (VAR_4 != ((void*)0))
            VAR_9 += sizeof(VAR_7) - 1 + FUNC_4(VAR_4);
        VAR_9 += sizeof(VAR_8) - 1;

        if ((VAR_5 = FUNC_0(VAR_9 + 1)) == ((void*)0)) {
            FUNC_3(VAR_1, VAR_0);
            return ((void*)0);
        }
        FUNC_2(VAR_5, VAR_6, VAR_9 + 1);
        FUNC_1(VAR_5, VAR_3, VAR_9 + 1);
        if (VAR_4 != ((void*)0)) {
            FUNC_1(VAR_5, VAR_7, VAR_9 + 1);
            FUNC_1(VAR_5, VAR_4, VAR_9 + 1);
        }
        FUNC_1(VAR_5, VAR_8, VAR_9 + 1);
    }
    return VAR_5;
}
