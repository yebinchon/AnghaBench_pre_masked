
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* write_memory ) (int ,char*,int) ;} ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (int ,char*,int) ;
 TYPE_1__* VAR_0 ;

int
FUNC_5 (CORE_ADDR VAR_1, const char *VAR_2, int VAR_3)
{



  static char *VAR_4 = 0;
  int VAR_5;

  if (VAR_4 != ((void*)0))
    FUNC_1 (VAR_4);

  VAR_4 = FUNC_2 (VAR_3);
  FUNC_3 (VAR_4, VAR_2, VAR_3);
  FUNC_0 (VAR_1, VAR_4, VAR_3);
  VAR_5 = (*VAR_0->write_memory) (VAR_1, VAR_4, VAR_3);
  FUNC_1 (VAR_4);
  VAR_4 = ((void*)0);

  return VAR_5;
}
