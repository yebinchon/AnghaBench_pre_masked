
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int md; int demangled_names_hash; } ;


 int FUNC_0 (int,int ,int (*) (void const*,void const*),int *,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1 (struct objfile *VAR_4)
{





  VAR_4->demangled_names_hash = FUNC_0
    (256, VAR_0, (int (*) (const void *, const void *)) VAR_1,
     ((void*)0), VAR_4->md, VAR_2, VAR_3);
}
