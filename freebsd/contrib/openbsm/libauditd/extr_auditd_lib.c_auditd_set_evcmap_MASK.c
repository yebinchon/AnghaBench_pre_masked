
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int evn_map ;
typedef int evc_map ;
struct TYPE_8__ {int en_number; int en_name; } ;
typedef TYPE_1__ au_evname_map_t ;
struct TYPE_9__ {char* ae_name; char* ae_desc; int ae_class; int ae_number; } ;
typedef TYPE_2__ au_event_ent_t ;
struct TYPE_10__ {int ec_class; int ec_number; } ;
typedef TYPE_3__ au_evclass_map_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,int) ;

int
FUNC_8(void)
{
 au_event_ent_t VAR_3, *VAR_4;
 au_evclass_map_t VAR_5;
 au_evname_map_t VAR_6;
 int VAR_7 = 0;







 VAR_3.ae_name = (char *)FUNC_5(VAR_2);
 VAR_3.ae_desc = (char *)FUNC_5(VAR_1);
 if (VAR_3.ae_name == ((void*)0) || VAR_3.ae_desc == ((void*)0)) {
  if (VAR_3.ae_name != ((void*)0))
   FUNC_3(VAR_3.ae_name);
  return (VAR_0);
 }





 VAR_4 = &VAR_3;
 FUNC_6();
 while ((VAR_4 = FUNC_4(VAR_4)) != ((void*)0)) {





  if (FUNC_7(VAR_6.en_name, VAR_4->ae_name,
      sizeof(VAR_6.en_name)) < sizeof(VAR_6.en_name)) {
   VAR_6.en_number = VAR_4->ae_number;
   (void)FUNC_1(&VAR_6, sizeof(VAR_6));
  }




  VAR_5.ec_number = VAR_4->ae_number;
  VAR_5.ec_class = VAR_4->ae_class;
  if (FUNC_0(&VAR_5, sizeof(VAR_5)) == 0)
   VAR_7++;
 }
 FUNC_2();
 FUNC_3(VAR_3.ae_name);
 FUNC_3(VAR_3.ae_desc);

 return (VAR_7);
}
