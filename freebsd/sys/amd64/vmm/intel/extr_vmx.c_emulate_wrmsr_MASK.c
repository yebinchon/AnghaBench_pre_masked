
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
struct vmx {int vm; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int ,int*) ;
 int FUNC_2 (struct vmx*,int,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_3(struct vmx *VAR_0, int VAR_1, u_int VAR_2, uint64_t VAR_3, bool *VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_2))
  VAR_5 = FUNC_1(VAR_0->vm, VAR_1, VAR_2, VAR_3, VAR_4);
 else
  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return (VAR_5);
}
