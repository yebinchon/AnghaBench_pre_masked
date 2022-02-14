
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_pd {int device; } ;


 int FUNC_0 (struct ib_pd*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_pd*) ;

__attribute__((used)) static int FUNC_4(struct ib_pd *VAR_0)
{
 FUNC_1(FUNC_2(VAR_0->device), FUNC_3(VAR_0));
 FUNC_0(VAR_0);

 return 0;
}
