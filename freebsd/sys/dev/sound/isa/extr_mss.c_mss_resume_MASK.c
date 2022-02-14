
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* channel; } ;
struct mss_info {scalar_t__ bd_id; TYPE_2__ pch; int * opl_indexed_regs; int * mss_indexed_regs; } ;
typedef int device_t ;
struct TYPE_4__ {int speed; int format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mss_info*,int,int ) ;
 int FUNC_1 (struct mss_info*,int,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct mss_info*) ;
 int FUNC_4 (struct mss_info*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct mss_info*) ;
 struct mss_info* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{



     struct mss_info *VAR_5;
     int VAR_6;

     VAR_5 = FUNC_7(VAR_4);

     if(VAR_5->bd_id == VAR_1 || VAR_5->bd_id == VAR_0) {

  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
       FUNC_0(VAR_5, VAR_6, VAR_5->mss_indexed_regs[VAR_6]);
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
       FUNC_1(VAR_5, VAR_6, VAR_5->opl_indexed_regs[VAR_6]);
  FUNC_3(VAR_5);
     }

 if (VAR_5->bd_id == VAR_0) {

  FUNC_4(VAR_5);
  FUNC_2(&VAR_5->pch, VAR_5->pch.channel->format);
  FUNC_5(&VAR_5->pch, VAR_5->pch.channel->speed);
  FUNC_6(VAR_5);
 }

     return 0;

}
