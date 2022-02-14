
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_init {struct adapter* adap; } ;
struct adapter {int mbox; } ;
typedef enum ctxt_type { ____Placeholder_ctxt_type } ctxt_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int *,int,char*) ;
 int FUNC_1 (struct adapter*,int ) ;
 scalar_t__ FUNC_2 (struct cudbg_init*) ;
 int FUNC_3 (struct adapter*,int ,int ,int,int *) ;
 int FUNC_4 (struct adapter*,int ,int,int *) ;

__attribute__((used)) static void FUNC_5(struct cudbg_init *VAR_2, u32 VAR_3,
     enum ctxt_type VAR_4, u32 *VAR_5)
{
 struct adapter *VAR_6 = VAR_2->adap;
 int VAR_7 = -1;

 if (FUNC_2(VAR_2)) {
  VAR_7 = FUNC_0(VAR_6, ((void*)0), VAR_1 | VAR_0,
      "t4cudf");
  if (VAR_7 != 0)
   goto out;
  VAR_7 = FUNC_3(VAR_6, VAR_6->mbox, VAR_3, VAR_4,
        VAR_5);
  FUNC_1(VAR_6, 0);
 }

out:
 if (VAR_7)
  FUNC_4(VAR_6, VAR_3, VAR_4, VAR_5);
}
