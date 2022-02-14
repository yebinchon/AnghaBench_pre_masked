
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dsa_switch {int index; TYPE_3__* pd; TYPE_2__* dst; } ;
struct TYPE_6__ {int* rtable; } ;
struct TYPE_5__ {TYPE_1__* pd; } ;
struct TYPE_4__ {int nr_chips; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct dsa_switch*) ;
 int FUNC_2 (struct dsa_switch*) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_2)
{
 int VAR_3;
 int VAR_4;







 FUNC_0(VAR_0, 0x04, 0x4400);






 FUNC_0(VAR_0, 0x0a, 0x0148);




 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;




 FUNC_0(VAR_0, 0x19, 0x8100);






 FUNC_0(VAR_0, 0x1a, (FUNC_1(VAR_2) * 0x1100) | 0x00f0);





 FUNC_0(VAR_0, 0x1c, 0xe000 | (VAR_2->index & 0x1f));





 FUNC_0(VAR_1, 0x03, 0xffff);







 FUNC_0(VAR_1, 0x05, 0x00ff);




 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  int VAR_5;

  VAR_5 = 0x1f;
  if (VAR_4 != VAR_2->index && VAR_4 < VAR_2->dst->pd->nr_chips)
   VAR_5 = VAR_2->pd->rtable[VAR_4] & 0x1f;

  FUNC_0(VAR_1, 0x06, 0x8000 | (VAR_4 << 8) | VAR_5);
 }




 for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
  FUNC_0(VAR_1, 0x07, 0x8000 | (VAR_4 << 12) | 0x7ff);




 for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
  FUNC_0(VAR_1, 0x08, 0x8000 | (VAR_4 << 11));





 FUNC_0(VAR_1, 0x0f, 0x00ff);

 return 0;
}
