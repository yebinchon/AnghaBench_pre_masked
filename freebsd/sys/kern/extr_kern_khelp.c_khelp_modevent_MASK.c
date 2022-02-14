
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct khelp_modevent_data {char* name; TYPE_1__* helper; int nhooks; int hooks; int umadtor; int umactor; int uma_zsize; } ;
typedef int module_t ;
struct TYPE_3__ {int h_flags; int (* mod_init ) () ;int h_refcount; int (* mod_destroy ) () ;int * h_zone; int h_nhooks; int h_hooks; int h_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int * FUNC_6 (char*,int ,int ,int ,int *,int *,int ,int ) ;
 int FUNC_7 (int *) ;

int
FUNC_8(module_t VAR_7, int VAR_8, void *VAR_9)
{
 struct khelp_modevent_data *VAR_10;
 int VAR_11;

 VAR_10 = (struct khelp_modevent_data *)VAR_9;
 VAR_11 = 0;

 switch(VAR_8) {
 case 131:
  if (VAR_10->helper->h_flags & VAR_6) {
   if (VAR_10->uma_zsize <= 0) {
    FUNC_2("Use KHELP_DECLARE_MOD_UMA() instead!\n");
    VAR_11 = VAR_1;
    break;
   }
   VAR_10->helper->h_zone = FUNC_6(VAR_10->name,
       VAR_10->uma_zsize, VAR_10->umactor, VAR_10->umadtor, ((void*)0),
       ((void*)0), 0, 0);
   if (VAR_10->helper->h_zone == ((void*)0)) {
    VAR_11 = VAR_4;
    break;
   }
  }
  FUNC_3(VAR_10->helper->h_name, VAR_10->name, VAR_5);
  VAR_10->helper->h_hooks = VAR_10->hooks;
  VAR_10->helper->h_nhooks = VAR_10->nhooks;
  if (VAR_10->helper->mod_init != ((void*)0))
   VAR_11 = VAR_10->helper->mod_init();
  if (!VAR_11)
   VAR_11 = FUNC_1(VAR_10->helper);
  break;

 case 130:
 case 129:
 case 128:
  VAR_11 = FUNC_0(VAR_10->helper);
  if (!VAR_11) {
   if (VAR_10->helper->h_flags & VAR_6)
    FUNC_7(VAR_10->helper->h_zone);
   if (VAR_10->helper->mod_destroy != ((void*)0))
    VAR_10->helper->mod_destroy();
  } else if (VAR_11 == VAR_3)

   VAR_11 = 0;
  else if (VAR_11 == VAR_0)
   FUNC_2("Khelp module \"%s\" can't unload until its "
       "refcount drops from %d to 0.\n", VAR_10->name,
       VAR_10->helper->h_refcount);
  break;

 default:
  VAR_11 = VAR_2;
  break;
 }

 return (VAR_11);
}
