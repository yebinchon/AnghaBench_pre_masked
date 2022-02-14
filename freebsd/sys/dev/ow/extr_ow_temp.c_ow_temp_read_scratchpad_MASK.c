
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ow_cmd {int xpt_read_len; int xpt_read; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,struct ow_cmd*) ;
 int FUNC_2 (int ,struct ow_cmd*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, uint8_t *VAR_2, int VAR_3)
{
 struct ow_cmd VAR_4;

 FUNC_2(VAR_1, &VAR_4, VAR_0);
 VAR_4.xpt_read_len = VAR_3;
 FUNC_1(VAR_1, &VAR_4);
 FUNC_0(VAR_2, VAR_4.xpt_read, VAR_3);

 return 0;
}
