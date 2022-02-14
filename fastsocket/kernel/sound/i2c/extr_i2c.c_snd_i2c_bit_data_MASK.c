
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* bit; } ;
struct snd_i2c_bus {TYPE_2__ hw_ops; } ;
struct TYPE_3__ {int (* getdata ) (struct snd_i2c_bus*,int) ;} ;


 int FUNC_0 (struct snd_i2c_bus*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_i2c_bus *VAR_0, int VAR_1)
{
 return VAR_0->hw_ops.bit->getdata(VAR_0, VAR_1);
}
