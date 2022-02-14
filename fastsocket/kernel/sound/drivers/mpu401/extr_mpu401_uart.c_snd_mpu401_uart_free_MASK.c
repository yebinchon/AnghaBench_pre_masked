
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi {struct snd_mpu401* private_data; } ;
struct snd_mpu401 {scalar_t__ irq; int res; scalar_t__ irq_flags; } ;


 int FUNC_0 (scalar_t__,void*) ;
 int FUNC_1 (struct snd_mpu401*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi *VAR_0)
{
 struct snd_mpu401 *VAR_1 = VAR_0->private_data;
 if (VAR_1->irq_flags && VAR_1->irq >= 0)
  FUNC_0(VAR_1->irq, (void *) VAR_1);
 FUNC_2(VAR_1->res);
 FUNC_1(VAR_1);
}
