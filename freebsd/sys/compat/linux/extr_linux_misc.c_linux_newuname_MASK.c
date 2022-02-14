
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utsname ;
struct thread {int td_ucred; } ;
struct linux_newuname_args {int buf; } ;
struct l_new_utsname {char* sysname; char* release; char* version; char* machine; int domainname; int nodename; } ;


 int VAR_0 ;
 int FUNC_0 (struct l_new_utsname*,int) ;
 int FUNC_1 (struct l_new_utsname*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct thread*,char*) ;
 int FUNC_5 (struct thread*,char*) ;
 char* VAR_1 ;
 int FUNC_6 (char*,char*,int) ;
 char* VAR_2 ;

int
FUNC_7(struct thread *VAR_3, struct linux_newuname_args *VAR_4)
{
 struct l_new_utsname VAR_5;
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];
 char *VAR_8;

 FUNC_4(VAR_3, VAR_6);
 FUNC_5(VAR_3, VAR_7);

 FUNC_0(&VAR_5, sizeof(VAR_5));
 FUNC_6(VAR_5.sysname, VAR_6, VAR_0);
 FUNC_3(VAR_3->td_ucred, VAR_5.nodename, VAR_0);
 FUNC_2(VAR_3->td_ucred, VAR_5.domainname, VAR_0);
 FUNC_6(VAR_5.release, VAR_7, VAR_0);
 FUNC_6(VAR_5.version, VAR_2, VAR_0);
 for (VAR_8 = VAR_5.version; *VAR_8 != '\0'; ++VAR_8)
  if (*VAR_8 == '\n') {
   *VAR_8 = '\0';
   break;
  }
 FUNC_6(VAR_5.machine, VAR_1, VAR_0);

 return (FUNC_1(&VAR_5, VAR_4->buf, sizeof(VAR_5)));
}
