
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_3__ {int SpacesBefore; scalar_t__ CommentType; scalar_t__ CaptureComments; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_1__ ASL_COMMENT_STATE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*) ;

void
FUNC_8 (
    ASL_COMMENT_STATE VAR_5,
    char *VAR_6,
    int VAR_7)
{
    UINT64 VAR_8;
    char *VAR_9;
    char *VAR_10;
    BOOLEAN VAR_11;
    char *VAR_12;
    char *VAR_13;


    if (VAR_1 && VAR_5.CaptureComments)
    {
        *VAR_6 = (char) VAR_7;
        ++VAR_6;
        *VAR_6 = 0;

        FUNC_1 ("Multi-line comment\n");
        VAR_12 = FUNC_3 (FUNC_6 (VAR_2) + 1);
        FUNC_5 (VAR_12, VAR_2);

        FUNC_1 ("CommentString: %s\n", VAR_12);







        VAR_9 = FUNC_7 (VAR_12, "\n");

        if (VAR_9)
        {
            VAR_10 = FUNC_3 (FUNC_6 (VAR_9) + 1);
            FUNC_5 (VAR_10, VAR_9);



            if (VAR_10[FUNC_6 (VAR_10) - 1] == 0x0D)
            {
                VAR_10[FUNC_6(VAR_10)-1] = 0;
            }

            FUNC_0 (VAR_10);
            VAR_9 = FUNC_7 (((void*)0), "\n");
            while (VAR_9 != ((void*)0))
            {





                VAR_11 = VAR_3;
                for (VAR_8 = 0; (VAR_8 < (FUNC_6 (VAR_9) + 1)) && !VAR_11; VAR_8++)
                {
                    if (VAR_9[VAR_8] != ' ' && VAR_9[VAR_8] != '\t')
                    {
                        VAR_11 = VAR_4;
                        VAR_9 += VAR_8-1;
                        VAR_9 [0] = ' ';
                    }
                }

                VAR_10 = FUNC_3 (FUNC_6 (VAR_9) + 1);
                FUNC_4 (VAR_10, VAR_9);



                if (VAR_10[FUNC_6 (VAR_10) - 1] == 0x0D)
                {
                    VAR_10[FUNC_6(VAR_10) - 1] = 0;
                }

                FUNC_0 (VAR_10);
                VAR_9 = FUNC_7 (((void*)0),"\n");
            }
        }
        else
        {





            VAR_13 =
                FUNC_3 (FUNC_6 (VAR_12) +
                VAR_5.SpacesBefore + 1);

            for (VAR_8 = 0; (VAR_5.CommentType != VAR_0) &&
                (VAR_8 < VAR_5.SpacesBefore); VAR_8++)
            {
                 VAR_13[VAR_8] = ' ';
            }

            FUNC_4 (VAR_13, VAR_12);
            FUNC_2 (VAR_5.CommentType, VAR_13);
        }
    }
}
