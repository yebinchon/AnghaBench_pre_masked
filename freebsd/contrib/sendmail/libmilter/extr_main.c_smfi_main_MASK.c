
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xxfi_name; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__* VAR_9 ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_10 ;

int
FUNC_6()
{
 int VAR_11;

 (void) FUNC_4(VAR_2, VAR_3);
 if (VAR_6 == ((void*)0))
 {
  FUNC_5(VAR_4, "%s: missing connection information",
   VAR_9->xxfi_name);
  return VAR_0;
 }

 (void) FUNC_1(VAR_8);
 if (FUNC_2(VAR_9->xxfi_name) != VAR_1)
 {
  FUNC_5(VAR_4,
   "%s: Couldn't start signal thread",
   VAR_9->xxfi_name);
  return VAR_0;
 }
 VAR_11 = FUNC_0();


 if (FUNC_3(VAR_6, VAR_7, VAR_9, VAR_10, VAR_5) != VAR_1)
  VAR_11 = VAR_0;

 return VAR_11;
}
