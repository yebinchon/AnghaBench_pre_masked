
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fmt; int flags; int * channel; } ;
struct atiixp_info {scalar_t__ polling; TYPE_1__ rch; TYPE_1__ pch; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (struct atiixp_info*) ;
 int FUNC_3 (struct atiixp_info*) ;
 int FUNC_4 (struct atiixp_info*) ;
 int FUNC_5 (struct atiixp_info*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 struct atiixp_info* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct atiixp_info *VAR_4 = FUNC_8(VAR_3);

 FUNC_3(VAR_4);

 FUNC_4(VAR_4);
 FUNC_5(VAR_4);

 if (FUNC_7(VAR_3) == -1) {
  FUNC_6(VAR_3, "unable to reinitialize the mixer\n");
  return (VAR_1);
 }





 if (VAR_4->pch.channel != ((void*)0)) {
  if (VAR_4->pch.fmt != 0)
   FUNC_0(((void*)0), &VAR_4->pch, VAR_4->pch.fmt);
  if (VAR_4->pch.flags & VAR_0) {
   VAR_4->pch.flags &= ~VAR_0;
   FUNC_1(((void*)0), &VAR_4->pch, VAR_2);
  }
 }
 if (VAR_4->rch.channel != ((void*)0)) {
  if (VAR_4->rch.fmt != 0)
   FUNC_0(((void*)0), &VAR_4->rch, VAR_4->rch.fmt);
  if (VAR_4->rch.flags & VAR_0) {
   VAR_4->rch.flags &= ~VAR_0;
   FUNC_1(((void*)0), &VAR_4->rch, VAR_2);
  }
 }


 FUNC_3(VAR_4);
 if (VAR_4->polling == 0)
  FUNC_2(VAR_4);
 FUNC_5(VAR_4);

 return (0);
}
