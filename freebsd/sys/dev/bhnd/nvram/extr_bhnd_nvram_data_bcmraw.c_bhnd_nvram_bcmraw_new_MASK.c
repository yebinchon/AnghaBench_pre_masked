
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_io {int dummy; } ;
struct bhnd_nvram_data {int dummy; } ;
struct bhnd_nvram_bcmraw {int dummy; } ;


 int FUNC_0 (struct bhnd_nvram_data*) ;
 int FUNC_1 (struct bhnd_nvram_bcmraw*,struct bhnd_nvram_io*) ;

__attribute__((used)) static int
FUNC_2(struct bhnd_nvram_data *VAR_0, struct bhnd_nvram_io *VAR_1)
{
 struct bhnd_nvram_bcmraw *VAR_2;
 int VAR_3;

 VAR_2 = (struct bhnd_nvram_bcmraw *)VAR_0;



 if ((VAR_3 = FUNC_1(VAR_2, VAR_1))) {
  FUNC_0(VAR_0);
  return (VAR_3);
 }

 return (0);
}
