
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu {int hostcpu; scalar_t__ state; int vlapic; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct vcpu*) ;

__attribute__((used)) static void
FUNC_4(struct vcpu *VAR_5, bool VAR_6)
{
 int VAR_7;

 VAR_7 = VAR_5->hostcpu;
 if (VAR_5->state == VAR_1) {
  FUNC_0(VAR_7 != VAR_0, ("vcpu running on invalid hostcpu"));
  if (VAR_7 != VAR_3) {
   if (VAR_6) {
    FUNC_2(VAR_5->vlapic, VAR_7,
        VAR_4);
   } else {
    FUNC_1(VAR_7, VAR_4);
   }
  } else {






  }
 } else {
  FUNC_0(VAR_7 == VAR_0, ("vcpu state %d not consistent "
      "with hostcpu %d", VAR_5->state, VAR_7));
  if (VAR_5->state == VAR_2)
   FUNC_3(VAR_5);
 }
}
