
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tool_ctx {int dev; } ;
typedef int device_t ;


 struct tool_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct tool_ctx*) ;
 int FUNC_3 (struct tool_ctx*) ;
 int FUNC_4 (struct tool_ctx*) ;
 int FUNC_5 (struct tool_ctx*) ;
 int FUNC_6 (struct tool_ctx*) ;
 int FUNC_7 (struct tool_ctx*) ;
 int FUNC_8 (struct tool_ctx*) ;
 int FUNC_9 (struct tool_ctx*) ;
 int FUNC_10 (struct tool_ctx*) ;
 int FUNC_11 (struct tool_ctx*) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_0)
{
 struct tool_ctx *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0;

 VAR_1->dev = VAR_0;
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_9(VAR_1);
 if (VAR_2)
  goto err_clear_data;

 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2)
  goto err_clear_data;

 VAR_2 = FUNC_10(VAR_1);
 if (VAR_2)
  goto err_clear_mws;

 VAR_2 = FUNC_8(VAR_1);
 if (VAR_2)
  goto err_clear_spads;

 FUNC_11(VAR_1);

 return (0);

err_clear_spads:
 FUNC_6(VAR_1);
err_clear_mws:
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
err_clear_data:
 FUNC_3(VAR_1);
out:
 FUNC_1(VAR_0, "ntb_tool attached failed with err=(%d).\n", VAR_2);
 return (VAR_2);
}
