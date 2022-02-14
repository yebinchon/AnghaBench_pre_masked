
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dt_ddefs_fd; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (char const*,int,int) ;

__attribute__((used)) static int
FUNC_3(dtrace_hdl_t *VAR_4, const char *VAR_5, uintptr_t VAR_6)
{
 int VAR_7;

 if (VAR_5 == ((void*)0))
  return (FUNC_1(VAR_4, VAR_0));

 if ((VAR_7 = FUNC_2(VAR_5, VAR_1 | VAR_2, 0666)) == -1)
  return (FUNC_1(VAR_4, VAR_3));

 (void) FUNC_0(VAR_4->dt_ddefs_fd);
 VAR_4->dt_ddefs_fd = VAR_7;
 return (0);
}
