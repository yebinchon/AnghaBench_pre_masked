
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
struct TYPE_9__ {TYPE_1__ hw; } ;
typedef TYPE_2__ wavnc_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_5(wavnc_info *VAR_5)
{
 int VAR_6;

 if (VAR_4 & VAR_0)
  FUNC_0("%s: mixer_reset\n", VAR_5->hw.name);




 FUNC_1(VAR_5, VAR_2);





 FUNC_2(VAR_5, VAR_3, 0x9800, 0xa836);




 FUNC_2(VAR_5, VAR_3, 0x4c00, 0x8c00);




 FUNC_2(VAR_5, VAR_3, 0x2801, 0x6800);




 FUNC_4(VAR_5, 0);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_3(VAR_5, VAR_6);
}
