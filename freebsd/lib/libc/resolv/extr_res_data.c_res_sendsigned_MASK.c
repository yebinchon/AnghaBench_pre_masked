
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_1__* res_state ;
typedef int ns_tsig_key ;
struct TYPE_4__ {unsigned int options; } ;


 unsigned int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int const*,int,int *,int *,int) ;

int
FUNC_2(const u_char *VAR_2, int VAR_3, ns_tsig_key *VAR_4,
        u_char *VAR_5, int VAR_6)
{
 res_state VAR_7 = &VAR_1;
 if ((VAR_7->options & VAR_0) == 0U && FUNC_0() == -1) {

  return (-1);
 }

 return (FUNC_1(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6));
}
