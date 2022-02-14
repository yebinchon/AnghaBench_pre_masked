
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int supported_rec_devices; int model; int recmask; int submodel; } ;
typedef TYPE_1__ sb_devc ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*,int*) ;
 unsigned char* VAR_12 ;
 unsigned char* VAR_13 ;
 int FUNC_1 (TYPE_1__*,int ,unsigned char) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(sb_devc * VAR_14, int VAR_15)
{
 int VAR_16, VAR_17;
 unsigned char VAR_18, VAR_19;

 VAR_16 = VAR_15 & VAR_14->supported_rec_devices;

 switch (VAR_14->model)
 {
  case 133:
  case 136:
  case 135:
  case 132:
   if (VAR_14->model == 136 && FUNC_0 (VAR_14, &VAR_16)) {
    break;
   };
   if (VAR_16 != 129 &&
    VAR_16 != 130 &&
    VAR_16 != 131)
   {




    VAR_16 &= ~VAR_14->recmask;
   }
   if (VAR_16 != 129 &&
    VAR_16 != 130 &&
    VAR_16 != 131)
   {




    VAR_16 = 129;
   }
   if (VAR_16 ^ VAR_14->recmask)


   {
    switch (VAR_16)
    {
     case 129:
      FUNC_2(VAR_14, VAR_10);
      break;

     case 130:
      FUNC_2(VAR_14, VAR_9);
      break;

     case 131:
      FUNC_2(VAR_14, VAR_8);
      break;

     default:
      FUNC_2(VAR_14, VAR_10);
    }
   }
   break;

  case 134:
   if (!VAR_16)
    VAR_16 = 129;

   if (VAR_14->submodel == VAR_11)
   {
    switch (VAR_16)
    {
     case 130:
      FUNC_1(VAR_14, VAR_3, VAR_1);
      break;
     case 131:
      FUNC_1(VAR_14, VAR_3, VAR_0);
      break;
     case 128:
      FUNC_1(VAR_14, VAR_3, VAR_4);
      break;
     default:
      FUNC_1(VAR_14, VAR_3, VAR_2);
      break;
    }
   }
   else
   {
    VAR_18 = VAR_19 = 0;
    for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++)
    {
     if ((1 << VAR_17) & VAR_16)
     {
      VAR_18 |= VAR_12[VAR_17];
      VAR_19 |= VAR_13[VAR_17];
     }
     FUNC_1 (VAR_14, VAR_5, VAR_18);
     FUNC_1 (VAR_14, VAR_6, VAR_19);
    }
   }
   break;
 }
 VAR_14->recmask = VAR_16;
 return VAR_14->recmask;
}
