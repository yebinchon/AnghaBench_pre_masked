
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* chip_name; int* mixer_reroute; int model; int supported_devices; int orig_devices; int* levels; int mixer_output_port; int lock; int supported_rec_devices; int orig_rec_devices; int * mix_devices; } ;
typedef TYPE_1__ ad1848_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int * VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int* FUNC_4 (char*,int ,int) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (char*,char*,char*,int) ;
 int * VAR_19 ;

__attribute__((used)) static void FUNC_8(ad1848_info * VAR_20)
{
 int VAR_21;
 char VAR_22[32];
 unsigned long VAR_23;

 VAR_20->mix_devices = &(VAR_12[0]);

 FUNC_7(VAR_22, "%s_%d", VAR_20->chip_name, VAR_17);

 for (VAR_21 = 0; VAR_21 < 32; VAR_21++)
  VAR_20->mixer_reroute[VAR_21] = VAR_21;

 VAR_20->supported_rec_devices = VAR_5;

 switch (VAR_20->model)
 {
  case 136:
  case 135:
  case 139:
  case 138:
   VAR_20->supported_devices = VAR_6;
   break;

  case 129:
   VAR_20->supported_devices = VAR_3;
   VAR_20->mix_devices = &(VAR_13[0]);
   break;

  case 128:
   VAR_20->supported_devices = VAR_7;
   VAR_20->mix_devices = &(VAR_16[0]);
   break;

  case 130:
  case 131:
   VAR_20->mix_devices = &(VAR_14[0]);
   VAR_20->supported_devices = VAR_7;
   break;
  case 134:
  case 133:
  case 132:
   VAR_20->supported_devices = VAR_7;
   break;

  case 137:
   if (VAR_18) {
    VAR_20->supported_devices = VAR_10;
    VAR_20->supported_rec_devices = VAR_11;
    VAR_20->mix_devices = &(VAR_19[0]);
    break;
   }

  default:
   VAR_20->supported_devices = VAR_4;
 }

 VAR_20->orig_devices = VAR_20->supported_devices;
 VAR_20->orig_rec_devices = VAR_20->supported_rec_devices;

 VAR_20->levels = FUNC_4(VAR_22, VAR_15, 1);

 for (VAR_21 = 0; VAR_21 < VAR_9; VAR_21++)
 {
  if (VAR_20->supported_devices & (1 << VAR_21))
   FUNC_0(VAR_20, VAR_21, VAR_20->levels[VAR_21]);
 }

 FUNC_1(VAR_20, VAR_8);

 VAR_20->mixer_output_port = VAR_20->levels[31] | VAR_0 | VAR_1;

 FUNC_5(&VAR_20->lock,VAR_23);
 if (!VAR_18) {
  if (VAR_20->mixer_output_port & VAR_2)
   FUNC_3(VAR_20, 26, FUNC_2(VAR_20, 26) & ~0x40);
  else
   FUNC_3(VAR_20, 26, FUNC_2(VAR_20, 26) | 0x40);
 } else {





  FUNC_3(VAR_20, 16, 0x60);
 }
 FUNC_6(&VAR_20->lock,VAR_23);
}
