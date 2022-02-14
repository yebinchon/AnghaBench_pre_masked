
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_board_info {int board_flags3; int board_flags2; int board_flags; int board_srom_rev; int board_rev; int board_devid; int board_type; int board_vendor; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;

int
FUNC_2(device_t VAR_8, device_t VAR_9,
    struct bhnd_board_info *VAR_10)
{
 int VAR_11;

 FUNC_0(VAR_10->board_vendor, VAR_5, 0);
 FUNC_0(VAR_10->board_type, VAR_4, 0);
 FUNC_0(VAR_10->board_devid, VAR_6, 0);
 FUNC_1(VAR_10->board_rev, VAR_3);
 FUNC_0(VAR_10->board_srom_rev,VAR_7, 0);


 FUNC_1(VAR_10->board_flags, VAR_0);
 FUNC_0(VAR_10->board_flags2, VAR_1, 0);
 FUNC_0(VAR_10->board_flags3, VAR_2, 0);

 return (0);
}
