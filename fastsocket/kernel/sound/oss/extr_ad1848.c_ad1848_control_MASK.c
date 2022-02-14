
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int supported_devices; int supported_rec_devices; int* mixer_reroute; int lock; int model; } ;
typedef TYPE_1__ ad1848_info ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(int VAR_8, int VAR_9)
{
 ad1848_info *VAR_10;
 unsigned long VAR_11;

 if (VAR_7 < 1)
  return -VAR_1;

 VAR_10 = &VAR_6[VAR_7 - 1];

 switch (VAR_8)
 {
  case 128:
   if (VAR_10->model != VAR_2 && VAR_10->model != VAR_3)
    return -VAR_0;
   FUNC_5(&VAR_10->lock,VAR_11);
   FUNC_1(VAR_10);
   FUNC_4(VAR_10, 29, (FUNC_3(VAR_10, 29) & 0x1f) | (VAR_9 << 5));
   FUNC_2(VAR_10);
   FUNC_6(&VAR_10->lock,VAR_11);
   break;

  case 129:
  {
   int VAR_12 = (VAR_9 >> 8) & 0xff;
   int VAR_13 = VAR_9 & 0xff;

   if (VAR_12 < 0 || VAR_12 >= VAR_5)
    return -VAR_0;

   if (!(VAR_10->supported_devices & (1 << VAR_12)) &&
       !(VAR_10->supported_rec_devices & (1 << VAR_12)))
    return -VAR_0;

   if (VAR_13 == VAR_4)
   {
    FUNC_0(VAR_10, VAR_12, 0);
    VAR_10->supported_devices &= ~(1 << VAR_12);
    VAR_10->supported_rec_devices &= ~(1 << VAR_12);
    break;
   }


   if (VAR_13 < 0 || VAR_13 >= VAR_5)
    return -VAR_0;

   VAR_10->mixer_reroute[VAR_13] = VAR_12;
   if (VAR_10->supported_devices & (1 << VAR_12))
    VAR_10->supported_devices |= (1 << VAR_13);
   if (VAR_10->supported_rec_devices & (1 << VAR_12))
    VAR_10->supported_rec_devices |= (1 << VAR_13);

   VAR_10->supported_devices &= ~(1 << VAR_12);
   VAR_10->supported_rec_devices &= ~(1 << VAR_12);
  }
  break;
 }
 return 0;
}
