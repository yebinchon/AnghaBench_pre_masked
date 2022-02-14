
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdaa_devinfo {int * ctl; } ;
struct hdaa_audio_ctl {scalar_t__ enable; int ndir; int dir; int index; TYPE_1__* widget; } ;
typedef scalar_t__ nid_t ;
struct TYPE_2__ {scalar_t__ nid; } ;


 int VAR_0 ;
 struct hdaa_audio_ctl* FUNC_0 (struct hdaa_devinfo*,int*) ;

__attribute__((used)) static struct hdaa_audio_ctl *
FUNC_1(struct hdaa_devinfo *VAR_1, nid_t VAR_2, int VAR_3,
      int VAR_4, int VAR_5)
{
 struct hdaa_audio_ctl *VAR_6;
 int VAR_7, VAR_8 = 0;

 if (VAR_1 == ((void*)0) || VAR_1->ctl == ((void*)0))
  return (((void*)0));

 VAR_7 = 0;
 while ((VAR_6 = FUNC_0(VAR_1, &VAR_7)) != ((void*)0)) {
  if (VAR_6->enable == 0)
   continue;
  if (VAR_6->widget->nid != VAR_2)
   continue;
  if (VAR_3 && VAR_6->ndir != VAR_3)
   continue;
  if (VAR_4 >= 0 && VAR_6->ndir == VAR_0 &&
      VAR_6->dir == VAR_6->ndir && VAR_6->index != VAR_4)
   continue;
  VAR_8++;
  if (VAR_8 == VAR_5 || VAR_5 <= 0)
   return (VAR_6);
 }

 return (((void*)0));
}
