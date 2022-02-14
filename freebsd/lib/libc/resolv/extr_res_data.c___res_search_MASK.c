
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_1__* res_state ;
struct TYPE_5__ {unsigned int options; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,char const*,int,int,int *,int) ;

int
FUNC_3(const char *VAR_3,
    int VAR_4, int VAR_5,
    u_char *VAR_6,
    int VAR_7)
{
 res_state VAR_8 = &VAR_2;
 if ((VAR_8->options & VAR_1) == 0U && FUNC_1() == -1) {
  FUNC_0(VAR_8, VAR_0);
  return (-1);
 }

 return (FUNC_2(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));
}
