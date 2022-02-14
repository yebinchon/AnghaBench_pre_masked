
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * bn; } ;
typedef TYPE_1__ MINT ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int **,char const*) ;
 int * FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static MINT *
FUNC_6(const char *VAR_0, const char *VAR_1)
{
 MINT *VAR_2;

 VAR_2 = FUNC_5(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  FUNC_3(("%s", VAR_0));
 VAR_2->bn = FUNC_2();
 if (VAR_2->bn == ((void*)0))
  FUNC_4(VAR_0);
 FUNC_0(VAR_0, FUNC_1(&VAR_2->bn, VAR_1));
 return (VAR_2);
}
