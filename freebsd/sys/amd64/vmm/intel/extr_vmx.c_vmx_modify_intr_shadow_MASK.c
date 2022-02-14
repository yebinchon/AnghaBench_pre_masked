
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vmx {int vm; struct vmcs* vmcs; } ;
struct vmcs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,char*,scalar_t__,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vmcs*,int,int,scalar_t__*) ;
 int FUNC_3 (struct vmcs*,int,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct vmx *VAR_3, int VAR_4, int VAR_5, uint64_t VAR_6)
{
 struct vmcs *VAR_7;
 uint64_t VAR_8;
 int VAR_9, VAR_10;




 if (VAR_6) {
  VAR_9 = VAR_0;
  goto done;
 }

 VAR_7 = &VAR_3->vmcs[VAR_4];
 VAR_10 = FUNC_1(VAR_2);
 VAR_9 = FUNC_2(VAR_7, VAR_5, VAR_10, &VAR_8);
 if (VAR_9 == 0) {
  VAR_8 &= ~VAR_1;
  VAR_9 = FUNC_3(VAR_7, VAR_5, VAR_10, VAR_8);
 }
done:
 FUNC_0(VAR_3->vm, VAR_4, "Setting intr_shadow to %#lx %s", VAR_6,
     VAR_9 ? "failed" : "succeeded");
 return (VAR_9);
}
