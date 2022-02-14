
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct TYPE_2__ {struct ucred* netc_anon; } ;
struct netexport {TYPE_1__ ne_defexported; int * ne6; int * ne4; } ;


 int FUNC_0 (struct ucred*) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static void
FUNC_2(struct netexport *VAR_0)
{
 struct ucred *VAR_1;

 if (VAR_0->ne4 != ((void*)0))
  FUNC_1(&VAR_0->ne4);
 if (VAR_0->ne6 != ((void*)0))
  FUNC_1(&VAR_0->ne6);

 VAR_1 = VAR_0->ne_defexported.netc_anon;
 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_1);

}
