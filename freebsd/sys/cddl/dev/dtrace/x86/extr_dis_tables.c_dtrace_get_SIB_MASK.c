
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_3__ {int d86_error; int (* d86_get_byte ) (int ) ;int* d86_bytes; int d86_len; int d86_data; } ;
typedef TYPE_1__ dis86_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(dis86_t *VAR_0, uint_t *VAR_1, uint_t *VAR_2, uint_t *VAR_3)
{
 int VAR_4;

 if (VAR_0->d86_error)
  return;

 VAR_4 = VAR_0->d86_get_byte(VAR_0->d86_data);
 if (VAR_4 < 0) {
  VAR_0->d86_error = 1;
  return;
 }
 VAR_0->d86_bytes[VAR_0->d86_len++] = VAR_4;

 *VAR_3 = VAR_4 & 0x7;
 *VAR_2 = (VAR_4 >> 3) & 0x7;
 *VAR_1 = (VAR_4 >> 6) & 0x3;
}
