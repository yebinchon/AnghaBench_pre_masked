
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int open_mode; } ;
typedef TYPE_1__ ad1848_port_info ;
struct TYPE_6__ {int lock; int open_mode; scalar_t__ audio_mode; scalar_t__ intr_active; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_7__ {scalar_t__ portc; scalar_t__ devc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__** VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(int VAR_1)
{
 unsigned long VAR_2;
 ad1848_info *VAR_3 = (ad1848_info *) VAR_0[VAR_1]->devc;
 ad1848_port_info *VAR_4 = (ad1848_port_info *) VAR_0[VAR_1]->portc;

 FUNC_0(FUNC_3("ad1848_close(void)\n"));

 VAR_3->intr_active = 0;
 FUNC_1(VAR_1);

 FUNC_4(&VAR_3->lock,VAR_2);

 VAR_3->audio_mode = 0;
 VAR_3->open_mode &= ~VAR_4->open_mode;
 VAR_4->open_mode = 0;

 FUNC_2(VAR_3);
 FUNC_5(&VAR_3->lock,VAR_2);
}
