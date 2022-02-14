
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int dev; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sc_info*,int ) ;
 scalar_t__ FUNC_1 (struct sc_info*,int ,int,int) ;
 scalar_t__ FUNC_2 (struct sc_info*,int ,int ,int) ;
 int FUNC_3 (struct sc_info*,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_10, void *VAR_11, int VAR_12)
{
    struct sc_info *VAR_13 = (struct sc_info *)VAR_11;
    int VAR_14;

    VAR_14 = VAR_12 >> 8;
    VAR_12 &= 0xff;


    FUNC_0(VAR_13, VAR_7);


    FUNC_3(VAR_13, VAR_0, VAR_12);
    FUNC_3(VAR_13, VAR_1, 0);
    FUNC_3(VAR_13, VAR_2, VAR_5 |
       VAR_6 | VAR_4 |
       VAR_3);


    if (FUNC_1(VAR_13, VAR_2, VAR_4, 250) == 0) {
 FUNC_4(VAR_13->dev, "cs4281_rdcd: DCV did not go\n");
 return -1;
    }


    if (FUNC_2(VAR_13, VAR_8, VAR_9, 250) == 0) {
 FUNC_4(VAR_13->dev,"cs4281_rdcd: VSTS did not come\n");
 return -1;
    }

    return FUNC_0(VAR_13, VAR_7);
}
