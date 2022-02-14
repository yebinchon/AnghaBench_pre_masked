
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wtap_plugin {int dummy; } ;
struct wtap_hal {int dummy; } ;
struct TYPE_2__ {int work; int deinit; int init; struct wtap_hal* wp_hal; } ;
struct visibility_plugin {TYPE_1__ base; } ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wtap_hal*,int) ;
 int FUNC_1 (struct wtap_hal*) ;
 int FUNC_2 (struct wtap_hal*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wtap_hal*,int ) ;
 struct wtap_hal* VAR_7 ;
 int FUNC_5 (struct wtap_hal*) ;
 int FUNC_6 (int *,int ,int ,int ,int,char const*) ;
 scalar_t__ FUNC_7 (int,int ,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct wtap_hal*,struct wtap_plugin*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_10(module_t VAR_13, int VAR_14, void *VAR_15)
{
 struct visibility_plugin *VAR_16;
 int VAR_17 = 0;

 switch (VAR_14) {
 case 129:
  VAR_8 = FUNC_6(&VAR_12,0,VAR_6,
      VAR_1,0600,(const char *)"wtapctl");
  VAR_7 = (struct wtap_hal *)FUNC_7(sizeof(struct wtap_hal),
      VAR_3, VAR_2 | VAR_5);
  FUNC_0(VAR_7, sizeof(struct wtap_hal));

  FUNC_5(VAR_7);


  VAR_16 = (struct visibility_plugin *)FUNC_7
      (sizeof(struct visibility_plugin), VAR_4,
      VAR_2 | VAR_5);
  VAR_16->base.wp_hal = VAR_7;
  VAR_16->base.init = VAR_10;
  VAR_16->base.deinit = VAR_9;
  VAR_16->base.work = VAR_11;
  FUNC_9(VAR_7, (struct wtap_plugin *)VAR_16);

                FUNC_8("Loaded wtap wireless simulator\n");
                break;
 case 128:
  FUNC_3(VAR_8);
  FUNC_2(VAR_7);
  FUNC_1(VAR_7);
  FUNC_4(VAR_7, VAR_3);
  FUNC_8("Unloading wtap wireless simulator\n");
  break;
 default:
  VAR_17 = VAR_0;
  break;
 }

 return(VAR_17);
}
