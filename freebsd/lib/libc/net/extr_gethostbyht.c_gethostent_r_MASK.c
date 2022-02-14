
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct hostent_data {int dummy; } ;
struct hostent {int dummy; } ;
typedef TYPE_1__* res_state ;
struct TYPE_6__ {int options; int res_h_errno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct hostent*,struct hostent*,char*,size_t) ;
 struct hostent_data* FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (struct hostent*,struct hostent_data*,int,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(struct hostent *VAR_4, char *VAR_5, size_t VAR_6,
    struct hostent **VAR_7, int *VAR_8)
{
 struct hostent_data *VAR_9;
 struct hostent VAR_10;
 res_state VAR_11;

 VAR_11 = FUNC_3();
 if ((VAR_11->options & VAR_1) == 0 && FUNC_5(VAR_11) == -1) {
  FUNC_0(VAR_11, VAR_0);
  *VAR_8 = VAR_11->res_h_errno;
  return (-1);
 }
 if ((VAR_9 = FUNC_2()) == ((void*)0)) {
  FUNC_0(VAR_11, VAR_0);
  *VAR_8 = VAR_11->res_h_errno;
  return (-1);
 }
 if (FUNC_4(&VAR_10, VAR_9, VAR_11->options & VAR_2, VAR_11) != 0)
  return (-1);
 if (FUNC_1(&VAR_10, VAR_4, VAR_5, VAR_6) != 0) {
  FUNC_0(VAR_11, VAR_0);
  *VAR_8 = VAR_11->res_h_errno;
  return ((VAR_3 != 0) ? VAR_3 : -1);
 }
 *VAR_7 = VAR_4;
 return (0);
}
