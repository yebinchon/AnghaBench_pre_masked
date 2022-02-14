
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dev; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sc_info*,int ,int,int) ;
 int FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(kobj_t VAR_6, void *VAR_7, int VAR_8, u_int32_t VAR_9)
{
    struct sc_info *VAR_10 = (struct sc_info *)VAR_7;
    int VAR_11;

    VAR_11 = VAR_8 >> 8;
    VAR_8 &= 0xff;

    FUNC_1(VAR_10, VAR_0, VAR_8);
    FUNC_1(VAR_10, VAR_1, VAR_9);
    FUNC_1(VAR_10, VAR_2, VAR_4 |
       VAR_5 | VAR_3);

    if (FUNC_0(VAR_10, VAR_2, VAR_3, 250) == 0) {
 FUNC_2(VAR_10->dev,"cs4281_wrcd: DCV did not go\n");
    }

    return 0;
}
