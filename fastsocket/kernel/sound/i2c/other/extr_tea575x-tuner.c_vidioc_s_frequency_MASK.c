
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ frequency; } ;
struct snd_tea575x {scalar_t__ freq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_tea575x*) ;
 struct snd_tea575x* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_frequency *VAR_5)
{
 struct snd_tea575x *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->frequency < VAR_2 || VAR_5->frequency > VAR_1)
  return -VAR_0;

 VAR_6->freq = VAR_5->frequency;

 FUNC_0(VAR_6);

 return 0;
}
