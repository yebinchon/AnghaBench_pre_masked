
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_5__ {int flags; unsigned int pindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int) ;

__attribute__((used)) static vm_page_t
FUNC_2(unsigned int VAR_4, int VAR_5)
{
 vm_page_t VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_5 | VAR_1 |
     VAR_2);
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 if ((VAR_6->flags & VAR_0) == 0)
  FUNC_0(VAR_6);

 VAR_6->pindex = VAR_4;
 return (VAR_6);
}
