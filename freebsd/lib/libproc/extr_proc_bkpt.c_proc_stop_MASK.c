
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_handle {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct proc_handle*) ;
 int FUNC_5 (int ,int*,int ) ;

__attribute__((used)) static int
FUNC_6(struct proc_handle *VAR_2)
{
 int VAR_3;

 if (FUNC_3(FUNC_4(VAR_2), VAR_0) == -1) {
  FUNC_0("kill %d", FUNC_4(VAR_2));
  return (-1);
 } else if (FUNC_5(FUNC_4(VAR_2), &VAR_3, VAR_1) == -1) {
  FUNC_0("waitpid %d", FUNC_4(VAR_2));
  return (-1);
 } else if (!FUNC_2(VAR_3)) {
  FUNC_1("waitpid: unexpected status 0x%x", VAR_3);
  return (-1);
 }

 return (0);
}
