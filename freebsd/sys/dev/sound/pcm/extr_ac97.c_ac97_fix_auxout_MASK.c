
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ac97_info {int extcaps; TYPE_1__* mix; } ;
struct TYPE_2__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct ac97_info*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2(struct ac97_info *VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_4, VAR_2) & 0x8000;
 if (VAR_4->extcaps & VAR_0 &&
     FUNC_0(VAR_4, VAR_1) == 0x8080) {
  VAR_4->mix[VAR_3].reg = VAR_1;
  VAR_5 = 1;
 }

 if (VAR_5 == 0) {
  FUNC_1(&VAR_4->mix[VAR_3],
        sizeof(VAR_4->mix[VAR_3]));
 }
}
