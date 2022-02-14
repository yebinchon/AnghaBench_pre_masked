
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int u32 ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct audit_buffer*) ;
 int FUNC_1 (struct audit_buffer*,char*,...) ;
 struct audit_buffer* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,char**,int*) ;

__attribute__((used)) static int FUNC_5(char *VAR_2, int VAR_3, int VAR_4,
       uid_t VAR_5, u32 VAR_6, u32 VAR_7,
       int VAR_8)
{
 struct audit_buffer *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_2(((void*)0), VAR_1, VAR_0);
 FUNC_1(VAR_9, "%s=%d old=%d auid=%u ses=%u", VAR_2, VAR_3,
    VAR_4, VAR_5, VAR_6);
 if (VAR_7) {
  char *VAR_11 = ((void*)0);
  u32 VAR_12;

  VAR_10 = FUNC_4(VAR_7, &VAR_11, &VAR_12);
  if (VAR_10) {
   FUNC_1(VAR_9, " sid=%u", VAR_7);
   VAR_8 = 0;
  } else {
   FUNC_1(VAR_9, " subj=%s", VAR_11);
   FUNC_3(VAR_11, VAR_12);
  }
 }
 FUNC_1(VAR_9, " res=%d", VAR_8);
 FUNC_0(VAR_9);
 return VAR_10;
}
