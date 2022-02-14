
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int volume_l; int volume_r; int bass; int treble; int synth; } ;
struct TYPE_10__ {TYPE_1__ mixer; } ;
typedef TYPE_2__ pss_confdata ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_5(pss_confdata *VAR_1)
{
 FUNC_2(VAR_1, 33, 33);
 FUNC_1(VAR_1, 50);
 FUNC_4(VAR_1, 50);
 FUNC_3(VAR_1, 30);
 FUNC_0 (VAR_1, 0x0010);
 FUNC_0 (VAR_1, 0x0800 | 0xce);

 if(VAR_0)
 {
  VAR_1->mixer.volume_l = VAR_1->mixer.volume_r = 33;
  VAR_1->mixer.bass = 50;
  VAR_1->mixer.treble = 50;
  VAR_1->mixer.synth = 30;
 }
}
