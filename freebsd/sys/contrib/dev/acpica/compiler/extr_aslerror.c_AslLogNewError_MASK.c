
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef int ASL_ERROR_MSG ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int **,size_t,int ,int ,int ,int ,int ,char*,char*,char*,int *) ;
 int FUNC_3 () ;
 size_t FUNC_4 (size_t,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7 (
    UINT8 VAR_9,
    UINT16 VAR_10,
    UINT32 VAR_11,
    UINT32 VAR_12,
    UINT32 VAR_13,
    UINT32 VAR_14,
    char *VAR_15,
    char *VAR_16,
    char *VAR_17,
    ASL_ERROR_MSG *VAR_18)
{
    ASL_ERROR_MSG *VAR_19 = ((void*)0);
    UINT8 VAR_20 = FUNC_4 (VAR_9, VAR_10);


    FUNC_2 (&VAR_19, VAR_20, VAR_10, VAR_11,
        VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
        VAR_17, VAR_18);



    FUNC_0 (VAR_19);

    if (VAR_3)
    {


        FUNC_1 (VAR_1, VAR_19, ((void*)0));
    }

    VAR_5[VAR_20]++;
    if (!VAR_6 && VAR_5[VAR_0] > VAR_2)
    {
        FUNC_6 ("\nMaximum error count (%u) exceeded\n", VAR_2);

        VAR_8 = 0;
        VAR_7 = VAR_4;
        FUNC_3 ();
        FUNC_5(1);
    }

    return;
}
