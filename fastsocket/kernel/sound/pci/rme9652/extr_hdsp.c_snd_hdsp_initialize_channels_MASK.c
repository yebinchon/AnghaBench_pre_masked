
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int io_type; char* card_name; int ds_out_channels; int ds_in_channels; int ss_out_channels; int ss_in_channels; int qs_out_channels; int qs_in_channels; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int FUNC_0 (struct hdsp*,int ) ;

__attribute__((used)) static void FUNC_1(struct hdsp *VAR_12)
{
 int VAR_13, VAR_14, VAR_15;

 switch (VAR_12->io_type) {
 case 131:
  VAR_12->card_name = "RME Hammerfall DSP + Digiface";
  VAR_12->ss_in_channels = VAR_12->ss_out_channels = VAR_1;
  VAR_12->ds_in_channels = VAR_12->ds_out_channels = VAR_0;
  break;

 case 129:
  VAR_12->card_name = "RME Hammerfall HDSP 9652";
  VAR_12->ss_in_channels = VAR_12->ss_out_channels = VAR_6;
  VAR_12->ds_in_channels = VAR_12->ds_out_channels = VAR_5;
  break;

 case 130:
  VAR_13 = FUNC_0(VAR_12, VAR_9);

  VAR_14 = (VAR_13 & VAR_7) ? 0 : 4;
  VAR_15 = (VAR_13 & VAR_8) ? 0 : 4;
  VAR_12->card_name = "RME Hammerfall HDSP 9632";
  VAR_12->ss_in_channels = VAR_4+VAR_14;
  VAR_12->ds_in_channels = VAR_2+VAR_14;
  VAR_12->qs_in_channels = VAR_3+VAR_14;
  VAR_12->ss_out_channels = VAR_4+VAR_15;
  VAR_12->ds_out_channels = VAR_2+VAR_15;
  VAR_12->qs_out_channels = VAR_3+VAR_15;
  break;

 case 128:
  VAR_12->card_name = "RME Hammerfall DSP + Multiface";
  VAR_12->ss_in_channels = VAR_12->ss_out_channels = VAR_11;
  VAR_12->ds_in_channels = VAR_12->ds_out_channels = VAR_10;
  break;

 default:

  break;
 }
}
