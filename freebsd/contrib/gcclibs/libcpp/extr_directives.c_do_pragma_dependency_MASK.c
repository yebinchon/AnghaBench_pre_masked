
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cpp_reader ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,int ,char*,char const*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (void*) ;
 char* FUNC_6 (int *,int*,int *) ;

__attribute__((used)) static void
FUNC_7 (cpp_reader *VAR_2)
{
  const char *VAR_3;
  int VAR_4, VAR_5;

  VAR_3 = FUNC_6 (VAR_2, &VAR_4, ((void*)0));
  if (!VAR_3)
    return;

  VAR_5 = FUNC_1 (VAR_2, VAR_3, VAR_4);
  if (VAR_5 < 0)
    FUNC_2 (VAR_2, VAR_0, "cannot find source file %s", VAR_3);
  else if (VAR_5 > 0)
    {
      FUNC_2 (VAR_2, VAR_0,
   "current file is older than %s", VAR_3);
      if (FUNC_3 (VAR_2)->type != VAR_1)
 {
   FUNC_0 (VAR_2, 1);
   FUNC_4 (VAR_2, VAR_0, 0);
 }
    }

  FUNC_5 ((void *) VAR_3);
}
