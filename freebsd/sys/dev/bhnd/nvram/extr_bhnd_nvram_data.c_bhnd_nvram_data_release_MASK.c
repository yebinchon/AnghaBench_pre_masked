
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_nvram_data {TYPE_1__* cls; int refs; } ;
struct TYPE_2__ {int (* op_free ) (struct bhnd_nvram_data*) ;} ;


 int FUNC_0 (struct bhnd_nvram_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bhnd_nvram_data*) ;

void
FUNC_3(struct bhnd_nvram_data *VAR_0)
{
 if (!FUNC_1(&VAR_0->refs))
  return;


 VAR_0->cls->op_free(VAR_0);


 FUNC_0(VAR_0);
}
