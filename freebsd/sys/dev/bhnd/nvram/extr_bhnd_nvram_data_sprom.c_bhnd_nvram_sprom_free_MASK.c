
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_sprom {int data; int state; } ;
struct bhnd_nvram_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct bhnd_nvram_data *VAR_0)
{
 struct bhnd_nvram_sprom *VAR_1 = (struct bhnd_nvram_sprom *)VAR_0;

 FUNC_1(&VAR_1->state);
 FUNC_0(VAR_1->data);
}
