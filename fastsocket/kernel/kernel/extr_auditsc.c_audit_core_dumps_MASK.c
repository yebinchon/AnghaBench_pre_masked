
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uid_t ;
typedef long u32 ;
struct audit_buffer {int dummy; } ;
typedef int gid_t ;
struct TYPE_5__ {long pid; int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct audit_buffer*) ;
 int FUNC_3 (struct audit_buffer*,char*,...) ;
 struct audit_buffer* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct audit_buffer*,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*,long) ;
 scalar_t__ FUNC_8 (long,char**,long*) ;
 int FUNC_9 (TYPE_1__*,long*) ;

void FUNC_10(long VAR_5)
{
 struct audit_buffer *VAR_6;
 u32 VAR_7;
 uid_t VAR_8 = FUNC_0(VAR_4), VAR_9;
 gid_t VAR_10;
 unsigned int VAR_11 = FUNC_1(VAR_4);

 if (!VAR_3)
  return;

 if (VAR_5 == VAR_2)
  return;

 VAR_6 = FUNC_4(((void*)0), VAR_1, VAR_0);
 FUNC_6(&VAR_9, &VAR_10);
 FUNC_3(VAR_6, "auid=%u uid=%u gid=%u ses=%u",
    VAR_8, VAR_9, VAR_10, VAR_11);
 FUNC_9(VAR_4, &VAR_7);
 if (VAR_7) {
  char *VAR_12 = ((void*)0);
  u32 VAR_13;

  if (FUNC_8(VAR_7, &VAR_12, &VAR_13))
   FUNC_3(VAR_6, " ssid=%u", VAR_7);
  else {
   FUNC_3(VAR_6, " subj=%s", VAR_12);
   FUNC_7(VAR_12, VAR_13);
  }
 }
 FUNC_3(VAR_6, " pid=%d comm=", VAR_4->pid);
 FUNC_5(VAR_6, VAR_4->comm);
 FUNC_3(VAR_6, " sig=%ld", VAR_5);
 FUNC_2(VAR_6);
}
