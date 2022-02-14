
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_10__ {int * mac_rpool; } ;
struct TYPE_11__ {int * mci_rpool; TYPE_3__ mci_macro; int mci_sasl_string; int mci_tolist; int mci_host; int mci_heloname; int mci_rstatus; int mci_status; } ;
struct TYPE_9__ {int nc_cname; int nc_exp; } ;
struct TYPE_8__ {int hs_sig; int hs_exp; } ;
struct TYPE_12__ {int s_symtype; struct TYPE_12__* s_next; int s_name; TYPE_4__ s_mci; TYPE_2__ s_namecanon; TYPE_1__ s_hostsig; } ;
typedef TYPE_5__ STAB ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;

 TYPE_5__** VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;

void
FUNC_4()
{
 int VAR_3;
 STAB *VAR_4, *VAR_5, *VAR_6;
 time_t VAR_7;

 VAR_7 = FUNC_1();
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  VAR_5 = ((void*)0);
  VAR_4 = VAR_2[VAR_3];
  while (VAR_4 != ((void*)0))
  {
   switch (VAR_4->s_symtype)
   {
     case 129:
    if (VAR_4->s_hostsig.hs_exp >= VAR_7)
     goto next;
    FUNC_0(VAR_4->s_hostsig.hs_sig);
    break;

     case 128:
    if (VAR_4->s_namecanon.nc_exp >= VAR_7)
     goto next;
    FUNC_0(VAR_4->s_namecanon.nc_cname);
    break;

     default:
    if (VAR_4->s_symtype >= VAR_1)
    {

     FUNC_0(VAR_4->s_mci.mci_status);
     FUNC_0(VAR_4->s_mci.mci_rstatus);
     FUNC_0(VAR_4->s_mci.mci_heloname);
     if (VAR_4->s_mci.mci_rpool != ((void*)0))
     {
      FUNC_3(VAR_4->s_mci.mci_rpool);
      VAR_4->s_mci.mci_macro.mac_rpool = ((void*)0);
      VAR_4->s_mci.mci_rpool = ((void*)0);
     }
     break;
    }
  next:
    VAR_5 = VAR_4;
    VAR_4 = VAR_4->s_next;
    continue;
   }


   FUNC_0(VAR_4->s_name);
   VAR_6 = VAR_4;
   VAR_4 = VAR_4->s_next;
   FUNC_2(VAR_6);
   if (VAR_5 == ((void*)0))
    VAR_2[VAR_3] = VAR_4;
   else
    VAR_5->s_next = VAR_4;
  }
 }
}
