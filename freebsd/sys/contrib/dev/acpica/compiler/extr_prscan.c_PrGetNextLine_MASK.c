
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT32 ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;




 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static UINT32
FUNC_3 (
    FILE *VAR_7)
{
    UINT32 VAR_8;
    int VAR_9 = 0;
    int VAR_10;




    FUNC_2 (VAR_4, 0, VAR_5);
    for (VAR_8 = 0; ;)
    {




        if (VAR_8 >= VAR_5)
        {
            FUNC_0 ();
        }

        VAR_10 = VAR_9;
        VAR_9 = FUNC_1 (VAR_7);
        if (VAR_9 == VAR_6)
        {





            if (VAR_8 > 0)
            {
                VAR_4[VAR_8] = '\n';
                return (VAR_0);
            }

            return (VAR_1);
        }



        switch (VAR_3)
        {
        case 130:



            if ((VAR_10 == '/') && (VAR_9 == '*'))
            {
                VAR_3 = 131;
            }



            else if ((VAR_10 == '/') && (VAR_9 == '/'))
            {
                VAR_3 = 128;
            }



            else if (VAR_10 == '"')
            {
                VAR_3 = 129;
            }
            break;

        case 129:

            if (VAR_10 == '"')
            {
                VAR_3 = 130;
            }
            break;

        case 131:



            if ((VAR_10 == '*') && (VAR_9 == '/'))
            {
                VAR_3 = 130;
            }
            break;

        case 128:
        default:
            break;
        }



        VAR_4[VAR_8] = (char) VAR_9;
        VAR_8++;



        if (VAR_9 == '\n')
        {


            if (VAR_3 == 131)
            {
                return (VAR_2);
            }



            if (VAR_3 == 128)
            {
                VAR_3 = 130;
                return (VAR_0);
            }



            if (VAR_8 == 1)
            {
                return (VAR_2);
            }

            return (VAR_0);
        }
    }
}
