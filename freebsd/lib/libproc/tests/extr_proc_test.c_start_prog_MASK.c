
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_handle {int dummy; } ;
struct atf_tc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,char*,int ) ;
 int FUNC_2 (char**,char*,int ,int ) ;
 int FUNC_3 (struct atf_tc const*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char**,int *,int *,int *,struct proc_handle**) ;
 char* FUNC_6 (char*) ;
 int VAR_0 ;

__attribute__((used)) static struct proc_handle *
FUNC_7(const struct atf_tc *VAR_1, bool VAR_2)
{
 char *VAR_3[3];
 struct proc_handle *VAR_4;
 int VAR_5;

 FUNC_2(&VAR_3[0], "%d/%d", FUNC_3(VAR_1, "srcdir"),
     VAR_0);
 FUNC_0(VAR_3[0] != ((void*)0));

 if (VAR_2) {
  VAR_3[1] = FUNC_6("-s");
  VAR_3[2] = ((void*)0);
 } else {
  VAR_3[1] = ((void*)0);
 }

 VAR_5 = FUNC_5(VAR_3[0], VAR_3, ((void*)0), ((void*)0), ((void*)0), &VAR_4);
 FUNC_1(VAR_5, 0, "failed to run '%s'", VAR_0);
 FUNC_0(VAR_4 != ((void*)0));

 FUNC_4(VAR_3[0]);
 FUNC_4(VAR_3[1]);

 return (VAR_4);
}
