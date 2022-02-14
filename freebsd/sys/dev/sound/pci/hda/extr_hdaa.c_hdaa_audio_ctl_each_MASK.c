
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_devinfo {int ctlcnt; struct hdaa_audio_ctl* ctl; } ;
struct hdaa_audio_ctl {int dummy; } ;



__attribute__((used)) static struct hdaa_audio_ctl *
FUNC_0(struct hdaa_devinfo *VAR_0, int *VAR_1)
{
 if (VAR_0 == ((void*)0) ||
     VAR_1 == ((void*)0) || VAR_0->ctl == ((void*)0) ||
     VAR_0->ctlcnt < 1 ||
     *VAR_1 < 0 || *VAR_1 >= VAR_0->ctlcnt)
  return (((void*)0));
 return (&VAR_0->ctl[(*VAR_1)++]);
}
