
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dirent; } ;
typedef TYPE_2__ filtered_dirent_t ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0,
                        const void *VAR_1)
{
  const filtered_dirent_t *VAR_2 = (const filtered_dirent_t *)VAR_0;
  const filtered_dirent_t *VAR_3 = (const filtered_dirent_t *)VAR_1;

  return FUNC_0(VAR_2->dirent->name, VAR_3->dirent->name);
}
