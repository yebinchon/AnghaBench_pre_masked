
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ow_cmd {int rom_len; int * rom_cmd; } ;
typedef int device_t ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct ow_cmd*,int ,int) ;
 int FUNC_1 (int ,int ,struct ow_cmd*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2)
{
 struct ow_cmd VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.rom_cmd[0] = VAR_0;
 VAR_3.rom_len = 1;
 return FUNC_1(VAR_1, VAR_2, &VAR_3);
}
