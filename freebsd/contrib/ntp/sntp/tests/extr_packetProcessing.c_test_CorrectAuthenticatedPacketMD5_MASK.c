
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
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*,int,scalar_t__,int ,int *) ;
 int FUNC_6 (TYPE_3__*,int *,int,int ,int *,char*) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;

void
FUNC_7(void)
{
 FUNC_1(10, 15, "123456789abcdef");
 FUNC_3(FUNC_0(VAR_0));

 int VAR_9 = VAR_2;


 VAR_6.p.exten[0] = FUNC_4(10);
 int VAR_10 = FUNC_5(&VAR_6.p, VAR_9,
          VAR_3 - VAR_1, VAR_5,
          &VAR_6.p.exten[1]);

 VAR_9 += VAR_1 + VAR_10;

 FUNC_2(VAR_9,
     FUNC_6(&VAR_6.p, &VAR_7, VAR_9,
          VAR_4, &VAR_8.p, "UnitTest"));
}
