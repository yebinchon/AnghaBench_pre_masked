
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ linker_symval_t ;
typedef int caddr_t ;
typedef int c_linker_sym_t ;


 int FUNC_0 (int ,int *,long*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(caddr_t VAR_0, char *VAR_1, u_int VAR_2,
    long *VAR_3)
{
 linker_symval_t VAR_4;
 c_linker_sym_t VAR_5;
 int VAR_6;

 *VAR_3 = 0;
 VAR_6 = FUNC_0(VAR_0, &VAR_5, VAR_3);
 if (VAR_6)
  return (VAR_6);
 VAR_6 = FUNC_1(VAR_5, &VAR_4);
 if (VAR_6)
  return (VAR_6);
 FUNC_2(VAR_1, VAR_4.name, VAR_2);
 return (0);
}
