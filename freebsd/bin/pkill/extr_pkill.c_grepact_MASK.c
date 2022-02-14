
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int dummy; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct kinfo_proc const*) ;

__attribute__((used)) static int
FUNC_2(const struct kinfo_proc *VAR_2)
{
 static bool VAR_3 = 1;

 if (!VAR_1 && !VAR_3)
  FUNC_0("%s", VAR_0);
 FUNC_1(VAR_2);
 VAR_3 = 0;
 return (1);
}
