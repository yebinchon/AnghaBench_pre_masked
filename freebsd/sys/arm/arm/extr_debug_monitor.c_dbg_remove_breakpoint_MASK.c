
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct dbg_wb_conf {int type; int slot; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dbg_wb_conf*) ;

__attribute__((used)) static int
FUNC_2(u_int VAR_1)
{
 struct dbg_wb_conf VAR_2;


 if (FUNC_0(VAR_0, VAR_1))
  return (0);

 VAR_2.slot = VAR_1;
 VAR_2.type = VAR_0;

 return (FUNC_1(&VAR_2));
}
