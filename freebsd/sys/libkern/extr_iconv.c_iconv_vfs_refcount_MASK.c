
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsconf {scalar_t__ vfc_refcount; } ;


 int VAR_0 ;
 struct vfsconf* FUNC_0 (char const*) ;

int
FUNC_1(const char *VAR_1)
{
 struct vfsconf *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != ((void*)0) && VAR_2->vfc_refcount > 0)
  return (VAR_0);
 return (0);
}
