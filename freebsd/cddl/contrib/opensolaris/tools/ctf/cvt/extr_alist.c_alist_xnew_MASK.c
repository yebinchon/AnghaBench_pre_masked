
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* al_namefree ) (void*) ;void (* al_valfree ) (void*) ;int al_elements; } ;
typedef TYPE_1__ alist_t ;


 int FUNC_0 (int,int (*) (int,void*),int (*) (void*,void*)) ;
 TYPE_1__* FUNC_1 (int) ;

alist_t *
FUNC_2(int VAR_0, void (*VAR_1)(void *),
    void (*VAR_2)(void *), int (*VAR_3)(int, void *),
    int (*VAR_4)(void *, void *))
{
 alist_t *VAR_5;

 VAR_5 = FUNC_1(sizeof (alist_t));
 VAR_5->al_elements = FUNC_0(VAR_0, VAR_3, VAR_4);
 VAR_5->al_namefree = VAR_1;
 VAR_5->al_valfree = VAR_2;

 return (VAR_5);
}
