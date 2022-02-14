
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct udl_cmd_buf {int dummy; } ;


 int FUNC_0 (struct udl_cmd_buf*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct udl_cmd_buf *VAR_0, uint8_t VAR_1, uint32_t VAR_2)
{

 FUNC_0(VAR_0, VAR_1 + 0, (VAR_2 >> 16) & 0xff);
 FUNC_0(VAR_0, VAR_1 + 1, (VAR_2 >> 8) & 0xff);
 FUNC_0(VAR_0, VAR_1 + 2, (VAR_2 >> 0) & 0xff);
}
