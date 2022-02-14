
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoa_dma {int running; int slots; int mutex; int channel; int slot; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;



 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct aoa_dma *VAR_3 = VAR_1;
 int VAR_4;

 switch (VAR_2) {
 case 129:


  VAR_3->running = 1;

  VAR_3->slot = 0;
  FUNC_3(VAR_3->channel, VAR_3->slot);

  FUNC_2(VAR_3->channel);

  return (0);

 case 128:
 case 130:

  FUNC_6(&VAR_3->mutex);

  VAR_3->running = 0;


  FUNC_4(VAR_3->channel, 1 << 0, 1 << 0);


  FUNC_0(40000);


  FUNC_5(VAR_3->channel);
  FUNC_4(VAR_3->channel, 1 << 0, 0);

  for (VAR_4 = 0; VAR_4 < VAR_3->slots; ++VAR_4)
   FUNC_1(VAR_3->channel, VAR_4);

  FUNC_7(&VAR_3->mutex);

  return (0);
 }

 return (0);
}
