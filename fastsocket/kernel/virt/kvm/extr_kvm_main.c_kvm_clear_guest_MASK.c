
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int gpa_t ;
typedef int gfn_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm*,int,int,int) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct kvm *VAR_1, gpa_t VAR_2, unsigned long VAR_3)
{
 gfn_t VAR_4 = VAR_2 >> VAR_0;
 int VAR_5;
 int VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

        while ((VAR_5 = FUNC_1(VAR_3, VAR_6)) != 0) {
  VAR_7 = FUNC_0(VAR_1, VAR_4, VAR_6, VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_6 = 0;
  VAR_3 -= VAR_5;
  ++VAR_4;
 }
 return 0;
}
