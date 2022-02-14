
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nsproxy {int dummy; } ;
struct ctl_table {int mode; scalar_t__ proc_handler; scalar_t__ strategy; struct ctl_table* child; scalar_t__ procname; scalar_t__ ctl_name; scalar_t__ maxlen; scalar_t__ data; scalar_t__ extra2; scalar_t__ extra1; TYPE_1__* parent; } ;
struct TYPE_2__ {int ctl_name; int procname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char const**,struct ctl_table*,char*) ;
 int FUNC_1 (struct ctl_table*,char const**) ;
 scalar_t__ FUNC_2 (struct nsproxy*,struct ctl_table*) ;
 int FUNC_3 (struct nsproxy*,struct ctl_table*,char const**) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (struct ctl_table*) ;
 scalar_t__ VAR_15 ;

int FUNC_5(struct nsproxy *VAR_16, struct ctl_table *VAR_17)
{
 int VAR_18 = 0;
 for (; VAR_17->ctl_name || VAR_17->procname; VAR_17++) {
  const char *VAR_19 = ((void*)0);

  FUNC_4(VAR_17);
  if (VAR_17->parent) {
   if (VAR_17->procname && !VAR_17->parent->procname)
    FUNC_0(&VAR_19, VAR_17, "Parent without procname");
   if (VAR_17->ctl_name && !VAR_17->parent->ctl_name)
    FUNC_0(&VAR_19, VAR_17, "Parent without ctl_name");
  }
  if (!VAR_17->procname)
   FUNC_0(&VAR_19, VAR_17, "No procname");
  if (VAR_17->child) {
   if (VAR_17->data)
    FUNC_0(&VAR_19, VAR_17, "Directory with data?");
   if (VAR_17->maxlen)
    FUNC_0(&VAR_19, VAR_17, "Directory with maxlen?");
   if ((VAR_17->mode & (VAR_1|VAR_2)) != VAR_17->mode)
    FUNC_0(&VAR_19, VAR_17, "Writable sysctl directory");
   if (VAR_17->proc_handler)
    FUNC_0(&VAR_19, VAR_17, "Directory with proc_handler");
   if (VAR_17->strategy)
    FUNC_0(&VAR_19, VAR_17, "Directory with strategy");
   if (VAR_17->extra1)
    FUNC_0(&VAR_19, VAR_17, "Directory with extra1");
   if (VAR_17->extra2)
    FUNC_0(&VAR_19, VAR_17, "Directory with extra2");
   if (FUNC_2(VAR_16, VAR_17))
    FUNC_0(&VAR_19, VAR_17, "Inconsistent directory names");
  } else {
   if ((VAR_17->strategy == VAR_11) ||
       (VAR_17->strategy == VAR_15) ||
       (VAR_17->strategy == VAR_12) ||
       (VAR_17->strategy == VAR_13) ||
       (VAR_17->strategy == VAR_14) ||
       (VAR_17->proc_handler == VAR_8) ||
       (VAR_17->proc_handler == VAR_3) ||
       (VAR_17->proc_handler == VAR_5) ||
       (VAR_17->proc_handler == VAR_4) ||
       (VAR_17->proc_handler == VAR_7) ||
       (VAR_17->proc_handler == VAR_6) ||
       (VAR_17->proc_handler == VAR_9) ||
       (VAR_17->proc_handler == VAR_10)) {
    if (!VAR_17->data)
     FUNC_0(&VAR_19, VAR_17, "No data");
    if (!VAR_17->maxlen)
     FUNC_0(&VAR_19, VAR_17, "No maxlen");
   }
   FUNC_3(VAR_16, VAR_17, &VAR_19);
  }
  FUNC_1(VAR_17, &VAR_19);
  if (VAR_17->mode > 0777)
   FUNC_0(&VAR_19, VAR_17, "bogus .mode");
  if (VAR_19) {
   FUNC_0(&VAR_19, VAR_17, ((void*)0));
   VAR_18 = -VAR_0;
  }
  if (VAR_17->child)
   VAR_18 |= FUNC_5(VAR_16, VAR_17->child);
 }
 return VAR_18;
}
