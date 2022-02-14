
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
typedef int kobj_class_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_mixer* FUNC_0 (int ,int ,void*,int ,char const*) ;

struct snd_mixer *
FUNC_1(device_t VAR_2, kobj_class_t VAR_3, void *VAR_4, const char *VAR_5)
{
 struct snd_mixer *VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0, VAR_5);

 if (VAR_6 != ((void*)0))
  ++VAR_1;

 return (VAR_6);
}
