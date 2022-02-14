
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {int chnum; struct sc_chinfo* chan; } ;
struct sc_info {int dev; } ;
struct sc_chinfo {scalar_t__ run; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int **,int*) ;
 struct sc_pcminfo* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct sc_info *VAR_1)
{
 struct sc_pcminfo *VAR_2;
 struct sc_chinfo *VAR_3;
 device_t *VAR_4;
 int VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_0(VAR_1->dev, &VAR_4, &VAR_5)) != 0)
  goto bad;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_2 = FUNC_1(VAR_4[VAR_6]);
  for (VAR_7 = 0; VAR_7 < VAR_2->chnum; VAR_7++) {
   VAR_3 = &VAR_2->chan[VAR_7];
   if (VAR_3->run)
    goto bad;
  }
 }

 FUNC_3(VAR_4, VAR_0);

 return (0);
bad:





 FUNC_3(VAR_4, VAR_0);

 return (1);
}
