
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kmem_cache*,void*) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct kmem_cache*) ;
 int FUNC_6 (int ,void*) ;

void FUNC_7(struct kmem_cache *VAR_2, void *VAR_3)
{
 unsigned long VAR_4;

 FUNC_4(VAR_4);
 FUNC_1(VAR_3, FUNC_5(VAR_2));
 if (!(VAR_2->flags & VAR_0))
  FUNC_2(VAR_3, FUNC_5(VAR_2));
 FUNC_0(VAR_2, VAR_3);
 FUNC_3(VAR_4);

 FUNC_6(VAR_1, VAR_3);
}
