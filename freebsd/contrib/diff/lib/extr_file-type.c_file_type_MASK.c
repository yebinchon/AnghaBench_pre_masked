
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct stat const*) ;
 scalar_t__ FUNC_8 (struct stat const*) ;
 scalar_t__ FUNC_9 (struct stat const*) ;
 scalar_t__ FUNC_10 (struct stat const*) ;
 char const* FUNC_11 (char*) ;

char const *
FUNC_12 (struct stat const *VAR_0)
{






  if (FUNC_5 (VAR_0->st_mode))
    return VAR_0->st_size == 0 ? FUNC_11("regular empty file") : FUNC_11("regular file");

  if (FUNC_2 (VAR_0->st_mode))
    return FUNC_11("directory");

  if (FUNC_0 (VAR_0->st_mode))
    return FUNC_11("block special file");

  if (FUNC_1 (VAR_0->st_mode))
    return FUNC_11("character special file");

  if (FUNC_3 (VAR_0->st_mode))
    return FUNC_11("fifo");

  if (FUNC_4 (VAR_0->st_mode))
    return FUNC_11("symbolic link");

  if (FUNC_6 (VAR_0->st_mode))
    return FUNC_11("socket");

  if (FUNC_7 (VAR_0))
    return FUNC_11("message queue");

  if (FUNC_8 (VAR_0))
    return FUNC_11("semaphore");

  if (FUNC_9 (VAR_0))
    return FUNC_11("shared memory object");

  if (FUNC_10 (VAR_0))
    return FUNC_11("typed memory object");

  return FUNC_11("weird file");
}
