
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kb_delay1; int kb_delay2; } ;
typedef TYPE_1__ keyboard_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(keyboard_t *VAR_1, int VAR_2)
{


 static int VAR_3[] = { 250, 500, 750, 1000 };
 static int VAR_4[] = { 34, 38, 42, 46, 50, 55, 59, 63,
    68, 76, 84, 92, 100, 110, 118, 126,
    136, 152, 168, 184, 200, 220, 236, 252,
    272, 304, 336, 368, 400, 440, 472, 504 };

 if (VAR_2 & ~0x7f)
  return VAR_0;
 VAR_1->kb_delay1 = VAR_3[(VAR_2 >> 5) & 3];
 VAR_1->kb_delay2 = VAR_4[VAR_2 & 0x1f];
 return 0;
}
