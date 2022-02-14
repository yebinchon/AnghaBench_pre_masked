
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct utsname {char* nodename; char* sysname; char* release; } ;
struct TYPE_4__ {size_t len; scalar_t__* subs; } ;
struct TYPE_3__ {TYPE_2__ object_id; int * descr; int * name; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (size_t) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (int *,char*,char*,char*,char*,char*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char**,char*) ;
 scalar_t__ FUNC_7 (char*,char**,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_8 (struct utsname*) ;

int
FUNC_9(void)
{
 struct utsname VAR_4;
 char *VAR_5;
 size_t VAR_6;





 if (FUNC_8(&VAR_4) == -1)
  return (-1);

 if ((VAR_3.name = FUNC_4(VAR_4.nodename)) == ((void*)0))
  return (-1);

 if ((VAR_5 = FUNC_0(VAR_1)) == ((void*)0))
  return (-1);

 VAR_6 = FUNC_5(VAR_4.nodename) + 1;
 VAR_6 += FUNC_5(VAR_5) + 1;
 VAR_6 += FUNC_5(VAR_4.sysname) + 1;
 VAR_6 += FUNC_5(VAR_4.release) + 1;

 if ((VAR_3.descr = FUNC_2(VAR_6)) == ((void*)0)) {
  FUNC_1(VAR_5);
  return (-1);
 }
 FUNC_3(VAR_3.descr, "%s %s %s %s", VAR_4.nodename, VAR_5, VAR_4.sysname,
     VAR_4.release);
 FUNC_1(VAR_5);

 return (0);
}
