
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cipso_v4_doi {int refcount; } ;


 int FUNC_0 (int *) ;
 struct cipso_v4_doi* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct cipso_v4_doi *FUNC_4(u32 VAR_0)
{
 struct cipso_v4_doi *VAR_1;

 FUNC_2();
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == ((void*)0))
  goto doi_getdef_return;
 if (!FUNC_0(&VAR_1->refcount))
  VAR_1 = ((void*)0);

doi_getdef_return:
 FUNC_3();
 return VAR_1;
}
