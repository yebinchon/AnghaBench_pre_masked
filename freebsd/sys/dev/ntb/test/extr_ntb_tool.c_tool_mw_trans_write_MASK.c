
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tool_mw {size_t size; int widx; int pidx; struct tool_ctx* tc; } ;
struct tool_ctx {int dummy; } ;
struct sysctl_req {int dummy; } ;
struct sysctl_oid {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tool_ctx*,int ,int ) ;
 int FUNC_1 (struct tool_ctx*,int ,int ,size_t) ;

__attribute__((used)) static int
FUNC_2(struct sysctl_oid *VAR_1, struct sysctl_req *VAR_2,
    struct tool_mw *VAR_3, size_t VAR_4)
{
 struct tool_ctx *VAR_5 = VAR_3->tc;
 int VAR_6 = 0;

 if (VAR_4 == 0)
  return (VAR_0);


 if (VAR_3->size == VAR_4)
  return (0);


 if (VAR_3->size)
  FUNC_0(VAR_5, VAR_3->pidx, VAR_3->widx);

 VAR_6 = FUNC_1(VAR_5, VAR_3->pidx, VAR_3->widx, VAR_4);

 return (VAR_6);
}
