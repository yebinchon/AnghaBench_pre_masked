
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct tool_ctx {int dev; } ;


 int FUNC_0 (int ,char*,int ,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, uint32_t VAR_1)
{
 struct tool_ctx *VAR_2 = VAR_0;
 uint64_t VAR_3, VAR_4;

 VAR_4 = FUNC_2(VAR_2->dev, VAR_1);
 VAR_3 = FUNC_1(VAR_2->dev);

 FUNC_0(VAR_2->dev, "doorbell vec %d mask %#llx bits %#llx\n",
     VAR_1, (unsigned long long)VAR_4, (unsigned long long)VAR_3);
}
