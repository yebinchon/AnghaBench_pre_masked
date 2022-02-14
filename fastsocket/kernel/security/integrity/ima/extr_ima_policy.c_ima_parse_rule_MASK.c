
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
struct TYPE_3__ {char* from; } ;
typedef TYPE_1__ substring_t ;
struct ima_measure_rule_entry {int uid; scalar_t__ action; unsigned long fsmagic; int flags; int mask; void* func; } ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_0 (struct audit_buffer*) ;
 int FUNC_1 (struct audit_buffer*,char*,int) ;
 struct audit_buffer* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct audit_buffer*,char*,char*) ;
 int FUNC_4 (struct ima_measure_rule_entry*,char*,int ,int ) ;
 int FUNC_5 (char*,int ,TYPE_1__*) ;
 int VAR_30 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,unsigned long*) ;
 char* FUNC_8 (char**,char*) ;

__attribute__((used)) static int FUNC_9(char *VAR_31, struct ima_measure_rule_entry *VAR_32)
{
 struct audit_buffer *VAR_33;
 char *VAR_34;
 int VAR_35 = 0;

 VAR_33 = FUNC_2(((void*)0), VAR_12, VAR_0);

 VAR_32->uid = -1;
 VAR_32->action = VAR_29;
 while ((VAR_34 = FUNC_8(&VAR_31, " \t")) != ((void*)0)) {
  substring_t VAR_36[VAR_23];
  int VAR_37;
  unsigned long VAR_38;

  if (VAR_35 < 0)
   break;
  if ((*VAR_34 == '\0') || (*VAR_34 == ' ') || (*VAR_34 == '\t'))
   continue;
  VAR_37 = FUNC_5(VAR_34, VAR_30, VAR_36);
  switch (VAR_37) {
  case 135:
   FUNC_3(VAR_33, "action", "measure");

   if (VAR_32->action != VAR_29)
    VAR_35 = -VAR_9;

   VAR_32->action = VAR_28;
   break;
  case 140:
   FUNC_3(VAR_33, "action", "dont_measure");

   if (VAR_32->action != VAR_29)
    VAR_35 = -VAR_9;

   VAR_32->action = VAR_8;
   break;
  case 137:
   FUNC_3(VAR_33, "func", VAR_36[0].from);

   if (VAR_32->func)
    VAR_35 = -VAR_9;

   if (FUNC_6(VAR_36[0].from, "FILE_CHECK") == 0)
    VAR_32->func = VAR_10;

   else if (FUNC_6(VAR_36[0].from, "PATH_CHECK") == 0)
    VAR_32->func = VAR_10;
   else if (FUNC_6(VAR_36[0].from, "FILE_MMAP") == 0)
    VAR_32->func = VAR_11;
   else if (FUNC_6(VAR_36[0].from, "BPRM_CHECK") == 0)
    VAR_32->func = VAR_7;
   else
    VAR_35 = -VAR_9;
   if (!VAR_35)
    VAR_32->flags |= VAR_14;
   break;
  case 136:
   FUNC_3(VAR_33, "mask", VAR_36[0].from);

   if (VAR_32->mask)
    VAR_35 = -VAR_9;

   if ((FUNC_6(VAR_36[0].from, "MAY_EXEC")) == 0)
    VAR_32->mask = VAR_25;
   else if (FUNC_6(VAR_36[0].from, "MAY_WRITE") == 0)
    VAR_32->mask = VAR_27;
   else if (FUNC_6(VAR_36[0].from, "MAY_READ") == 0)
    VAR_32->mask = VAR_26;
   else if (FUNC_6(VAR_36[0].from, "MAY_APPEND") == 0)
    VAR_32->mask = VAR_24;
   else
    VAR_35 = -VAR_9;
   if (!VAR_35)
    VAR_32->flags |= VAR_15;
   break;
  case 138:
   FUNC_3(VAR_33, "fsmagic", VAR_36[0].from);

   if (VAR_32->fsmagic) {
    VAR_35 = -VAR_9;
    break;
   }

   VAR_35 = FUNC_7(VAR_36[0].from, 16,
      &VAR_32->fsmagic);
   if (!VAR_35)
    VAR_32->flags |= VAR_13;
   break;
  case 128:
   FUNC_3(VAR_33, "uid", VAR_36[0].from);

   if (VAR_32->uid != -1) {
    VAR_35 = -VAR_9;
    break;
   }

   VAR_35 = FUNC_7(VAR_36[0].from, 10, &VAR_38);
   if (!VAR_35) {
    VAR_32->uid = (uid_t) VAR_38;
    if (VAR_32->uid != VAR_38)
     VAR_35 = -VAR_9;
    else
     VAR_32->flags |= VAR_16;
   }
   break;
  case 132:
   FUNC_3(VAR_33, "obj_user", VAR_36[0].from);
   VAR_35 = FUNC_4(VAR_32, VAR_36[0].from,
         VAR_19,
         VAR_3);
   break;
  case 134:
   FUNC_3(VAR_33, "obj_role", VAR_36[0].from);
   VAR_35 = FUNC_4(VAR_32, VAR_36[0].from,
         VAR_17,
         VAR_1);
   break;
  case 133:
   FUNC_3(VAR_33, "obj_type", VAR_36[0].from);
   VAR_35 = FUNC_4(VAR_32, VAR_36[0].from,
         VAR_18,
         VAR_2);
   break;
  case 129:
   FUNC_3(VAR_33, "subj_user", VAR_36[0].from);
   VAR_35 = FUNC_4(VAR_32, VAR_36[0].from,
         VAR_22,
         VAR_6);
   break;
  case 131:
   FUNC_3(VAR_33, "subj_role", VAR_36[0].from);
   VAR_35 = FUNC_4(VAR_32, VAR_36[0].from,
         VAR_20,
         VAR_4);
   break;
  case 130:
   FUNC_3(VAR_33, "subj_type", VAR_36[0].from);
   VAR_35 = FUNC_4(VAR_32, VAR_36[0].from,
         VAR_21,
         VAR_5);
   break;
  case 139:
   FUNC_3(VAR_33, "UNKNOWN", VAR_34);
   VAR_35 = -VAR_9;
   break;
  }
 }
 if (!VAR_35 && (VAR_32->action == VAR_29))
  VAR_35 = -VAR_9;

 FUNC_1(VAR_33, "res=%d", !VAR_35);
 FUNC_0(VAR_33);
 return VAR_35;
}
