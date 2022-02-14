
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bhnd_nvram_sprom {int * data; TYPE_1__* layout; int state; } ;
struct bhnd_nvram_io {int dummy; } ;
struct bhnd_nvram_data {int dummy; } ;
struct TYPE_3__ {int size; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct bhnd_nvram_io*,int ,int ) ;
 int FUNC_2 (struct bhnd_nvram_io*,TYPE_1__**) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct bhnd_nvram_data *VAR_0, struct bhnd_nvram_io *VAR_1)
{
 struct bhnd_nvram_sprom *VAR_2;
 int VAR_3;

 VAR_2 = (struct bhnd_nvram_sprom *)VAR_0;


 if ((VAR_3 = FUNC_2(VAR_1, &VAR_2->layout)))
  return (VAR_3);


 VAR_2->data = FUNC_1(VAR_1, 0, VAR_2->layout->size);
 if (VAR_2->data == ((void*)0))
  goto failed;


 if ((VAR_3 = FUNC_3(&VAR_2->state, VAR_2->layout)))
  goto failed;

 return (0);

failed:
 if (VAR_2->data != ((void*)0))
  FUNC_0(VAR_2->data);

 return (VAR_3);
}
