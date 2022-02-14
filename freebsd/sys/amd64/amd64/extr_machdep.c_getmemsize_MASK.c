
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int u_long ;
typedef int u_int64_t ;
struct msgbuf {int dummy; } ;
typedef int quad_t ;
typedef int pt_entry_t ;
typedef int physmap ;
typedef int caddr_t ;
struct TYPE_2__ {int (* mp_bootaddress ) (int*,int*) ;int (* parse_memmap ) (int ,int*,int*) ;} ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (char*,int*) ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (int*,int) ;
 int* VAR_19 ;
 scalar_t__ FUNC_4 (char*,int*) ;
 TYPE_1__ VAR_20 ;
 int FUNC_5 () ;
 scalar_t__ VAR_21 ;
 struct msgbuf* VAR_22 ;
 int VAR_23 ;
 int* VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_6 (int*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int*,int*) ;
 int FUNC_11 (int*,int*) ;
 int FUNC_12 (int) ;
 scalar_t__ VAR_26 ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static void
FUNC_14(caddr_t VAR_27, u_int64_t VAR_28)
{
 int VAR_29, VAR_30, VAR_31, VAR_32;
 vm_paddr_t VAR_33, VAR_34[VAR_12];
 u_long VAR_35, VAR_36, VAR_37;
 pt_entry_t *VAR_38;
 quad_t VAR_39, VAR_40;
 int VAR_41;





 FUNC_13((vm_paddr_t)VAR_21, FUNC_12(VAR_28));

 FUNC_3(VAR_34, sizeof(VAR_34));
 VAR_30 = 0;

 VAR_20.parse_memmap(VAR_27, VAR_34, &VAR_30);
 VAR_30 -= 2;




 VAR_16 = 0;
 for (VAR_29 = 0; VAR_29 <= VAR_30; VAR_29 += 2) {
  if (VAR_34[VAR_29] <= 0xA0000) {
   VAR_16 = VAR_34[VAR_29 + 1] / 1024;
   break;
  }
 }
 if (VAR_16 == 0 || VAR_16 > 640) {
  if (VAR_18)
   FUNC_7(
  "Memory map doesn't contain a basemem segment, faking it");
  VAR_16 = 640;
 }







 VAR_4 = FUNC_2(VAR_34[VAR_30 + 1]);





 if (FUNC_1("hw.physmem", &VAR_36))
  VAR_4 = FUNC_2(VAR_36);
 VAR_37 = 0;
 FUNC_1("hw.memtest.tests", &VAR_37);





 if (VAR_4 > FUNC_2(VAR_34[VAR_30 + 1]))
  VAR_4 = FUNC_2(VAR_34[VAR_30 + 1]);

 if (FUNC_2(VAR_34[VAR_30 + 1]) != VAR_4 &&
     (VAR_17 & VAR_13))
  FUNC_7("Physical memory use set to %ldK\n", VAR_4 * 4);







 if (VAR_20.mp_bootaddress)
  VAR_20.mp_bootaddress(VAR_34, &VAR_30);


 FUNC_6(&VAR_28);
 VAR_35 = (VAR_26 > VAR_15 ? 1 : 16) << VAR_6;
 FUNC_1("hw.physmem.start", &VAR_35);
 if (VAR_34[0] < VAR_35) {
  if (VAR_35 < VAR_7)
   VAR_34[0] = VAR_7;
  else if (VAR_35 >= VAR_34[1])
   VAR_34[0] = FUNC_9(VAR_34[1] - VAR_7);
  else
   VAR_34[0] = FUNC_9(VAR_35);
 }
 VAR_31 = 0;
 VAR_32 = 1;
 VAR_24[VAR_31++] = VAR_34[0];
 VAR_24[VAR_31] = VAR_34[0];
 VAR_19[VAR_32] = VAR_34[0];
 VAR_38 = VAR_1;




 if (FUNC_4("dcons.addr", &VAR_39) == 0 ||
     FUNC_4("dcons.size", &VAR_40) == 0)
  VAR_39 = 0;





 VAR_41 = 0;
 if (VAR_37 != 0)
  FUNC_7("Testing system memory");
 for (VAR_29 = 0; VAR_29 <= VAR_30; VAR_29 += 2) {
  vm_paddr_t VAR_42;

  VAR_42 = FUNC_8((vm_paddr_t)VAR_4);
  if (VAR_34[VAR_29 + 1] < VAR_42)
   VAR_42 = FUNC_12(VAR_34[VAR_29 + 1]);
  for (VAR_33 = FUNC_9(VAR_34[VAR_29]); VAR_33 < VAR_42; VAR_33 += VAR_7) {
   int VAR_43, VAR_44, VAR_45;
   int *VAR_46 = (int *)VAR_0;

   VAR_45 = VAR_2;



   if (VAR_33 >= (vm_paddr_t)VAR_21 && VAR_33 < VAR_28)
    goto do_dump_avail;




   if (VAR_39 > 0
       && VAR_33 >= FUNC_12(VAR_39)
       && VAR_33 < VAR_39 + VAR_40)
    goto do_dump_avail;

   VAR_44 = VAR_2;
   if (VAR_37 == 0)
    goto skip_memtest;





   VAR_41++;
   if ((VAR_41 % VAR_5) == 0)
    FUNC_7(".");




   *VAR_38 = VAR_33 | VAR_11 | VAR_10 | VAR_9 | VAR_8;
   FUNC_5();

   VAR_43 = *(int *)VAR_46;



   *(volatile int *)VAR_46 = 0xaaaaaaaa;
   if (*(volatile int *)VAR_46 != 0xaaaaaaaa)
    VAR_44 = VAR_14;



   *(volatile int *)VAR_46 = 0x55555555;
   if (*(volatile int *)VAR_46 != 0x55555555)
    VAR_44 = VAR_14;



   *(volatile int *)VAR_46 = 0xffffffff;
   if (*(volatile int *)VAR_46 != 0xffffffff)
    VAR_44 = VAR_14;



   *(volatile int *)VAR_46 = 0x0;
   if (*(volatile int *)VAR_46 != 0x0)
    VAR_44 = VAR_14;



   *(int *)VAR_46 = VAR_43;

skip_memtest:



   if (VAR_44 == VAR_14)
    continue;
   if (VAR_24[VAR_31] == VAR_33) {
    VAR_24[VAR_31] += VAR_7;
   } else {
    VAR_31++;
    if (VAR_31 == VAR_12) {
     FUNC_7(
  "Too many holes in the physical address space, giving up\n");
     VAR_31--;
     VAR_45 = VAR_14;
     goto do_dump_avail;
    }
    VAR_24[VAR_31++] = VAR_33;
    VAR_24[VAR_31] = VAR_33 + VAR_7;
   }
   VAR_25++;
do_dump_avail:
   if (VAR_19[VAR_32] == VAR_33) {
    VAR_19[VAR_32] += VAR_7;
   } else {
    VAR_32++;
    if (VAR_32 == VAR_12) {
     VAR_32--;
     goto do_next;
    }
    VAR_19[VAR_32++] = VAR_33;
    VAR_19[VAR_32] = VAR_33 + VAR_7;
   }
do_next:
   if (VAR_45)
    break;
  }
 }
 *VAR_38 = 0;
 FUNC_5();
 if (VAR_37 != 0)
  FUNC_7("\n");







 while (VAR_24[VAR_31 - 1] + VAR_7 +
     FUNC_9(VAR_23) >= VAR_24[VAR_31]) {
  VAR_25 -= FUNC_2(VAR_24[VAR_31] - VAR_24[VAR_31 - 1]);
  VAR_24[VAR_31--] = 0;
  VAR_24[VAR_31--] = 0;
 }

 VAR_4 = FUNC_2(VAR_24[VAR_31]);


 VAR_24[VAR_31] -= FUNC_9(VAR_23);


 VAR_22 = (struct msgbuf *)FUNC_0(VAR_24[VAR_31]);
}
