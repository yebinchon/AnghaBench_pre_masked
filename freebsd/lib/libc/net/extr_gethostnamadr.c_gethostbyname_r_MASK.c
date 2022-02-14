
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct hostent {int dummy; } ;
typedef TYPE_1__* res_state ;
struct TYPE_7__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*,int ,struct hostent*,char*,size_t,TYPE_1__*) ;
 int FUNC_3 (char const*,int ,struct hostent*,char*,size_t,struct hostent**,int*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(const char *VAR_5, struct hostent *VAR_6, char *VAR_7,
    size_t VAR_8, struct hostent **VAR_9, int *VAR_10)
{
 res_state VAR_11;

 VAR_11 = FUNC_1();
 if ((VAR_11->options & VAR_3) == 0 && FUNC_4(VAR_11) == -1) {
  FUNC_0(VAR_11, VAR_2);
  return (-1);
 }
 if (VAR_11->options & VAR_4) {
  if (FUNC_2(VAR_5, VAR_0, VAR_6, VAR_7, VAR_8, VAR_11) == 0) {
   *VAR_9 = VAR_6;
   return (0);
  }
  if (FUNC_3(VAR_5, VAR_1, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10, VAR_11) == 0)
   return (0);
 }
 return (FUNC_3(VAR_5, VAR_0, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10, VAR_11));
}
