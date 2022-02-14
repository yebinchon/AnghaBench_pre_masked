
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pex_time {int dummy; } ;
struct pex_obj {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long,int ) ;
 scalar_t__ FUNC_1 (struct pex_obj*,long,int*,struct pex_time*) ;

__attribute__((used)) static int
FUNC_2 (struct pex_obj *VAR_2, long VAR_3, int *VAR_4,
        struct pex_time *VAR_5, int VAR_6, const char **VAR_7,
        int *VAR_8)
{


  if (VAR_6)
    FUNC_0 (VAR_3, VAR_0);

  if (FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_5) < 0)
    {
      *VAR_8 = VAR_1;
      *VAR_7 = "wait";
      return -1;
    }

  return 0;
}
