
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int pe_scn; } ;
struct TYPE_9__ {int ps_ndx; } ;
typedef TYPE_1__ PE_Scn ;
typedef TYPE_2__ PE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

PE_Scn *
FUNC_2(PE *VAR_3, PE_Scn *VAR_4)
{

 if (VAR_3 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (((void*)0));
 }

 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_0(&VAR_3->pe_scn);
 else
  VAR_4 = FUNC_1(VAR_4, VAR_2);

 while (VAR_4 != ((void*)0)) {
  if (VAR_4->ps_ndx >= 1 && VAR_4->ps_ndx <= 0xFFFFU)
   return (VAR_4);
  VAR_4 = FUNC_1(VAR_4, VAR_2);
 }

 return (((void*)0));
}
