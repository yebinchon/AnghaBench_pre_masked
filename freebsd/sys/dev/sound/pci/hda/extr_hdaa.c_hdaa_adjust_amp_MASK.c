
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdaa_widget {size_t bindas; struct hdaa_devinfo* devinfo; } ;
struct hdaa_pcm_devinfo {int ossmask; int* minamp; int* maxamp; } ;
struct hdaa_devinfo {struct hdaa_pcm_devinfo* devs; TYPE_1__* as; } ;
struct TYPE_2__ {struct hdaa_pcm_devinfo* pdevinfo; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(struct hdaa_widget *VAR_0, int VAR_1,
    int VAR_2, int VAR_3, int VAR_4)
{
 struct hdaa_devinfo *VAR_5 = VAR_0->devinfo;
 struct hdaa_pcm_devinfo *VAR_6;

 if (VAR_0->bindas >= 0)
  VAR_6 = VAR_5->as[VAR_0->bindas].pdevinfo;
 else
  VAR_6 = &VAR_5->devs[0];
 if (VAR_2)
  VAR_6->ossmask |= (1 << VAR_1);
 if (VAR_3 == 0 && VAR_4 == 0)
  return;
 if (VAR_6->minamp[VAR_1] == 0 && VAR_6->maxamp[VAR_1] == 0) {
  VAR_6->minamp[VAR_1] = VAR_3;
  VAR_6->maxamp[VAR_1] = VAR_4;
 } else {
  VAR_6->minamp[VAR_1] = FUNC_0(VAR_6->minamp[VAR_1], VAR_3);
  VAR_6->maxamp[VAR_1] = FUNC_1(VAR_6->maxamp[VAR_1], VAR_4);
 }
}
