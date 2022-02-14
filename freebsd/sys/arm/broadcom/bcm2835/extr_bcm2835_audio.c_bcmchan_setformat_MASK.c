
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm2835_audio_info {int dummy; } ;
struct bcm2835_audio_chinfo {int fmt; struct bcm2835_audio_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (struct bcm2835_audio_info*) ;
 int FUNC_1 (struct bcm2835_audio_info*) ;
 int FUNC_2 (struct bcm2835_audio_info*) ;

__attribute__((used)) static int
FUNC_3(kobj_t VAR_0, void *VAR_1, uint32_t VAR_2)
{
 struct bcm2835_audio_chinfo *VAR_3 = VAR_1;
 struct bcm2835_audio_info *VAR_4 = VAR_3->parent;

 FUNC_0(VAR_4);
 VAR_3->fmt = VAR_2;
 FUNC_2(VAR_4);
 FUNC_1(VAR_4);

 return 0;
}
