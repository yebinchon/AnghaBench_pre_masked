
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ io_base; } ;
struct TYPE_7__ {TYPE_1__ hw; int audio_mode; } ;
typedef TYPE_2__ wavnc_info ;
struct TYPE_8__ {scalar_t__ devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_5__** VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(int VAR_6)
{
 wavnc_info *VAR_7 = (wavnc_info *) VAR_4[VAR_6]->devc;
 unsigned long VAR_8;

 FUNC_1(&VAR_5, VAR_8);

 FUNC_3(VAR_7, VAR_3);

 VAR_7->audio_mode &= ~VAR_1;





 if (FUNC_0(VAR_7->hw.io_base + VAR_2) & VAR_0)
  FUNC_4(VAR_7);



 FUNC_2(&VAR_5, VAR_8);
}
