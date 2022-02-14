
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_profile {double samples_no; double loss_level; char* name; } ;


 int FUNC_0 (char*,char*,double,double) ;

__attribute__((used)) static void
FUNC_1(struct dn_profile *VAR_0)
{
 double VAR_1;
 if (VAR_0->samples_no <= 0)
  return;

 VAR_1 = VAR_0->loss_level;
 VAR_1 /= VAR_0->samples_no;
 FUNC_0("\t profile: name \"%s\" loss %f samples %d\n",
  VAR_0->name, VAR_1, VAR_0->samples_no);
}
