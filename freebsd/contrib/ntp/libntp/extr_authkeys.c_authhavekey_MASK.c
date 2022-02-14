
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int flags; scalar_t__ keyid; int keyacclist; int secretsize; int secret; } ;
typedef TYPE_1__ symkey ;
typedef scalar_t__ keyid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

int
FUNC_1(
 keyid_t VAR_13
 )
{
 symkey * VAR_14;

 VAR_3++;
 if (0 == VAR_13 || VAR_9 == VAR_13)
  return !!(VAR_1 & VAR_7);






 VAR_5++;
 VAR_14 = FUNC_0(VAR_13);
 if ((VAR_14 == ((void*)0)) || (VAR_14->type == 0)) {
  VAR_4++;
  return VAR_0;
 }




 if ( ! (VAR_1 & VAR_14->flags)) {
  VAR_6++;
  return VAR_0;
 }




 VAR_9 = VAR_14->keyid;
 VAR_12 = VAR_14->type;
 VAR_7 = VAR_14->flags;
 VAR_10 = VAR_14->secret;
 VAR_11 = VAR_14->secretsize;
 VAR_8 = VAR_14->keyacclist;

 return VAR_2;
}
