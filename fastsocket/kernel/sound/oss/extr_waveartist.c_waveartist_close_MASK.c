
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int open_mode; } ;
typedef TYPE_1__ wavnc_port_info ;
struct TYPE_5__ {int open_mode; scalar_t__ audio_mode; } ;
typedef TYPE_2__ wavnc_info ;
struct TYPE_6__ {scalar_t__ portc; scalar_t__ devc; } ;


 TYPE_3__** VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(int VAR_2)
{
 wavnc_info *VAR_3 = (wavnc_info *) VAR_0[VAR_2]->devc;
 wavnc_port_info *VAR_4 = (wavnc_port_info *) VAR_0[VAR_2]->portc;
 unsigned long VAR_5;

 FUNC_0(&VAR_1, VAR_5);

 FUNC_2(VAR_2);

 VAR_3->audio_mode = 0;
 VAR_3->open_mode &= ~VAR_4->open_mode;
 VAR_4->open_mode = 0;

 FUNC_1(&VAR_1, VAR_5);
}
