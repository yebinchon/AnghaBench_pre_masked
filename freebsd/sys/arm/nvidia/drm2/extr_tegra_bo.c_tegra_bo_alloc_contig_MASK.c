
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef unsigned long vm_paddr_t ;
typedef int vm_memattr_t ;
typedef int u_long ;
struct TYPE_5__ {int flags; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ,int,size_t,unsigned long,unsigned long,int ,unsigned long,int ) ;
 int FUNC_2 (int,size_t,unsigned long,unsigned long,int ,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(size_t VAR_8, u_long VAR_9, vm_memattr_t VAR_10,
    vm_page_t **VAR_11)
{
 vm_page_t VAR_12;
 int VAR_13, VAR_14, VAR_15;
 vm_paddr_t VAR_16, VAR_17, VAR_18;

 VAR_16 = 0;
 VAR_17 = -1UL;
 VAR_18 = 0;
 VAR_13 = VAR_4 | VAR_3 | VAR_2 |
     VAR_5 | VAR_6;
 VAR_14 = 0;
retry:
 VAR_12 = FUNC_1(((void*)0), 0, VAR_13, VAR_8, VAR_16, VAR_17, VAR_9,
     VAR_18, VAR_10);
 if (VAR_12 == ((void*)0)) {
  if (VAR_14 < 3) {
   if (!FUNC_2(VAR_13, VAR_8, VAR_16, VAR_17,
       VAR_9, VAR_18))
    FUNC_3(((void*)0));
   VAR_14++;
   goto retry;
  }
  return (VAR_0);
 }

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++, VAR_12++) {
  if ((VAR_12->flags & VAR_1) == 0)
   FUNC_0(VAR_12);
  VAR_12->valid = VAR_7;
  (*VAR_11)[VAR_15] = VAR_12;
 }

 return (0);
}
