
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct stat {TYPE_1__ st_mtim; } ;


 scalar_t__ FUNC_0 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_0, const char *VAR_1)
{
 struct stat VAR_2, VAR_3;

 if (FUNC_0(VAR_0, &VAR_2) != 0 || FUNC_0(VAR_1, &VAR_3) != 0)
  return 0;

 if (VAR_2 > VAR_3)
  return 1;
 if (VAR_2 < VAR_3)
  return 0;

       return (VAR_2 > VAR_3);
}
