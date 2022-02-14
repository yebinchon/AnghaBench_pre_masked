
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {struct oxygen* private_data; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct oxygen {int dummy; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,unsigned int,char const* const*) ;
 unsigned int FUNC_1 (struct oxygen*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_info *VAR_1)
{
 static const char *const VAR_2[5] = {
  "Front",
  "Front+Surround",
  "Front+Surround+Back",
  "Front+Surround+Center/LFE",
  "Front+Surround+Center/LFE+Back",
 };
 struct oxygen *VAR_3 = VAR_0->private_data;
 unsigned int VAR_4 = FUNC_1(VAR_3);

 return FUNC_0(VAR_1, 1, VAR_4, VAR_2);
}
