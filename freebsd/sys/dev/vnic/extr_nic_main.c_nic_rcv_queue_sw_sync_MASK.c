
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nicpf {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nicpf*,int ) ;
 int FUNC_2 (struct nicpf*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct nicpf *VAR_3)
{
 uint16_t VAR_4 = ~0x00;

 FUNC_2(VAR_3, VAR_1, 0x01);

 while (VAR_4) {
  if (FUNC_1(VAR_3, VAR_2) & 0x1)
   break;
  VAR_4--;
 }
 FUNC_2(VAR_3, VAR_1, 0x00);
 if (!VAR_4) {
  FUNC_0(VAR_3->dev, "Receive queue software sync failed\n");
  return (VAR_0);
 }
 return (0);
}
