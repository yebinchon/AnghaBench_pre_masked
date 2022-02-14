
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_3__ {int SpacesBefore; int CommentType; scalar_t__ CaptureComments; } ;
typedef TYPE_1__ ASL_COMMENT_STATE ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

void
FUNC_6 (
    ASL_COMMENT_STATE VAR_2,
    char *VAR_3)
{
    UINT32 VAR_4;
    char *VAR_5;
    char *VAR_6;


    if (VAR_0 && VAR_2.CaptureComments)
    {
        *VAR_3 = 0;
        FUNC_0 ("Single-line comment\n");
        VAR_5 = FUNC_2 (FUNC_5 (VAR_1) + 1);
        FUNC_4 (VAR_5, VAR_1);
        VAR_6 = FUNC_2 (VAR_2.SpacesBefore +
            FUNC_5 (VAR_5) + 3 + 1);

        for (VAR_4 = 0; (VAR_2.CommentType != 1) &&
            (VAR_4 < VAR_2.SpacesBefore); VAR_4++)
        {
            VAR_6[VAR_4] = ' ';
        }

        FUNC_3 (VAR_6, VAR_5);



        FUNC_3 (VAR_6, " */");
        VAR_6 [VAR_2.SpacesBefore +
            FUNC_5 (VAR_5) + 3] = 0;



        if (VAR_6[FUNC_5 (VAR_6) - 1] == 0x0D)
        {
            VAR_6[FUNC_5(VAR_6) - 1] = 0;
        }

        FUNC_1 (VAR_2.CommentType, VAR_6);
    }
}
