
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int state; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1(struct mtx *VAR_0)
{
 FUNC_0(VAR_0->state == 1, ("mutex not locked"));
 VAR_0->state = 0;
}
