
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_memattr_t ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;
struct TYPE_5__ {int flags; int oflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 TYPE_1__* FUNC_2 (int,int ) ;

__attribute__((used)) static vm_page_t
FUNC_3(int VAR_8, enum ttm_caching_state VAR_9)
{
 vm_page_t VAR_10;
 vm_memattr_t VAR_11;
 int VAR_12;

 VAR_11 = FUNC_0(VAR_9);
 VAR_12 = VAR_4 | VAR_5 | VAR_3;
 if ((VAR_8 & VAR_2) != 0)
  VAR_12 |= VAR_6;

 if ((VAR_8 & VAR_1) != 0)
  VAR_10 = FUNC_2(VAR_12, VAR_11);
 else
  VAR_10 = FUNC_1(VAR_12, VAR_11);

 if (VAR_10 != ((void*)0)) {
  VAR_10->oflags &= ~VAR_7;
  VAR_10->flags |= VAR_0;
 }
 return (VAR_10);
}
