
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_object {int dummy; } ;


 int FUNC_0 (struct kmemleak_object*) ;
 int VAR_0 ;
 struct kmemleak_object* FUNC_1 (unsigned long,int) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static struct kmemleak_object *FUNC_6(unsigned long VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 struct kmemleak_object *VAR_6 = ((void*)0);

 FUNC_2();
 FUNC_4(&VAR_0, VAR_5);
 if (VAR_3 >= VAR_2 && VAR_3 < VAR_1)
  VAR_6 = FUNC_1(VAR_3, VAR_4);
 FUNC_5(&VAR_0, VAR_5);


 if (VAR_6 && !FUNC_0(VAR_6))
  VAR_6 = ((void*)0);
 FUNC_3();

 return VAR_6;
}
