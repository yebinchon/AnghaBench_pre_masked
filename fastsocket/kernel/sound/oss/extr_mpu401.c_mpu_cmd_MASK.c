
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cmd; int nr_args; int nr_returns; int* data; } ;
typedef TYPE_1__ mpu_command_rec ;


 int FUNC_0 (int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 static mpu_command_rec VAR_4;

 VAR_4.cmd = VAR_1 & 0xff;
 VAR_4.nr_args = ((VAR_1 & 0xf0) == 0xE0);
 VAR_4.nr_returns = ((VAR_1 & 0xf0) == 0xA0);
 VAR_4.data[0] = VAR_2 & 0xff;

 if ((VAR_3 = FUNC_0(VAR_0, &VAR_4)) < 0)
  return VAR_3;
 return (unsigned char) VAR_4.data[0];
}
