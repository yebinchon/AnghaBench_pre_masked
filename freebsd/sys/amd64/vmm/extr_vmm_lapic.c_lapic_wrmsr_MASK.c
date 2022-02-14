
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ u_int ;
struct vm {int dummy; } ;
struct vlapic {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vlapic*,int ) ;
 int FUNC_1 (struct vlapic*,int ,scalar_t__,int ,int*) ;
 struct vlapic* FUNC_2 (struct vm*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

int
FUNC_4(struct vm *VAR_1, int VAR_2, u_int VAR_3, uint64_t VAR_4, bool *VAR_5)
{
 int VAR_6;
 u_int VAR_7;
 struct vlapic *VAR_8;

 VAR_8 = FUNC_2(VAR_1, VAR_2);

 if (VAR_3 == VAR_0) {
  VAR_6 = FUNC_0(VAR_8, VAR_4);
 } else {
  VAR_7 = FUNC_3(VAR_3);
  VAR_6 = FUNC_1(VAR_8, 0, VAR_7, VAR_4, VAR_5);
 }

 return (VAR_6);
}
