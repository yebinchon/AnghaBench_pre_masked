
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct xen_memory_reservation {unsigned long nr_extents; int extent_start; int domid; int extent_order; int address_bits; } ;
struct TYPE_10__ {unsigned long current_pages; int balloon_low; } ;
struct TYPE_9__ {int q; } ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct xen_memory_reservation*) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__ VAR_10 ;
 int* VAR_11 ;
 int FUNC_4 (int *,int ) ;
 unsigned long FUNC_5 (int*) ;
 TYPE_4__ VAR_12 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int*) ;
 TYPE_1__* FUNC_8 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_9(unsigned long VAR_13)
{
 unsigned long VAR_14;
 vm_page_t VAR_15;
 int VAR_16 = 0;
 int VAR_17;
 struct xen_memory_reservation VAR_18 = {
  .address_bits = 0,
  .extent_order = 0,
  .domid = VAR_0
 };

 FUNC_4(&VAR_8, VAR_1);

 if (VAR_13 > FUNC_5(VAR_11))
  VAR_13 = FUNC_5(VAR_11);

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  if ((VAR_15 = FUNC_8(((void*)0), 0,
       VAR_5 | VAR_4 |
       VAR_6)) == ((void*)0)) {
   VAR_13 = VAR_14;
   VAR_16 = 1;
   break;
  }

  if ((VAR_15->flags & VAR_3) == 0) {







   FUNC_6(VAR_15);
  }

  VAR_11[VAR_14] = (FUNC_3(VAR_15) >> VAR_2);

  FUNC_2(&VAR_9, VAR_15, VAR_12.q);
  VAR_10.balloon_low++;
 }

 FUNC_7(VAR_18.extent_start, VAR_11);
 VAR_18.nr_extents = VAR_13;
 VAR_17 = FUNC_0(VAR_7, &VAR_18);
 FUNC_1(VAR_17 == VAR_13, ("HYPERVISOR_memory_op failed"));

 VAR_10.current_pages -= VAR_13;

 return (VAR_16);
}
