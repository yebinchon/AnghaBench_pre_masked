
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* name; int priv; scalar_t__ evhand; } ;
typedef TYPE_2__ moduledata_t ;
typedef TYPE_3__* module_t ;
struct TYPE_11__ {TYPE_1__* file; } ;
struct TYPE_9__ {int modules; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int VAR_7 ;
 TYPE_3__* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*,void*,int ,int) ;

void
FUNC_9(const void *VAR_8)
{
 const moduledata_t *VAR_9 = (const moduledata_t *)VAR_8;
 int VAR_10;
 module_t VAR_11;

 FUNC_5(&VAR_0);
 VAR_2;
 VAR_11 = FUNC_3(VAR_9->name);
 if (VAR_11 == ((void*)0))
  FUNC_7("module_register_init: module named %s not found\n",
      VAR_9->name);
 VAR_3;
 VAR_10 = FUNC_0(VAR_11, VAR_1);
 if (VAR_10) {
  FUNC_0(VAR_11, VAR_4);
  VAR_5;
  FUNC_4(VAR_11);
  VAR_6;
  FUNC_8("module_register_init: MOD_LOAD (%s, %p, %p) error"
      " %d\n", VAR_9->name, (void *)VAR_9->evhand, VAR_9->priv,
      VAR_10);
 } else {
  VAR_5;
  if (VAR_11->file) {
   FUNC_2(&VAR_11->file->modules, VAR_11, VAR_7);
   FUNC_1(&VAR_11->file->modules, VAR_11, VAR_7);
  }
  VAR_6;
 }
 FUNC_6(&VAR_0);
}
