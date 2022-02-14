
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_status {int running; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,struct pf_status*) ;
 int FUNC_1 (struct pf_status*) ;
 int FUNC_2 (char*) ;

int
FUNC_3(int VAR_1)
{
 struct pf_status VAR_2;

 if (FUNC_0(VAR_1, VAR_0, &VAR_2)) {
  FUNC_2("DIOCGETSTATUS");
  return (-1);
 }

 FUNC_1(&VAR_2);
 return (!VAR_2.running);
}
