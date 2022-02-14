
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_7 ;
 int FUNC_5 () ;

int
FUNC_6()
{
    int VAR_8;
    u_char VAR_9[9];

    FUNC_5();


    FUNC_4(VAR_0, 0x04);

    for (VAR_8 = 1; (VAR_8 < VAR_1); VAR_8++) {

 VAR_6 = 0 ;
 FUNC_4(VAR_4, 0);
 FUNC_4(VAR_3, VAR_7);
 FUNC_3(VAR_5, VAR_2);
 FUNC_0(1000);

 if (FUNC_2(VAR_9))
     FUNC_1(VAR_9, VAR_8);
 else
     break;
    }
    return VAR_8 - 1;
}
