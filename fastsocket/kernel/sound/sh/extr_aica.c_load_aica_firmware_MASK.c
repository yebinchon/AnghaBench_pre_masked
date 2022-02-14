
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {int size; int data; } ;
struct TYPE_2__ {int dev; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct firmware const*) ;
 int FUNC_1 (struct firmware const**,char*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_1;
 const struct firmware *VAR_2;
 FUNC_5();
 VAR_1 = FUNC_1(&VAR_2, "aica_firmware.bin", &VAR_0->dev);
 if (FUNC_6(VAR_1))
  return VAR_1;

 FUNC_2();
 FUNC_4(0, VAR_2->data, VAR_2->size);
 FUNC_3();
 FUNC_0(VAR_2);
 return VAR_1;
}
