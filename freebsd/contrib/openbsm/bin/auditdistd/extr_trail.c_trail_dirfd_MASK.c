
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trail {scalar_t__ tr_magic; int tr_dirfp; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

int
FUNC_2(const struct trail *VAR_1)
{

 FUNC_0(VAR_1->tr_magic == VAR_0);

 return (FUNC_1(VAR_1->tr_dirfp));
}
