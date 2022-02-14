
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysent {int dummy; } ;
struct syscall_module_data {int (* chainevh ) (struct module*,int,int ) ;int chainarg; int old_sysent; int * offset; int flags; int new_sysent; } ;
struct module {int dummy; } ;
struct TYPE_3__ {int intval; } ;
typedef TYPE_1__ modspecific_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysent*,int ,int *) ;
 int FUNC_1 (struct sysent*,int *,int ,int *,int ) ;
 int FUNC_2 (struct module*,TYPE_1__*) ;
 int FUNC_3 (struct module*,int,int ) ;
 int FUNC_4 (struct module*,int,int ) ;
 int FUNC_5 (struct module*,int,int ) ;

int
FUNC_6(struct sysent *VAR_3, struct module *VAR_4,
    int VAR_5, void *VAR_6)
{
 struct syscall_module_data *VAR_7 = VAR_6;
 modspecific_t VAR_8;
 int VAR_9;

 switch (VAR_5) {
 case 129:
  VAR_9 = FUNC_1(VAR_3, VAR_7->offset,
      VAR_7->new_sysent, &VAR_7->old_sysent, VAR_7->flags);
  if (VAR_9) {

   VAR_7->offset = ((void*)0);
   return (VAR_9);
  }
  VAR_8.intval = *VAR_7->offset;
  VAR_1;
  FUNC_2(VAR_4, &VAR_8);
  VAR_2;
  if (VAR_7->chainevh)
   VAR_9 = VAR_7->chainevh(VAR_4, VAR_5, VAR_7->chainarg);
  return (VAR_9);
 case 128:





  if (VAR_7->offset == ((void*)0))
   return (0);
  if (VAR_7->chainevh) {
   VAR_9 = VAR_7->chainevh(VAR_4, VAR_5, VAR_7->chainarg);
   if (VAR_9)
    return VAR_9;
  }
  VAR_9 = FUNC_0(VAR_3, *VAR_7->offset,
      &VAR_7->old_sysent);
  return (VAR_9);
 default:
  if (VAR_7->chainevh)
   return (VAR_7->chainevh(VAR_4, VAR_5, VAR_7->chainarg));
  return (VAR_0);
 }


}
