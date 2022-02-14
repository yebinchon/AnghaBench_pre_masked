
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int keyacclist; } ;
typedef TYPE_1__ symkey ;
typedef int sockaddr_u ;
typedef scalar_t__ keyid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;

int
 FUNC_2(
  keyid_t VAR_8,
 sockaddr_u * VAR_9
 )
{
 symkey * VAR_10;

 if (VAR_8 == VAR_7) {
  return (VAR_1 & VAR_5) &&
      FUNC_1(VAR_6, VAR_9, VAR_2);
 }

 if (((void*)0) != (VAR_10 = FUNC_0(VAR_8))) {
  VAR_4++;
  return (VAR_1 & VAR_10->flags) &&
      FUNC_1(VAR_10->keyacclist, VAR_9, VAR_2);
 }

 VAR_3++;
 return VAR_0;
}
