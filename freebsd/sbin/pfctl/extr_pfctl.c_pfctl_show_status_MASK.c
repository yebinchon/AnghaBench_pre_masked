
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_status {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,struct pf_status*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pf_status*,int) ;
 int FUNC_3 (char*) ;

int
FUNC_4(int VAR_2, int VAR_3)
{
 struct pf_status VAR_4;

 if (FUNC_0(VAR_2, VAR_0, &VAR_4)) {
  FUNC_3("DIOCGETSTATUS");
  return (-1);
 }
 if (VAR_3 & VAR_1)
  FUNC_1("INFO:");
 FUNC_2(&VAR_4, VAR_3);
 return (0);
}
