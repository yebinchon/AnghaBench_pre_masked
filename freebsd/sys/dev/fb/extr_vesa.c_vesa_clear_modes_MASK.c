
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vi_mode; int vi_flags; } ;
typedef TYPE_1__ video_info_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(video_info_t *VAR_3, int VAR_4)
{
 while (VAR_3->vi_mode != VAR_0) {
  if ((VAR_3->vi_flags & VAR_2) != VAR_4)
   VAR_3->vi_mode = VAR_1;
  ++VAR_3;
 }
}
