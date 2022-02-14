
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int open_mode; } ;
typedef TYPE_1__ wavnc_port_info ;
struct TYPE_6__ {int audio_mode; } ;
typedef TYPE_2__ wavnc_info ;
struct TYPE_7__ {scalar_t__ portc; scalar_t__ devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__** VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_4(int VAR_10, int VAR_11)
{
 wavnc_info *VAR_12 = (wavnc_info *) VAR_7[VAR_10]->devc;
 wavnc_port_info *VAR_13 = (wavnc_port_info *) VAR_7[VAR_10]->portc;
 unsigned long VAR_14;

 if (VAR_8 & VAR_0) {
  FUNC_0("wavnc: audio trigger ");
  if (VAR_11 & VAR_3)
   FUNC_0("in ");
  if (VAR_11 & VAR_4)
   FUNC_0("out");
  FUNC_0("\n");
 }

 FUNC_1(&VAR_9, VAR_14);

 VAR_11 &= VAR_12->audio_mode;

 if (VAR_13->open_mode & VAR_1 &&
     VAR_11 & VAR_3)



  FUNC_3(VAR_12, VAR_5);

 if (VAR_13->open_mode & VAR_2 &&
     VAR_11 & VAR_4)



  FUNC_3(VAR_12, VAR_6);

 FUNC_2(&VAR_9, VAR_14);
}
