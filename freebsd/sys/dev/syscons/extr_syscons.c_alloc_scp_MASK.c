
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scr_stat ;
typedef int sc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int *) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static scr_stat
*FUNC_6(sc_softc_t *VAR_4, int VAR_5)
{
    scr_stat *VAR_6;



    VAR_6 = (scr_stat *)FUNC_1(sizeof(scr_stat), VAR_0, VAR_1);
    FUNC_0(VAR_4, VAR_5, VAR_6);

    FUNC_4(VAR_6, VAR_3, VAR_3);
    if (FUNC_5(VAR_6, VAR_2))
 FUNC_5(VAR_6, "*");


    FUNC_2(VAR_6, VAR_3);



    FUNC_3(VAR_6, 0, 0, VAR_3);


    return VAR_6;
}
