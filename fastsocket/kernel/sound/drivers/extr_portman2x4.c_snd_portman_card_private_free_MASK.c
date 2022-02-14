
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {struct portman* private_data; } ;
struct portman {scalar_t__ pardev_claimed; struct pardevice* pardev; } ;
struct pardevice {int dummy; } ;


 int FUNC_0 (struct pardevice*) ;
 int FUNC_1 (struct pardevice*) ;
 int FUNC_2 (struct portman*) ;

__attribute__((used)) static void FUNC_3(struct snd_card *VAR_0)
{
 struct portman *VAR_1 = VAR_0->private_data;
 struct pardevice *VAR_2 = VAR_1->pardev;

 if (VAR_2) {
  if (VAR_1->pardev_claimed)
   FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 }

 FUNC_2(VAR_1);
}
