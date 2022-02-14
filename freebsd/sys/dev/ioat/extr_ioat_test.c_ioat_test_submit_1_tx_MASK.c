
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct test_transaction {int depth; int length; scalar_t__* crc; scalar_t__* buf; } ;
struct ioat_test {scalar_t__ testkind; int free_q; int pend_q; int * status; int raw_target; scalar_t__ raw_write; } ;
struct bus_dmadesc {int dummy; } ;
typedef int bus_dmaengine_t ;
typedef int (* bus_dmaengine_callback_t ) (struct test_transaction*,int ) ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_2 (int *) ;
 struct test_transaction* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct test_transaction*,int ) ;
 int FUNC_5 (int *,struct test_transaction*,int ) ;
 int FUNC_6 (int *,int) ;
 int VAR_12 ;
 int FUNC_7 (int ) ;
 struct bus_dmadesc* FUNC_8 (int ,int ,int ,int ,int (*) (struct test_transaction*,int ),struct test_transaction*,int) ;
 struct bus_dmadesc* FUNC_9 (int ,int ,int ,int ,int (*) (struct test_transaction*,int ),struct test_transaction*,int) ;
 struct bus_dmadesc* FUNC_10 (int ,int ,int ,int ,int ,int (*) (struct test_transaction*,int ),struct test_transaction*,int) ;
 struct bus_dmadesc* FUNC_11 (int ,int ,int ,int ,int *,int ,int (*) (struct test_transaction*,int ),struct test_transaction*,int) ;
 struct bus_dmadesc* FUNC_12 (int ,int ,int ,int *,int ,int (*) (struct test_transaction*,int ),struct test_transaction*,int) ;
 int FUNC_13 (struct test_transaction*,int ) ;
 int FUNC_14 (int ) ;
 int VAR_13 ;
 int FUNC_15 (scalar_t__,scalar_t__,int ) ;
 int FUNC_16 (int *,int *,int ,char*,int ) ;
 int FUNC_17 (scalar_t__) ;

__attribute__((used)) static void
FUNC_18(struct ioat_test *VAR_14, bus_dmaengine_t VAR_15)
{
 struct test_transaction *VAR_16;
 struct bus_dmadesc *VAR_17;
 bus_dmaengine_callback_t VAR_18;
 bus_addr_t VAR_19, VAR_20;
 uint64_t VAR_21;
 uint32_t VAR_22, VAR_23;

 VAR_17 = ((void*)0);

 FUNC_0();
 while (FUNC_2(&VAR_14->free_q))
  FUNC_16(&VAR_14->free_q, &VAR_13, 0, "test_submit", 0);

 VAR_16 = FUNC_3(&VAR_14->free_q);
 FUNC_5(&VAR_14->free_q, VAR_16, VAR_12);
 FUNC_4(&VAR_14->pend_q, VAR_16, VAR_12);
 FUNC_1();

 if (VAR_14->testkind != VAR_8)
  FUNC_7(VAR_15);
 for (VAR_22 = 0; VAR_22 < VAR_16->depth; VAR_22++) {
  if (VAR_14->testkind == VAR_8) {
   FUNC_15(VAR_16->buf[2 * VAR_22 + 1], VAR_16->buf[2 * VAR_22], VAR_16->length);
   if (VAR_22 == VAR_16->depth - 1)
    FUNC_13(VAR_16, 0);
   continue;
  }

  VAR_19 = FUNC_17((vm_offset_t)VAR_16->buf[2*VAR_22]);
  VAR_20 = FUNC_17((vm_offset_t)VAR_16->buf[2*VAR_22+1]);

  if (VAR_14->testkind == VAR_10) {
   if (VAR_14->raw_write)
    VAR_20 = VAR_14->raw_target;
   else
    VAR_19 = VAR_14->raw_target;
  }

  if (VAR_22 == VAR_16->depth - 1) {
   VAR_18 = FUNC_13;
   VAR_23 = VAR_1;
  } else {
   VAR_18 = ((void*)0);
   VAR_23 = 0;
  }

  if (VAR_14->testkind == VAR_2 ||
      VAR_14->testkind == VAR_10)
   VAR_17 = FUNC_9(VAR_15, VAR_20, VAR_19, VAR_16->length, VAR_18, VAR_16,
       VAR_23);
  else if (VAR_14->testkind == VAR_7) {
   VAR_21 = *(uint64_t *)VAR_16->buf[2*VAR_22];
   VAR_17 = FUNC_8(VAR_15, VAR_20, VAR_21,
       VAR_16->length, VAR_18, VAR_16, VAR_23);
  } else if (VAR_14->testkind == VAR_3) {
   bus_addr_t VAR_24, VAR_25;

   VAR_24 = FUNC_17((vm_offset_t)VAR_16->buf[2*VAR_22] + VAR_11);
   VAR_25 = FUNC_17((vm_offset_t)VAR_16->buf[2*VAR_22+1] + VAR_11);

   VAR_17 = FUNC_10(VAR_15, VAR_20, VAR_25, VAR_19, VAR_24,
       VAR_18, VAR_16, VAR_23);
  } else if (VAR_14->testkind == VAR_4) {
   bus_addr_t VAR_26, VAR_27;

   VAR_26 = FUNC_17((vm_offset_t)VAR_16->buf[2*VAR_22+1] + VAR_11);
   VAR_27 = FUNC_17((vm_offset_t)VAR_16->buf[2*VAR_22] + VAR_11);

   VAR_17 = FUNC_10(VAR_15, VAR_20, VAR_27, VAR_19, VAR_26,
       VAR_18, VAR_16, VAR_23);
  } else if (VAR_14->testkind == VAR_5) {
   bus_addr_t VAR_28;

   VAR_16->crc[VAR_22] = 0;
   VAR_28 = FUNC_17((vm_offset_t)&VAR_16->crc[VAR_22]);
   VAR_17 = FUNC_12(VAR_15, VAR_19, VAR_16->length,
       ((void*)0), VAR_28, VAR_18, VAR_16, VAR_23 | VAR_0);
  } else if (VAR_14->testkind == VAR_6) {
   bus_addr_t VAR_29;

   VAR_16->crc[VAR_22] = 0;
   VAR_29 = FUNC_17((vm_offset_t)&VAR_16->crc[VAR_22]);
   VAR_17 = FUNC_11(VAR_15, VAR_20, VAR_19, VAR_16->length,
       ((void*)0), VAR_29, VAR_18, VAR_16, VAR_23 | VAR_0);
  }
  if (VAR_17 == ((void*)0))
   break;
 }
 if (VAR_14->testkind == VAR_8)
  return;
 FUNC_14(VAR_15);






 if (VAR_17 == ((void*)0) && VAR_16->depth > 0) {
  FUNC_6(&VAR_14->status[VAR_9], VAR_16->depth);
  FUNC_0();
  FUNC_5(&VAR_14->pend_q, VAR_16, VAR_12);
  FUNC_4(&VAR_14->free_q, VAR_16, VAR_12);
  FUNC_1();
 }
}
