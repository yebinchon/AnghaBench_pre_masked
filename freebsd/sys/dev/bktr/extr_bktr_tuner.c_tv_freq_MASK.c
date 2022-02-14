
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TUNER {int* pllControl; int* bandAddrs; } ;
typedef TYPE_3__* bktr_ptr_t ;
struct TYPE_10__ {scalar_t__ afc; int frequency; int radio_mode; } ;
struct TYPE_9__ {int tuner_pllAddr; struct TUNER* tuner; } ;
struct TYPE_11__ {TYPE_2__ tuner; TYPE_1__ card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (char*,char*,...) ;
 struct TUNER const* VAR_10 ;

int
FUNC_5( bktr_ptr_t VAR_11, int VAR_12, int VAR_13 )
{
 const struct TUNER* VAR_14;
 u_char VAR_15;
 u_char VAR_16;
 u_char VAR_17;
 int VAR_18;
 int VAR_19 = 0;




 VAR_14 = VAR_11->card.tuner;
 if ( VAR_14 == ((void*)0) )
  return( -1 );

 if (VAR_14 == &VAR_10[VAR_8]) {
  FUNC_3(VAR_11, VAR_12);
  return 0;
 }
 if (VAR_13 == VAR_9) {




  if ( VAR_12 < (160 * VAR_2 ) )
      VAR_19 = VAR_4;
  else if ( VAR_12 < (454 * VAR_2 ) )
      VAR_19 = VAR_5;
  else
      VAR_19 = VAR_3;
  VAR_18 = VAR_12 + VAR_6;


  VAR_15 = VAR_11->card.tuner_pllAddr;
  VAR_16 = VAR_14->pllControl[ VAR_19 ];
  VAR_17 = VAR_14->bandAddrs[ VAR_19 ];

  if(!(VAR_17 && VAR_16))
    return(-1);

  if ( VAR_12 > VAR_11->tuner.frequency ) {
   FUNC_2( VAR_11, VAR_15, (VAR_18>>8) & 0x7f, VAR_18 & 0xff );
   FUNC_2( VAR_11, VAR_15, VAR_16, VAR_17 );
         }
         else {
   FUNC_2( VAR_11, VAR_15, VAR_16, VAR_17 );
   FUNC_2( VAR_11, VAR_15, (VAR_18>>8) & 0x7f, VAR_18 & 0xff );
         }
  VAR_11->tuner.frequency = VAR_12;
 }

 if ( VAR_13 == VAR_1 ) {
  VAR_19 = VAR_0;
  VAR_18 = (VAR_12 + 1070)/5;


  VAR_15 = VAR_11->card.tuner_pllAddr;
  VAR_16 = VAR_14->pllControl[ VAR_19 ];
  VAR_17 = VAR_14->bandAddrs[ VAR_19 ];

  if(!(VAR_17 && VAR_16))
    return(-1);

  VAR_17 |= VAR_11->tuner.radio_mode;



  FUNC_2( VAR_11, VAR_15, VAR_16, VAR_17 );
  FUNC_2( VAR_11, VAR_15, (VAR_18>>8) & 0x7f, VAR_18 & 0xff );

  VAR_11->tuner.frequency = (VAR_18 * 5) - 1070;


 }


 return( 0 );
}
