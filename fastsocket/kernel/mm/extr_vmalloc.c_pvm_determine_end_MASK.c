
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {unsigned long va_start; unsigned long va_end; int rb_node; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long const) ;
 struct vmap_area* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static unsigned long FUNC_3(struct vmap_area **VAR_1,
           struct vmap_area **VAR_2,
           unsigned long VAR_3)
{
 const unsigned long VAR_4 = VAR_0 & ~(VAR_3 - 1);
 unsigned long VAR_5;

 if (*VAR_1)
  VAR_5 = FUNC_0((*VAR_1)->va_start & ~(VAR_3 - 1), VAR_4);
 else
  VAR_5 = VAR_4;

 while (*VAR_2 && (*VAR_2)->va_end > VAR_5) {
  *VAR_1 = *VAR_2;
  *VAR_2 = FUNC_1(FUNC_2(&(*VAR_1)->rb_node));
 }

 return VAR_5;
}
