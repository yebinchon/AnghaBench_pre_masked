
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int open_mode; } ;
typedef TYPE_1__ wavnc_port_info ;
struct TYPE_5__ {scalar_t__ audio_mode; } ;
typedef TYPE_2__ wavnc_info ;
struct TYPE_6__ {scalar_t__ devc; scalar_t__ portc; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__** VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(int VAR_3)
{
 wavnc_port_info *VAR_4 = (wavnc_port_info *) VAR_2[VAR_3]->portc;
 wavnc_info *VAR_5;

 if (VAR_4->open_mode & VAR_1)
  FUNC_1(VAR_3);

 if (VAR_4->open_mode & VAR_0)
  FUNC_0(VAR_3);

 VAR_5 = (wavnc_info *) VAR_2[VAR_3]->devc;
 VAR_5->audio_mode = 0;
}
