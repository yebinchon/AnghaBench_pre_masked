
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct au1550_state {struct ac97_codec* codec; } ;
struct ac97_codec {int dummy; } ;


 int FUNC_0 (struct ac97_codec*,unsigned int,unsigned long) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_0, struct file *VAR_1,
          unsigned int VAR_2, unsigned long VAR_3)
{
 struct au1550_state *VAR_4 = (struct au1550_state *)VAR_1->private_data;
 struct ac97_codec *VAR_5 = VAR_4->codec;

 return FUNC_0(VAR_5, VAR_2, VAR_3);
}
