
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* part1; int ordering; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline void
FUNC_2 (const char *VAR_2, const char *VAR_3, int VAR_4)
{
  int VAR_5;
  int VAR_6 = VAR_3 - VAR_2;
  int VAR_7 = VAR_4 ? VAR_6 : -1;

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    if (!FUNC_1 (VAR_1[VAR_5].part1, VAR_2, VAR_6)
 && (VAR_4 || VAR_1[VAR_5].part1[VAR_6] == '\0')
 && FUNC_0 (VAR_5, VAR_7))
      VAR_1[VAR_5].ordering = 1;
}
