
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct inferior_regcache_data {int registers_valid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct thread_info*) ;

__attribute__((used)) static struct inferior_regcache_data *
FUNC_3 (struct thread_info *VAR_0, int VAR_1)
{
  struct inferior_regcache_data *VAR_2;

  VAR_2 = (struct inferior_regcache_data *) FUNC_2 (VAR_0);

  if (VAR_2 == ((void*)0))
    FUNC_0 ("no register cache");


  if (VAR_1 && VAR_2->registers_valid == 0)
    {
      FUNC_1 (0);
      VAR_2->registers_valid = 1;
    }

  return VAR_2;
}
