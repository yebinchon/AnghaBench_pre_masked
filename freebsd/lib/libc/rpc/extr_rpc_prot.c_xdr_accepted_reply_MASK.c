
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int high; int low; } ;
struct TYPE_3__ {int where; int (* proc ) (int *,int ) ;} ;
struct accepted_reply {int ar_stat; TYPE_2__ ar_vers; TYPE_1__ ar_results; int ar_verf; } ;
typedef int enum_t ;
typedef enum accept_stat { ____Placeholder_accept_stat } accept_stat ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

bool_t
FUNC_5(XDR *VAR_2, struct accepted_reply *VAR_3)
{
 enum accept_stat *VAR_4;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4 = &VAR_3->ar_stat;


 if (! FUNC_3(VAR_2, &(VAR_3->ar_verf)))
  return (VAR_0);
 if (! FUNC_2(VAR_2, (enum_t *) VAR_4))
  return (VAR_0);
 switch (VAR_3->ar_stat) {

 case 129:
  return ((*(VAR_3->ar_results.proc))(VAR_2, VAR_3->ar_results.where));

 case 131:
  if (!FUNC_4(VAR_2, &(VAR_3->ar_vers.low)))
   return (VAR_0);
  return (FUNC_4(VAR_2, &(VAR_3->ar_vers.high)));

 case 133:
 case 128:
 case 132:
 case 130:
  break;
 }
 return (VAR_1);
}
