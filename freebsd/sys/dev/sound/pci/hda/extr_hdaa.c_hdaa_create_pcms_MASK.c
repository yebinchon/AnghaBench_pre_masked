
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_pcm_devinfo {int dev; } ;
struct hdaa_devinfo {int num_devs; int dev; struct hdaa_pcm_devinfo* devs; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static void
FUNC_2(struct hdaa_devinfo *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_devs; VAR_1++) {
  struct hdaa_pcm_devinfo *VAR_2 = &VAR_0->devs[VAR_1];

  VAR_2->dev = FUNC_0(VAR_0->dev, "pcm", -1);
  FUNC_1(VAR_2->dev, (void *)VAR_2);
 }
}
