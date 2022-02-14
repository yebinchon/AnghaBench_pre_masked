
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef scalar_t__ u_int ;
struct rmtcallargs {scalar_t__ arglen; int args_ptr; int (* xdr_args ) (int *,int ) ;scalar_t__ proc; scalar_t__ vers; scalar_t__ prog; } ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,scalar_t__*) ;

bool_t
FUNC_5(XDR *VAR_2, struct rmtcallargs *VAR_3)
{
 u_int VAR_4, VAR_5, VAR_6;

 FUNC_2(VAR_2 != ((void*)0));
 FUNC_2(VAR_3 != ((void*)0));

 if (FUNC_4(VAR_2, &(VAR_3->prog)) &&
     FUNC_4(VAR_2, &(VAR_3->vers)) &&
     FUNC_4(VAR_2, &(VAR_3->proc))) {
  VAR_4 = FUNC_0(VAR_2);
  if (! FUNC_4(VAR_2, &(VAR_3->arglen)))
      return (VAR_0);
  VAR_5 = FUNC_0(VAR_2);
  if (! (*(VAR_3->xdr_args))(VAR_2, VAR_3->args_ptr))
      return (VAR_0);
  VAR_6 = FUNC_0(VAR_2);
  VAR_3->arglen = (u_long)VAR_6 - (u_long)VAR_5;
  FUNC_1(VAR_2, VAR_4);
  if (! FUNC_4(VAR_2, &(VAR_3->arglen)))
      return (VAR_0);
  FUNC_1(VAR_2, VAR_6);
  return (VAR_1);
 }
 return (VAR_0);
}
