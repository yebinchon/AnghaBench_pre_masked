
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct udl_cmd_buf {int off; int * buf; } ;



__attribute__((used)) static void
FUNC_0(struct udl_cmd_buf *VAR_0, const uint8_t *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;

 for (VAR_3 = 0; VAR_3 != VAR_2; VAR_3 += 2) {

  VAR_0->buf[VAR_0->off + VAR_3 + 0] = VAR_1[VAR_3 + 1];
  VAR_0->buf[VAR_0->off + VAR_3 + 1] = VAR_1[VAR_3 + 0];
 }
 VAR_0->off += VAR_2;
}
