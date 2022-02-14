
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fifosize; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_0(void)
{
 int VAR_1;
 VAR_1 = VAR_0.fifosize / 4;
 if (VAR_1 > 32 * 1024)
  VAR_1 = 32 * 1024;
 return VAR_1;
}
