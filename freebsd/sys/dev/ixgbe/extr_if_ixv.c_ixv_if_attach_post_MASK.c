
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 struct adapter* FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_0)
{
 struct adapter *VAR_1 = FUNC_2(VAR_0);
 device_t VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;


 VAR_3 = FUNC_6(VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_2, "Interface setup failed: %d\n", VAR_3);
  goto end;
 }


 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

end:
 return VAR_3;
}
