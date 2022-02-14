
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vm_page_t ;
struct xen_memory_reservation {unsigned long nr_extents; int extent_start; int domid; int extent_order; int address_bits; } ;
struct TYPE_4__ {scalar_t__ current_pages; int balloon_low; scalar_t__ driver_pages; scalar_t__ hard_limit; } ;
struct TYPE_3__ {int q; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,struct xen_memory_reservation*) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int* VAR_9 ;
 int FUNC_6 (int *,int ) ;
 unsigned long FUNC_7 (int*) ;
 TYPE_1__ VAR_10 ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(unsigned long VAR_11)
{
 unsigned long VAR_12;
 vm_page_t VAR_13;
 long VAR_14;
 struct xen_memory_reservation VAR_15 = {
  .address_bits = 0,
  .extent_order = 0,
  .domid = VAR_0
 };

 FUNC_6(&VAR_6, VAR_1);

 if (VAR_11 > FUNC_7(VAR_9))
  VAR_11 = FUNC_7(VAR_9);

 for (VAR_13 = FUNC_2(&VAR_7), VAR_12 = 0;
     VAR_12 < VAR_11; VAR_12++, VAR_13 = FUNC_3(VAR_13, VAR_10.q)) {
  FUNC_1(VAR_13 != ((void*)0), ("ballooned_pages list corrupt"));
  VAR_9[VAR_12] = (FUNC_5(VAR_13) >> VAR_2);
 }

 FUNC_8(VAR_15.extent_start, VAR_9);
 VAR_15.nr_extents = VAR_11;
 VAR_14 = FUNC_0(
  VAR_5, &VAR_15);
 if (VAR_14 < VAR_11) {
  if (VAR_14 > 0) {
   int VAR_16;


   VAR_15.nr_extents = VAR_14;
   VAR_16 = FUNC_0(VAR_4,
     &VAR_15);
   FUNC_1(VAR_16 == VAR_14, ("HYPERVISOR_memory_op failed"));
  }
  if (VAR_14 >= 0)
   VAR_8.hard_limit = (VAR_8.current_pages + VAR_14 -
      VAR_8.driver_pages);
  goto out;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_13 = FUNC_2(&VAR_7);
  FUNC_1(VAR_13 != ((void*)0), ("Unable to get ballooned page"));
  FUNC_4(&VAR_7, VAR_13, VAR_10.q);
  VAR_8.balloon_low--;

  FUNC_1(FUNC_10(VAR_3),
      ("auto translated physmap but mapping is valid"));

  FUNC_9(VAR_13);
 }

 VAR_8.current_pages += VAR_11;

 out:
 return (0);
}
