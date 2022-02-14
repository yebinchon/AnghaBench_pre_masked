
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct its_dev {int dummy; } ;
struct TYPE_2__ {int valid; struct its_dev* its_dev; } ;
struct its_cmd_desc {TYPE_1__ cmd_desc_mapd; int cmd_type; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct its_cmd_desc*) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_1, struct its_dev *VAR_2, uint8_t VAR_3)
{
 struct its_cmd_desc VAR_4;

 VAR_4.cmd_type = VAR_0;
 VAR_4.cmd_desc_mapd.its_dev = VAR_2;
 VAR_4.cmd_desc_mapd.valid = VAR_3;

 FUNC_0(VAR_1, &VAR_4);
}
