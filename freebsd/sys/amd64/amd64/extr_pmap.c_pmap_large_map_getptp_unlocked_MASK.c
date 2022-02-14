
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ,int) ;

__attribute__((used)) static vm_page_t
FUNC_2(void)
{
 vm_page_t VAR_4;

 VAR_4 = FUNC_1(((void*)0), 0, VAR_2 | VAR_1 |
     VAR_3);
 if (VAR_4 != ((void*)0) && (VAR_4->flags & VAR_0) == 0)
  FUNC_0(VAR_4);
 return (VAR_4);
}
