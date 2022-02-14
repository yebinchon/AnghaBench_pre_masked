
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct vmxctx {int dummy; } ;
struct vmx {struct vmxctx* ctx; int vm; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int*,int*) ;
 int FUNC_3 (struct vmx*,int,int ,int*,int*) ;
 int FUNC_4 (struct vmxctx*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct vmx *VAR_2, int VAR_3, u_int VAR_4, bool *VAR_5)
{
 struct vmxctx *VAR_6;
 uint64_t VAR_7;
 uint32_t VAR_8, VAR_9;
 int VAR_10;

 if (FUNC_1(VAR_4))
  VAR_10 = FUNC_2(VAR_2->vm, VAR_3, VAR_4, &VAR_7, VAR_5);
 else
  VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_7, VAR_5);

 if (VAR_10 == 0) {
  VAR_8 = VAR_7;
  VAR_6 = &VAR_2->ctx[VAR_3];
  VAR_10 = FUNC_4(VAR_6, VAR_0, VAR_8);
  FUNC_0(VAR_10 == 0, ("vmxctx_setreg(rax) error %d", VAR_10));

  VAR_9 = VAR_7 >> 32;
  VAR_10 = FUNC_4(VAR_6, VAR_1, VAR_9);
  FUNC_0(VAR_10 == 0, ("vmxctx_setreg(rdx) error %d", VAR_10));
 }

 return (VAR_10);
}
