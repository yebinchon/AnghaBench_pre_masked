
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {int (* ih ) (struct sc_pcminfo*) ;} ;
struct sc_info {int lock; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int **,int*) ;
 struct sc_pcminfo* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct sc_info*,int ) ;
 int FUNC_4 (struct sc_info*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sc_pcminfo*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_4)
{
 struct sc_pcminfo *VAR_5;
 struct sc_info *VAR_6;
 device_t *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_6 = (struct sc_info *)VAR_4;

 FUNC_5(VAR_6->lock);

 VAR_9 = FUNC_3(VAR_6, VAR_2);
 if (VAR_9 & VAR_0) {
  if ((VAR_10 = FUNC_0(VAR_6->dev, &VAR_7, &VAR_8)) != 0)
   return;

  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
   VAR_5 = FUNC_1(VAR_7[VAR_11]);
   if (VAR_5->ih != ((void*)0))
    VAR_5->ih(VAR_5);
  }

  FUNC_4(VAR_6, VAR_1, 0);
  FUNC_2(VAR_7, VAR_3);
 }

 FUNC_6(VAR_6->lock);
}
