
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dt_encoding; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(dtrace_hdl_t *VAR_3, const char *VAR_4, uintptr_t VAR_5)
{
 if (VAR_4 == ((void*)0))
  return (FUNC_0(VAR_3, VAR_2));

 if (FUNC_1(VAR_4, "ascii") == 0)
  VAR_3->dt_encoding = VAR_0;
 else if (FUNC_1(VAR_4, "utf8") == 0)
  VAR_3->dt_encoding = VAR_1;
 else
  return (FUNC_0(VAR_3, VAR_2));

 return (0);
}
