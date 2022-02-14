
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_audio_ctl {int* devleft; int* devright; int* devmute; } ;


 int FUNC_0 (struct hdaa_audio_ctl*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct hdaa_audio_ctl*,int) ;
 int FUNC_2 (struct hdaa_audio_ctl*,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct hdaa_audio_ctl *VAR_1, int VAR_2,
    int VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_1->devleft[VAR_2] = *VAR_4;
 VAR_1->devright[VAR_2] = *VAR_5;
 VAR_1->devmute[VAR_2] = VAR_3;
 VAR_11 = VAR_9 = VAR_10 = VAR_7 = VAR_8 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_9 += VAR_1->devleft[VAR_6];
  VAR_10 += VAR_1->devright[VAR_6];
  VAR_11 |= VAR_1->devmute[VAR_6];
  if (VAR_6 == VAR_2)
   continue;
  VAR_7 += VAR_1->devleft[VAR_6];
  VAR_8 += VAR_1->devright[VAR_6];
 }
 VAR_12 = FUNC_0(VAR_1, VAR_9);
 VAR_13 = FUNC_0(VAR_1, VAR_10);
 FUNC_2(VAR_1, VAR_11, VAR_12, VAR_13);
 *VAR_4 -= FUNC_1(VAR_1, VAR_12) - FUNC_1(VAR_1, FUNC_0(VAR_1, VAR_7));
 *VAR_5 -= FUNC_1(VAR_1, VAR_13) - FUNC_1(VAR_1, FUNC_0(VAR_1, VAR_8));
}
