
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlocale_refcounted {int (* destructor ) (struct xlocale_refcounted*) ;int retain_count; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct xlocale_refcounted*) ;

__attribute__((used)) __attribute__((unused)) static void
FUNC_2(void *VAR_0)
{
 struct xlocale_refcounted *VAR_1 = VAR_0;
 long VAR_2;

 VAR_2 = FUNC_0(&(VAR_1->retain_count), -1) - 1;
 if (VAR_2 < 0 && VAR_1->destructor != ((void*)0))
  VAR_1->destructor(VAR_1);
}
