
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bhnd_nvram_data {TYPE_1__* cls; } ;
struct TYPE_2__ {int (* op_caps ) (struct bhnd_nvram_data*) ;} ;


 int FUNC_0 (struct bhnd_nvram_data*) ;

uint32_t
FUNC_1(struct bhnd_nvram_data *VAR_0)
{
 return (VAR_0->cls->op_caps(VAR_0));
}
