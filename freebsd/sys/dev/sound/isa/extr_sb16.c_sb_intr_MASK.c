
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fmt; int dch; int channel; scalar_t__ run; } ;
struct TYPE_3__ {int fmt; int dch; int channel; scalar_t__ run; } ;
struct sb_info {int bd_flags; TYPE_2__ rch; TYPE_1__ pch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct sb_info*,int ) ;
 int FUNC_3 (struct sb_info*) ;
 int FUNC_4 (struct sb_info*,int ) ;
 int FUNC_5 (struct sb_info*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_6)
{
     struct sb_info *VAR_7 = (struct sb_info *)VAR_6;
     int VAR_8, VAR_9;






 VAR_8 = 0;
 FUNC_3(VAR_7);
     VAR_9 = FUNC_2(VAR_7, VAR_5);
     if (VAR_9 & 1)
  FUNC_4(VAR_7, VAR_3);

     if (VAR_9 & 2)
  FUNC_4(VAR_7, VAR_4);
 FUNC_5(VAR_7);






 if (VAR_7->bd_flags & VAR_2) {
      if (VAR_9 & 1) {
   if (VAR_7->pch.fmt & VAR_1)
    VAR_8 |= 1;
   if (VAR_7->rch.fmt & VAR_1)
    VAR_8 |= 2;
      }
      if (VAR_9 & 2) {
   if (VAR_7->pch.fmt & VAR_0)
    VAR_8 |= 1;
   if (VAR_7->rch.fmt & VAR_0)
    VAR_8 |= 2;
      }
 } else {
      if (VAR_9 & 1) {
   if (VAR_7->pch.dch == 1)
    VAR_8 |= 1;
   if (VAR_7->rch.dch == 1)
    VAR_8 |= 2;
      }
      if (VAR_9 & 2) {
   if (VAR_7->pch.dch == 2)
    VAR_8 |= 1;
   if (VAR_7->rch.dch == 2)
    VAR_8 |= 2;
      }
 }



     if ((VAR_8 & 1) && (VAR_7->pch.run))
  FUNC_0(VAR_7->pch.channel);

     if ((VAR_8 & 2) && (VAR_7->rch.run))
  FUNC_0(VAR_7->rch.channel);
}
