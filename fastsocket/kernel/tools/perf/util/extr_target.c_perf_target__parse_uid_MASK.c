
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_target {char* uid_str; int uid; } ;
struct passwd {int pw_uid; } ;
typedef enum perf_target_errno { ____Placeholder_perf_target_errno } perf_target_errno ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,struct passwd*,char*,int,struct passwd**) ;
 int FUNC_1 (int,struct passwd*,char*,int,struct passwd**) ;
 int FUNC_2 (char const*,char**,int) ;

enum perf_target_errno FUNC_3(struct perf_target *VAR_4)
{
 struct passwd VAR_5, *VAR_6;
 char VAR_7[1024];
 const char *VAR_8 = VAR_4->uid_str;

 VAR_4->uid = VAR_3;
 if (VAR_8 == ((void*)0))
  return VAR_1;


 FUNC_0(VAR_8, &VAR_5, VAR_7, sizeof(VAR_7), &VAR_6);

 if (VAR_6 == ((void*)0)) {



  char *VAR_9;
  int VAR_10 = FUNC_2(VAR_8, &VAR_9, 10);

  if (*VAR_9 != '\0')
   return VAR_0;

  FUNC_1(VAR_10, &VAR_5, VAR_7, sizeof(VAR_7), &VAR_6);

  if (VAR_6 == ((void*)0))
   return VAR_2;
 }

 VAR_4->uid = VAR_6->pw_uid;
 return VAR_1;
}
