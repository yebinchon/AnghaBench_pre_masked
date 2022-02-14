
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int num; struct atiixp* private_data; } ;
struct atiixp {int dummy; } ;


 int FUNC_0 (struct atiixp*,int ,unsigned short,unsigned short) ;

__attribute__((used)) static void FUNC_1(struct snd_ac97 *VAR_0, unsigned short VAR_1,
      unsigned short VAR_2)
{
 struct atiixp *VAR_3 = VAR_0->private_data;
 FUNC_0(VAR_3, VAR_0->num, VAR_1, VAR_2);
}
