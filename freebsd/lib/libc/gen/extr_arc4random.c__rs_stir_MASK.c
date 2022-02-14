
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int rnd ;
struct TYPE_4__ {int rs_count; scalar_t__ rs_have; } ;
struct TYPE_3__ {int rs_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ,int) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_6(void)
{
 u_char VAR_4[VAR_1 + VAR_0];

 if (FUNC_4(VAR_4, sizeof VAR_4) == -1)
  FUNC_0();

 if (!VAR_2)
  FUNC_1(VAR_4, sizeof(VAR_4));
 else
  FUNC_2(VAR_4, sizeof(VAR_4));
 FUNC_3(VAR_4, sizeof(VAR_4));


 VAR_2->rs_have = 0;
 FUNC_5(VAR_3->rs_buf, 0, sizeof(VAR_3->rs_buf));

 VAR_2->rs_count = 1600000;
}
