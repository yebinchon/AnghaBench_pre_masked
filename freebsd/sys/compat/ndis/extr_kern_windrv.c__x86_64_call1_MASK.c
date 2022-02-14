
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct fpu_cc_ent {int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct fpu_cc_ent*) ;
 struct fpu_cc_ent* FUNC_3 () ;
 int FUNC_4 (void*,int ) ;

uint64_t
FUNC_5(void *VAR_3, uint64_t VAR_4)
{
 struct fpu_cc_ent *VAR_5;
 uint64_t VAR_6;

 if ((VAR_5 = FUNC_3()) == ((void*)0))
  return (VAR_0);
 FUNC_0(VAR_2, VAR_5->ctx, VAR_1);
 VAR_6 = FUNC_4(VAR_3, VAR_4);
 FUNC_1(VAR_2, VAR_5->ctx);
 FUNC_2(VAR_5);

 return (VAR_6);
}
