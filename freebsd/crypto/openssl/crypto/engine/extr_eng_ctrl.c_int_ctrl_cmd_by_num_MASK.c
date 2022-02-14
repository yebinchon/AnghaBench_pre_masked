
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int cmd_num; } ;
typedef TYPE_1__ ENGINE_CMD_DEFN ;


 int FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_1(const ENGINE_CMD_DEFN *VAR_0, unsigned int VAR_1)
{
    int VAR_2 = 0;




    while (!FUNC_0(VAR_0) && (VAR_0->cmd_num < VAR_1)) {
        VAR_2++;
        VAR_0++;
    }
    if (VAR_0->cmd_num == VAR_1)
        return VAR_2;

    return -1;
}
