
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_col {int dummy; } ;
struct TYPE_2__ {struct its_col* col; } ;
struct its_cmd_desc {TYPE_1__ cmd_desc_invall; int cmd_type; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct its_cmd_desc*) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_1, struct its_col *VAR_2)
{
 struct its_cmd_desc VAR_3;

 VAR_3.cmd_type = VAR_0;
 VAR_3.cmd_desc_invall.col = VAR_2;

 FUNC_0(VAR_1, &VAR_3);
}
