
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_dev {int recov_in_prog; } ;


 int FUNC_0 (struct ecore_dev*,char*,char*) ;

void FUNC_1(struct ecore_dev *VAR_0, bool VAR_1)
{
 if (VAR_0->recov_in_prog != !VAR_1) {
  FUNC_0(VAR_0, "%s access to the device\n",
   VAR_1 ? "Enable" : "Disable");
  VAR_0->recov_in_prog = !VAR_1;
 }
}
