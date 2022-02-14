
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bhnd_nvram_io {int dummy; } ;
struct bhnd_nvram_data {int refs; TYPE_1__* cls; } ;
struct TYPE_3__ {int size; int (* op_new ) (struct bhnd_nvram_data*,struct bhnd_nvram_io*) ;} ;
typedef TYPE_1__ bhnd_nvram_data_class ;


 int FUNC_0 (int,char*) ;
 struct bhnd_nvram_data* FUNC_1 (int,int) ;
 int FUNC_2 (struct bhnd_nvram_data*) ;
 int FUNC_3 (struct bhnd_nvram_data**,struct bhnd_nvram_io*,int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct bhnd_nvram_data*,struct bhnd_nvram_io*) ;

int
FUNC_6(bhnd_nvram_data_class *VAR_0, struct bhnd_nvram_data **VAR_1,
    struct bhnd_nvram_io *VAR_2)
{
 struct bhnd_nvram_data *VAR_3;
 int VAR_4;


 if (VAR_0 == ((void*)0))
  return (FUNC_3(VAR_1, VAR_2, ((void*)0), 0));


 FUNC_0(sizeof(struct bhnd_nvram_data) <= VAR_0->size,
     ("instance size %zu less than minimum %zu", VAR_0->size,
      sizeof(struct bhnd_nvram_data)));

 VAR_3 = FUNC_1(1, VAR_0->size);
 VAR_3->cls = VAR_0;
 FUNC_4(&VAR_3->refs, 1);


 if ((VAR_4 = VAR_0->op_new(VAR_3, VAR_2))) {
  FUNC_2(VAR_3);
  return (VAR_4);
 }

 *VAR_1 = VAR_3;
 return (0);
}
