
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_devinfo {int dummy; } ;
struct hdaa_audio_ctl {scalar_t__ enable; scalar_t__ ossmask; int offset; int step; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdaa_audio_ctl*,int ,int,int) ;
 struct hdaa_audio_ctl* FUNC_1 (struct hdaa_devinfo*,int*) ;

__attribute__((used)) static void
FUNC_2(struct hdaa_devinfo *VAR_2)
{
 struct hdaa_audio_ctl *VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = 0;
 while ((VAR_3 = FUNC_1(VAR_2, &VAR_4)) != ((void*)0)) {
  if (VAR_3->enable == 0 || VAR_3->ossmask != 0) {



   FUNC_0(VAR_3, VAR_0, 0, 0);
   continue;
  }

  VAR_5 = VAR_3->offset;
  if (VAR_5 > VAR_3->step)
   VAR_5 = VAR_3->step;
  FUNC_0(VAR_3, VAR_1, VAR_5, VAR_5);
 }
}
