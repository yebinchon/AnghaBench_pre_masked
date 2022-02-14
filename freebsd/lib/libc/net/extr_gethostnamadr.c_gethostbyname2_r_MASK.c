
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct hostent {int dummy; } ;
typedef TYPE_1__* res_state ;
struct TYPE_6__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char const*,int,struct hostent*,char*,size_t,struct hostent**,int*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(const char *VAR_2, int VAR_3, struct hostent *VAR_4, char *VAR_5,
    size_t VAR_6, struct hostent **VAR_7, int *VAR_8)
{
 res_state VAR_9;

 VAR_9 = FUNC_1();
 if ((VAR_9->options & VAR_1) == 0 && FUNC_3(VAR_9) == -1) {
  FUNC_0(VAR_9, VAR_0);
  return (-1);
 }
 return (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9));
}
