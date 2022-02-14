
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_core_match {int dummy; } ;
struct bhnd_core_info {int dummy; } ;
struct bcma_erom {int dummy; } ;
typedef int bhnd_erom_t ;


 int FUNC_0 (struct bcma_erom*,struct bhnd_core_match const*,struct bhnd_core_info*) ;

__attribute__((used)) static int
FUNC_1(bhnd_erom_t *VAR_0, const struct bhnd_core_match *VAR_1,
    struct bhnd_core_info *VAR_2)
{
 struct bcma_erom *VAR_3 = (struct bcma_erom *)VAR_0;


 return (FUNC_0(VAR_3, VAR_1, VAR_2));
}
