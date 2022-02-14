
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT32 ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*,int ) ;

__attribute__((used)) static BOOLEAN
FUNC_3 (
    const char **VAR_2,
    char *VAR_3,
    UINT32 *VAR_4)
{
    const char *VAR_5;
    UINT32 VAR_6;


    FUNC_0 (VAR_3);

    for (VAR_6 = 0, VAR_5 = VAR_2[0];
            VAR_5;
            VAR_6++, VAR_5 = VAR_2[VAR_6])
    {
        if (!(FUNC_2 (VAR_5, VAR_3, FUNC_1 (VAR_3))))
        {
            *VAR_4 = VAR_6;
            return (VAR_1);
        }
    }

    return (VAR_0);
}
