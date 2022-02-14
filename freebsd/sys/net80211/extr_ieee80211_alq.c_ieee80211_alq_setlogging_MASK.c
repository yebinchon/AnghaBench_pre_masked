
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_alq_rec {int dummy; } ;
struct TYPE_2__ {int td_ucred; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char*,int ,int ,int ,int ) ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(int VAR_7)
{
 int VAR_8;

 if (VAR_7) {
  if (VAR_2)
   FUNC_0(VAR_2);

  VAR_8 = FUNC_1(&VAR_2,
      VAR_3,
      VAR_1->td_ucred,
      VAR_0,
      VAR_6, 0);
  VAR_5 = 0;
  VAR_4 = 0;
  FUNC_2("net80211: logging to %s enabled; "
      "struct size %d bytes\n",
      VAR_3,
      (int) sizeof(struct ieee80211_alq_rec));
 } else {
  if (VAR_2)
   FUNC_0(VAR_2);
  VAR_2 = ((void*)0);
  FUNC_2("net80211: logging disabled\n");
  VAR_8 = 0;
 }
 return (VAR_8);
}
