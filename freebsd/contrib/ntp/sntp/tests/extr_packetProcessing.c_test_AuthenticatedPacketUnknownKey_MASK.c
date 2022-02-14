
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * exten; } ;
struct TYPE_6__ {TYPE_3__ p; } ;
struct TYPE_5__ {int p; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,char*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_3__*,int,scalar_t__,int ,int *) ;
 int FUNC_6 (TYPE_3__*,int *,int,int ,int *,char*) ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;

void
FUNC_7(void)
{

 FUNC_1(30, 9, "123456789");
 FUNC_3(FUNC_0(VAR_0));




 int VAR_10 = VAR_2;

 VAR_7.p.exten[0] = FUNC_4(50);
 int VAR_11 = FUNC_5(&VAR_7.p, VAR_10,
          VAR_3 - VAR_1, VAR_6,
          &VAR_7.p.exten[1]);
 VAR_10 += VAR_1 + VAR_11;

 FUNC_2(VAR_5,
     FUNC_6(&VAR_7.p, &VAR_8, VAR_10,
          VAR_4, &VAR_9.p, "UnitTest"));
}
