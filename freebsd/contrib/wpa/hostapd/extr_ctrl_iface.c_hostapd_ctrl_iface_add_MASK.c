
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hapd_interfaces {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hapd_interfaces*,char*) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct hapd_interfaces *VAR_1,
      char *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2) < 0) {
  FUNC_1(VAR_0, "Adding interface %s failed", VAR_2);
  return -1;
 }
 return 0;
}
