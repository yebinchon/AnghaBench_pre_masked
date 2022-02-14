
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_func_block {int (* deinit ) (struct module_env*,int ) ;int name; int (* init ) (struct module_env*,int ) ;} ;
struct module_env {int scratch; int scratch_buffer; struct config_file* cfg; } ;
struct config_file {int dummy; } ;
typedef int env ;


 int VAR_0 ;
 int FUNC_0 (struct module_env*) ;
 int FUNC_1 (struct module_env*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct module_env*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct module_env*,int ) ;
 int FUNC_9 (struct module_env*,int ) ;

__attribute__((used)) static void
FUNC_10(struct config_file* VAR_1, struct module_func_block* VAR_2)
{
 struct module_env VAR_3;
 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.cfg = VAR_1;
 VAR_3.scratch = FUNC_4();
 VAR_3.scratch_buffer = FUNC_7(VAR_0);
 if(!VAR_3.scratch || !VAR_3.scratch_buffer)
  FUNC_2("out of memory");
 if(!FUNC_1(&VAR_3))
  FUNC_2("out of memory");
 if(!(*VAR_2->init)(&VAR_3, 0)) {
  FUNC_2("bad config for %s module", VAR_2->name);
 }
 (*VAR_2->deinit)(&VAR_3, 0);
 FUNC_6(VAR_3.scratch_buffer);
 FUNC_5(VAR_3.scratch);
 FUNC_0(&VAR_3);
}
