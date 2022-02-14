
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pstore_info {int name; int read_mutex; struct module* owner; } ;
struct module {int dummy; } ;
struct TYPE_3__ {scalar_t__ expires; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 struct pstore_info* VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (struct module*) ;

int FUNC_10(struct pstore_info *VAR_10)
{
 struct module *VAR_11 = VAR_10->owner;

 if (VAR_4 && FUNC_8(VAR_4, VAR_10->name))
  return -VAR_2;

 FUNC_6(&VAR_8);
 if (VAR_6) {
  FUNC_7(&VAR_8);
  return -VAR_0;
 }

 VAR_6 = VAR_10;
 FUNC_2(&VAR_6->read_mutex);
 FUNC_7(&VAR_8);

 if (VAR_11 && !FUNC_9(VAR_11)) {
  VAR_6 = ((void*)0);
  return -VAR_1;
 }

 if (FUNC_5())
  FUNC_4(0);

 FUNC_1(&VAR_7);

 VAR_9.expires = VAR_5 + VAR_3;
 FUNC_0(&VAR_9);

 FUNC_3("pstore: Registered %s as persistent store backend\n",
  VAR_10->name);

 return 0;
}
