
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int ai_port_space; } ;
struct TYPE_8__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_4__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int *,TYPE_1__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_7, VAR_8;

 VAR_6 = FUNC_0(sizeof *VAR_6, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4("creating id\n");
 FUNC_8(VAR_1);
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  FUNC_7(&VAR_6[VAR_8], VAR_1);
  if (VAR_4) {
   VAR_7 = FUNC_5(VAR_2, &VAR_6[VAR_8].id, &VAR_6[VAR_8],
          VAR_5.ai_port_space);
   if (VAR_7)
    goto err;
  }
  FUNC_1(&VAR_6[VAR_8], VAR_1);
 }
 FUNC_2(VAR_1);
 return 0;

err:
 while (--VAR_8 >= 0)
  FUNC_6(VAR_6[VAR_8].id);
 FUNC_3(VAR_6);
 return VAR_7;
}
