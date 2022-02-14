
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_10,
        struct snd_soc_dai *VAR_11)
{

 switch (VAR_11->id) {
 case 0:
  FUNC_2(FUNC_0(0), VAR_0);
  FUNC_2(FUNC_0(1), VAR_1);
  FUNC_2(FUNC_0(2), VAR_2);
  FUNC_2(FUNC_0(3), VAR_3);
  FUNC_2(FUNC_0(4), VAR_4);
  break;
 case 1:
  FUNC_2(FUNC_1(0), VAR_5);
  FUNC_2(FUNC_1(1), VAR_6);
  FUNC_2(FUNC_1(2), VAR_7);
  FUNC_2(FUNC_1(3), VAR_8);
  FUNC_2(FUNC_1(4), VAR_9);
 }

 return 0;
}
