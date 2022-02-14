
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ symkey ;
typedef scalar_t__ keyid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

int
FUNC_1(
 keyid_t VAR_7
 )
{
 symkey * VAR_8;

 if (VAR_7 == VAR_6)
  return !!(VAR_1 & VAR_5);

 VAR_4++;
 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 == ((void*)0) || !(VAR_1 & VAR_8->flags)) {
  VAR_3++;
  return VAR_0;
 }
 return VAR_2;
}
