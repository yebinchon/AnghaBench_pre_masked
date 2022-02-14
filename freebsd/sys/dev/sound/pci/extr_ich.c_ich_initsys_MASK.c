
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int ac97rate; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int *,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct sc_info* VAR_2)
{



 FUNC_0(FUNC_2(VAR_2->dev),
         FUNC_1(FUNC_3(VAR_2->dev)),
         VAR_1, "ac97rate", VAR_0,
         &VAR_2->ac97rate, 48000,
         "AC97 link rate (default = 48000)");

 return (0);
}
