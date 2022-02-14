
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_3__* sc_p ;
struct TYPE_5__ {int arg; int (* intr ) (int ) ;} ;
struct TYPE_4__ {int arg; int (* intr ) (int ) ;} ;
struct TYPE_6__ {TYPE_2__ midi_intr; int * io; TYPE_1__ pcm_intr; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 sc_p VAR_1 = (sc_p)VAR_0;
 int VAR_2;

 do {
  VAR_2 = 0;
  if (VAR_1->pcm_intr.intr != ((void*)0) &&
      (FUNC_0(VAR_1->io[2], 2) & 1)) {
   (*VAR_1->pcm_intr.intr)(VAR_1->pcm_intr.arg);
   VAR_2 = 1;
  }
  if (VAR_1->midi_intr.intr != ((void*)0) &&
      (FUNC_0(VAR_1->io[1], 0) & 0x80)) {
   (*VAR_1->midi_intr.intr)(VAR_1->midi_intr.arg);
   VAR_2 = 1;
  }
 } while (VAR_2 != 0);
}
