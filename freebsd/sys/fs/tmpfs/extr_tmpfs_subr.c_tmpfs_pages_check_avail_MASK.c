
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_mount {scalar_t__ tm_pages_max; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 () ;
 scalar_t__ FUNC_1 (struct tmpfs_mount*) ;

__attribute__((used)) static size_t
FUNC_2(struct tmpfs_mount *VAR_1, size_t VAR_2)
{
 if (FUNC_0() < VAR_2)
  return (0);

 if (VAR_1->tm_pages_max != VAR_0 &&
     VAR_1->tm_pages_max < VAR_2 + FUNC_1(VAR_1))
   return (0);

 return (1);
}
