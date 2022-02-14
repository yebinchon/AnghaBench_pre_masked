
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int pth_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*,int,char const*,char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 char* VAR_5 ;
 char const* VAR_6 ;

__attribute__((used)) static void
FUNC_6(char const * const * VAR_7, char const * VAR_8,
             char const * VAR_9)
{
    char VAR_10[VAR_0+1];

    FUNC_3(VAR_6, VAR_4);

    for (;;) {
        char const * VAR_11 = *(VAR_7++);
        char const * VAR_12 = VAR_10;

        if (VAR_11 == ((void*)0))
            break;




        if (! FUNC_4(VAR_10, (int)sizeof(VAR_10), VAR_11, VAR_9))
            VAR_12 = VAR_11;





        else if ((*VAR_11 == '$')
                 && ((VAR_11[1] == '$') || (VAR_11[1] == '@')))
            VAR_11 = VAR_12;





        FUNC_1(VAR_4, VAR_5, VAR_11);
        if (*VAR_8 != VAR_3) {
            struct stat VAR_13;





            if ((FUNC_5(VAR_12, &VAR_13) == 0) && FUNC_0(VAR_13.st_mode)) {
                FUNC_2(VAR_1, VAR_4);
                FUNC_3(VAR_8, VAR_4);
            }
        }

        FUNC_2(VAR_2, VAR_4);
    }
}
