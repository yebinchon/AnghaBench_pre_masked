
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct udl_cmd_buf {size_t off; int * buf; } ;



__attribute__((used)) static void
FUNC_0(struct udl_cmd_buf *VAR_0, uint8_t VAR_1)
{

 VAR_0->buf[VAR_0->off] = VAR_1;
 VAR_0->off += 1;
}
