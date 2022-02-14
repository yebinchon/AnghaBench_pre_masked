
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct adapter *VAR_1 = VAR_0;

 FUNC_1("%s: panic on fatal error", FUNC_0(VAR_1->dev));
}
