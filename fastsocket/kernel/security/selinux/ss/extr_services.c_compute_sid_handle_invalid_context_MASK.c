
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct context {int dummy; } ;
struct TYPE_4__ {int audit_context; } ;
struct TYPE_3__ {int * p_class_val_to_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,char*,char*,char*,int ) ;
 scalar_t__ FUNC_1 (struct context*,char**,int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(
 struct context *VAR_6,
 struct context *VAR_7,
 u16 VAR_8,
 struct context *VAR_9)
{
 char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 u32 VAR_13, VAR_14, VAR_15;

 if (FUNC_1(VAR_6, &VAR_10, &VAR_13) < 0)
  goto out;
 if (FUNC_1(VAR_7, &VAR_11, &VAR_14) < 0)
  goto out;
 if (FUNC_1(VAR_9, &VAR_12, &VAR_15) < 0)
  goto out;
 FUNC_0(VAR_3->audit_context, VAR_2, VAR_0,
    "security_compute_sid:  invalid context %s"
    " for scontext=%s"
    " tcontext=%s"
    " tclass=%s",
    VAR_12, VAR_10, VAR_11, VAR_4.p_class_val_to_name[VAR_8-1]);
out:
 FUNC_2(VAR_10);
 FUNC_2(VAR_11);
 FUNC_2(VAR_12);
 if (!VAR_5)
  return 0;
 return -VAR_1;
}
