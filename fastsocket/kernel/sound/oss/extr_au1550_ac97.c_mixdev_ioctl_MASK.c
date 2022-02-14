
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_codec {int (* mixer_ioctl ) (struct ac97_codec*,unsigned int,unsigned long) ;} ;


 int FUNC_0 (struct ac97_codec*,unsigned int,unsigned long) ;

__attribute__((used)) static int
FUNC_1(struct ac97_codec *VAR_0, unsigned int VAR_1,
                        unsigned long VAR_2)
{
 return VAR_0->mixer_ioctl(VAR_0, VAR_1, VAR_2);
}
