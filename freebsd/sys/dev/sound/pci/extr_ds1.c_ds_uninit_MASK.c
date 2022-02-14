
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int map; int regbase; int control_dmat; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct sc_info*,int ) ;
 int FUNC_3 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(struct sc_info *VAR_10)
{
 FUNC_3(VAR_10, VAR_7, 0x00000000, 4);
 FUNC_3(VAR_10, VAR_5, 0, 4);
 FUNC_3(VAR_10, VAR_6, 0, 4);
 FUNC_2(VAR_10, 0);
 FUNC_3(VAR_10, VAR_4, 0x00010000, 4);
 FUNC_3(VAR_10, VAR_3, 0x00000000, 4);
 FUNC_3(VAR_10, VAR_2, 0x00000000, 4);
 FUNC_3(VAR_10, VAR_8, 0x00000000, 4);
 FUNC_3(VAR_10, VAR_9, 0x00000000, 4);
 FUNC_3(VAR_10, VAR_0, 0x00000000, 4);
 FUNC_3(VAR_10, VAR_1, 0, 2);

 FUNC_0(VAR_10->control_dmat, VAR_10->map);
 FUNC_1(VAR_10->control_dmat, VAR_10->regbase, VAR_10->map);

 return 0;
}
