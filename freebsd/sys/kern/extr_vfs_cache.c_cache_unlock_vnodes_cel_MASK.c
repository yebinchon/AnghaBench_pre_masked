
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct celockstate {int ** vlp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct celockstate *VAR_0)
{

 FUNC_0(VAR_0->vlp[0] != ((void*)0) || VAR_0->vlp[1] != ((void*)0));

 if (VAR_0->vlp[0] != ((void*)0))
  FUNC_1(VAR_0->vlp[0]);
 if (VAR_0->vlp[1] != ((void*)0))
  FUNC_1(VAR_0->vlp[1]);
 if (VAR_0->vlp[2] != ((void*)0))
  FUNC_1(VAR_0->vlp[2]);
}
