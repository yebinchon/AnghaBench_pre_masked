
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


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void
FUNC_8(void)
{
 u_char VAR_7[VAR_2 + VAR_1];

 if (FUNC_5(VAR_7, sizeof VAR_7) == -1) {
  if(VAR_4 != VAR_0 ||
   FUNC_4(VAR_7, sizeof VAR_7) == -1) {



   FUNC_2(9);

  }
 }

 if (!VAR_5)
  FUNC_0(VAR_7, sizeof(VAR_7));
 else
  FUNC_1(VAR_7, sizeof(VAR_7));
 FUNC_3(VAR_7, sizeof(VAR_7));


 VAR_5->rs_have = 0;
 FUNC_6(VAR_6->rs_buf, 0, sizeof(VAR_6->rs_buf));

 VAR_5->rs_count = 1600000;
}
