
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icl_module {struct icl_module* im_name; } ;
struct TYPE_2__ {int sc_lock; int sc_modules; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct icl_module*,int ) ;
 int FUNC_3 (struct icl_module*,int ) ;
 struct icl_module* FUNC_4 (char const*,int,int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(const char *VAR_4, bool VAR_5)
{
 struct icl_module *VAR_6;

 FUNC_5(&VAR_3->sc_lock);
 VAR_6 = FUNC_4(VAR_4, VAR_5, 1);
 if (VAR_6 == ((void*)0)) {
  FUNC_1("offload \"%s\" not registered", VAR_4);
  FUNC_6(&VAR_3->sc_lock);
  return (VAR_0);
 }

 FUNC_2(&VAR_3->sc_modules, VAR_6, VAR_2);
 FUNC_6(&VAR_3->sc_lock);

 FUNC_3(VAR_6->im_name, VAR_1);
 FUNC_3(VAR_6, VAR_1);

 FUNC_0("offload \"%s\" unregistered", VAR_4);
 return (0);
}
