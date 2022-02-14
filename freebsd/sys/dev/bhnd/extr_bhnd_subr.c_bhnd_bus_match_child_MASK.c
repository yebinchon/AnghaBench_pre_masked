
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_core_match {int dummy; } ;
struct bhnd_core_info {int dummy; } ;
typedef int * device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bhnd_core_info*,struct bhnd_core_match const*) ;
 struct bhnd_core_info FUNC_1 (int *) ;
 int FUNC_2 (int *,int ***,int*) ;
 int FUNC_3 (int **,int ) ;

device_t
FUNC_4(device_t VAR_1, const struct bhnd_core_match *VAR_2)
{
 device_t *VAR_3;
 device_t VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, &VAR_3, &VAR_5);
 if (VAR_6 != 0)
  return (((void*)0));

 VAR_4 = ((void*)0);
 for (int VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  struct bhnd_core_info VAR_8 = FUNC_1(VAR_3[VAR_7]);

  if (FUNC_0(&VAR_8, VAR_2)) {
   VAR_4 = VAR_3[VAR_7];
   goto done;
  }
 }

done:
 FUNC_3(VAR_3, VAR_0);
 return VAR_4;
}
