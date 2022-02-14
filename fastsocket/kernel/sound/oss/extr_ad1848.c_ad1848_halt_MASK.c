
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int open_mode; } ;
typedef TYPE_1__ ad1848_port_info ;
struct TYPE_6__ {scalar_t__ audio_mode; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_7__ {scalar_t__ portc; scalar_t__ devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned char FUNC_2 (TYPE_2__*,int) ;
 TYPE_3__** VAR_2 ;

__attribute__((used)) static void FUNC_3(int VAR_3)
{
 ad1848_info *VAR_4 = (ad1848_info *) VAR_2[VAR_3]->devc;
 ad1848_port_info *VAR_5 = (ad1848_port_info *) VAR_2[VAR_3]->portc;

 unsigned char VAR_6 = FUNC_2(VAR_4, 9);

 if (VAR_6 & 0x01 && (VAR_5->open_mode & VAR_1))
  FUNC_1(VAR_3);

 if (VAR_6 & 0x02 && (VAR_5->open_mode & VAR_0))
  FUNC_0(VAR_3);
 VAR_4->audio_mode = 0;
}
