
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
typedef TYPE_1__ scr_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(scr_stat *VAR_3, int VAR_4, int VAR_5)
{
 if (!(VAR_3->status & VAR_0))
  return;
 if (!(++VAR_2 & 4))
  return;
 VAR_2 = 0;
 VAR_3->status ^= VAR_1;
 FUNC_0(VAR_3, VAR_4, VAR_3->status & VAR_0,
     VAR_3->status & VAR_1, VAR_5);
}
