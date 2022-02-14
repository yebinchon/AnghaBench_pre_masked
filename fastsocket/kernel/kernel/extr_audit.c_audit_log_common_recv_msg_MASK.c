
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef char* u32 ;
typedef int u16 ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct audit_buffer*,char*,char*,...) ;
 struct audit_buffer* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char**,char**) ;

__attribute__((used)) static int FUNC_4(struct audit_buffer **VAR_2, u16 VAR_3,
         u32 VAR_4, u32 VAR_5, uid_t VAR_6, u32 VAR_7,
         u32 VAR_8)
{
 int VAR_9 = 0;
 char *VAR_10 = ((void*)0);
 u32 VAR_11;

 if (!VAR_1) {
  *VAR_2 = ((void*)0);
  return VAR_9;
 }

 *VAR_2 = FUNC_1(((void*)0), VAR_0, VAR_3);
 FUNC_0(*VAR_2, "user pid=%d uid=%u auid=%u ses=%u",
    VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8) {
  VAR_9 = FUNC_3(VAR_8, &VAR_10, &VAR_11);
  if (VAR_9)
   FUNC_0(*VAR_2, " ssid=%u", VAR_8);
  else {
   FUNC_0(*VAR_2, " subj=%s", VAR_10);
   FUNC_2(VAR_10, VAR_11);
  }
 }

 return VAR_9;
}
