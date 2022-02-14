
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int d86_numopnds; int d86_error; int (* d86_get_byte ) (int ) ;int* d86_bytes; size_t d86_len; int d86_imm_bytes; TYPE_1__* d86_opnd; int d86_data; int d86_opnd_size; } ;
typedef TYPE_2__ dis86_t ;
struct TYPE_4__ {int d86_value; int d86_value_size; int d86_mode; } ;







 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(dis86_t *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_3->d86_numopnds < VAR_6 + 1)
  VAR_3->d86_numopnds = VAR_6 + 1;

 switch (VAR_4) {
 case 137:
  VAR_9 = 1;
  break;
 case 134:
  if (VAR_3->d86_opnd_size == VAR_1)
   VAR_9 = 2;
  else if (VAR_3->d86_opnd_size == VAR_2)
   VAR_9 = 4;
  else
   VAR_9 = 8;
  break;
 case 133:
 case 129:
 case 128:
 case 132:
 case 136:
 case 135:
 case 131:
  VAR_9 = VAR_5;
  break;
 case 130:
  VAR_9 = 2;
  break;
 }
 if (VAR_9 < VAR_5)
  VAR_9 = VAR_5;

 if (VAR_3->d86_error)
  return;
 VAR_3->d86_opnd[VAR_6].d86_value = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
  VAR_8 = VAR_3->d86_get_byte(VAR_3->d86_data);
  if (VAR_8 < 0) {
   VAR_3->d86_error = 1;
   return;
  }
  VAR_3->d86_bytes[VAR_3->d86_len++] = VAR_8;
  VAR_3->d86_opnd[VAR_6].d86_value |= (uint64_t)VAR_8 << (VAR_7 * 8);
 }

 if (VAR_3->d86_bytes[VAR_3->d86_len - 1] & 0x80) {
  for (; VAR_7 < sizeof (uint64_t); VAR_7++)
   VAR_3->d86_opnd[VAR_6].d86_value |=
       (uint64_t)0xff << (VAR_7 * 8);
 }





}
