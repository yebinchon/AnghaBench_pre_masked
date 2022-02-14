
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_long ;
typedef size_t u_char ;
typedef TYPE_2__* bktr_ptr_t ;
struct TYPE_10__ {int* audiomuxs; int gpio_mux_bits; scalar_t__ msp3400c; } ;
struct TYPE_11__ {int audio_mux_select; scalar_t__ audio_mute_state; scalar_t__ bt848_card; scalar_t__ audio_mux_present; scalar_t__ msp_source_selected; int msp_addr; TYPE_1__ card; scalar_t__ reverse_mute; } ;







 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_3 ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int,int,int) ;
 int FUNC_5 (char*,char*,int,...) ;
 int FUNC_6 (TYPE_2__*) ;

int
FUNC_7( bktr_ptr_t VAR_4, int VAR_5 )
{
 u_long VAR_6;
 volatile u_char VAR_7;
 if ( !VAR_4->card.audiomuxs[ 4 ] )
  return( -1 );

 switch (VAR_5) {
 case 129:



  VAR_4->audio_mux_select = 0;


  if (VAR_4->reverse_mute )
        VAR_4->audio_mux_select = 0;
  else
      VAR_4->audio_mux_select = 3;

  break;
 case 132:
  VAR_4->audio_mux_select = 1;
  break;
 case 131:
  VAR_4->audio_mux_select = 2;
  break;
 case 130:
  VAR_4->audio_mute_state = VAR_3;
  break;
 case 128:
  VAR_4->audio_mute_state = VAR_2;
  break;
 default:
  FUNC_5("%s: audio cmd error %02x\n", FUNC_2(VAR_4),
         VAR_5);
  return( -1 );
 }






        if ( VAR_4->bt848_card == VAR_1 ) {
                FUNC_6( VAR_4 );
                return( 0 );
 }
 if ( VAR_4->audio_mute_state == VAR_3 ) {



  VAR_7 = 3;


  if (VAR_4->reverse_mute )
    VAR_7 = 3;
  else
    VAR_7 = 0;

 }
 else
  VAR_7 = VAR_4->audio_mux_select;


 VAR_6 = FUNC_0(VAR_4, VAR_0) & ~VAR_4->card.gpio_mux_bits;





 FUNC_1(VAR_4, VAR_0, VAR_6 | VAR_4->card.audiomuxs[ VAR_7 ]);
 if ((VAR_4->card.msp3400c) && (VAR_4->audio_mux_present == 0)) {

   if (VAR_4->audio_mute_state == VAR_3 ) {
   FUNC_4(VAR_4, VAR_4->msp_addr, 0x12, 0x0000, 0x0000);
   } else {
   if(VAR_4->audio_mux_select == 0) {
      FUNC_4(VAR_4, VAR_4->msp_addr, 0x12, 0x0000, 0x7300);
      if (VAR_4->msp_source_selected != 0) FUNC_3(VAR_4);
      VAR_4->msp_source_selected = 0;
   }
   if(VAR_4->audio_mux_select == 1) {
      FUNC_4(VAR_4, VAR_4->msp_addr, 0x12, 0x0000, 0x7300);
      FUNC_4(VAR_4, VAR_4->msp_addr, 0x12, 0x000d, 0x1900);
      FUNC_4(VAR_4, VAR_4->msp_addr, 0x12, 0x0008, 0x0220);
      FUNC_4(VAR_4, VAR_4->msp_addr, 0x12, 0x0013, 0x0000);
      VAR_4->msp_source_selected = 1;
   }

   if(VAR_4->audio_mux_select == 2) {
      FUNC_4(VAR_4, VAR_4->msp_addr, 0x12, 0x0000, 0x7300);
      FUNC_4(VAR_4, VAR_4->msp_addr, 0x12, 0x000d, 0x1900);
      FUNC_4(VAR_4, VAR_4->msp_addr, 0x12, 0x0008, 0x0220);
      FUNC_4(VAR_4, VAR_4->msp_addr, 0x12, 0x0013, 0x0200);
      VAR_4->msp_source_selected = 2;
   }
   }
 }


 return( 0 );
}
