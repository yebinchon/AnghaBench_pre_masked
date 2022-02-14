
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sc_info*,int ,int ) ;
 int FUNC_2 (struct sc_info*,int ,int ) ;
 int FUNC_3 (struct sc_info*,int ,int ) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct sc_info *VAR_6, int VAR_7)
{

    switch (VAR_7) {
    case 0:

        FUNC_3(VAR_6, VAR_0, VAR_1);

        FUNC_1(VAR_6, VAR_2, VAR_3);
        break;
    case 3:

     FUNC_2(VAR_6, VAR_2, VAR_3);
     FUNC_1(VAR_6, VAR_4, VAR_5);
        break;
    }

    FUNC_0(FUNC_4("cs4281_power %d -> %d\n", VAR_6->power, VAR_7));
    VAR_6->power = VAR_7;

    return 0;
}
