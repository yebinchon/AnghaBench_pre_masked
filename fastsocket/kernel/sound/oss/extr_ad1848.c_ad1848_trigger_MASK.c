
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int open_mode; } ;
typedef TYPE_1__ ad1848_port_info ;
struct TYPE_8__ {int audio_mode; int lock; } ;
typedef TYPE_2__ ad1848_info ;
struct TYPE_9__ {scalar_t__ portc; scalar_t__ devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,unsigned char) ;
 TYPE_3__** VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(int VAR_5, int VAR_6)
{
 ad1848_info *VAR_7 = (ad1848_info *) VAR_4[VAR_5]->devc;
 ad1848_port_info *VAR_8 = (ad1848_port_info *) VAR_4[VAR_5]->portc;
 unsigned long VAR_9;
 unsigned char VAR_10, VAR_11;

 FUNC_3(&VAR_7->lock,VAR_9);
 VAR_6 &= VAR_7->audio_mode;

 VAR_10 = VAR_11 = FUNC_0(VAR_7, 9);

 if (VAR_8->open_mode & VAR_0)
 {
    if (VAR_6 & VAR_2)
     VAR_10 |= 0x02;
    else
     VAR_10 &= ~0x02;
 }
 if (VAR_8->open_mode & VAR_1)
 {
  if (VAR_6 & VAR_3)
   VAR_10 |= 0x01;
  else
   VAR_10 &= ~0x01;
 }

 if (VAR_10 != VAR_11)
 {
    FUNC_2(VAR_7, 9, VAR_10);
    FUNC_1(VAR_7);
 }
 FUNC_4(&VAR_7->lock,VAR_9);
}
