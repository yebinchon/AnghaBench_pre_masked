
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rfcomm_dlc {int flags; int v24_sig; int state; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct rfcomm_dlc *VAR_4, u8 VAR_5)
{
 FUNC_0("dlc %p state %ld v24_sig 0x%x",
   VAR_4, VAR_4->state, VAR_5);

 if (FUNC_3(VAR_1, &VAR_4->flags))
  VAR_5 |= VAR_3;
 else
  VAR_5 &= ~VAR_3;

 VAR_4->v24_sig = VAR_5;

 if (!FUNC_2(VAR_0, &VAR_4->flags))
  FUNC_1(VAR_2);

 return 0;
}
