
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int cmd_len; TYPE_2__* currlun; void* cmd_dir; int data_rem; int data_ptr; } ;
struct ustorage_fs_softc {TYPE_4__ sc_transfer; TYPE_1__* sc_csw; TYPE_3__* sc_cbw; int sc_qdata; } ;
struct TYPE_7__ {int* CBWCDB; } ;
struct TYPE_6__ {int sense_data; } ;
struct TYPE_5__ {void* bCSWStatus; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*,int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 unsigned long FUNC_3 (struct ustorage_fs_softc*,int,int,int) ;
 unsigned long FUNC_4 (struct ustorage_fs_softc*) ;
 unsigned long FUNC_5 (struct ustorage_fs_softc*,int,int const) ;
 unsigned long FUNC_6 (struct ustorage_fs_softc*) ;
 unsigned long FUNC_7 (struct ustorage_fs_softc*) ;
 unsigned long FUNC_8 (struct ustorage_fs_softc*) ;
 unsigned long FUNC_9 (struct ustorage_fs_softc*) ;
 unsigned long FUNC_10 (struct ustorage_fs_softc*) ;
 unsigned long FUNC_11 (struct ustorage_fs_softc*) ;
 unsigned long FUNC_12 (struct ustorage_fs_softc*) ;
 unsigned long FUNC_13 (struct ustorage_fs_softc*) ;
 unsigned long FUNC_14 (struct ustorage_fs_softc*) ;
 unsigned long FUNC_15 (struct ustorage_fs_softc*) ;
 unsigned long FUNC_16 (struct ustorage_fs_softc*) ;

__attribute__((used)) static uint8_t
FUNC_17(struct ustorage_fs_softc *VAR_4)
{
 uint8_t VAR_5 = 1;
 uint8_t VAR_6;
 uint32_t VAR_7;
 const uint32_t VAR_8 = (0xFFFFFFFFUL >> 9) << 9;


 VAR_4->sc_transfer.data_ptr = VAR_4->sc_qdata;

 FUNC_0("cmd_data[0]=0x%02x, data_rem=0x%08x\n",
     VAR_4->sc_cbw->CBWCDB[0], VAR_4->sc_transfer.data_rem);

 switch (VAR_4->sc_cbw->CBWCDB[0]) {
 case 149:
  VAR_4->sc_transfer.cmd_dir = VAR_2;
  VAR_5 = FUNC_5(VAR_4, VAR_4->sc_cbw->CBWCDB[4], -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 6,
      (1UL << 4) | 1, 0);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_4(VAR_4);

  break;

 case 147:
  VAR_4->sc_transfer.cmd_dir = VAR_1;
  VAR_5 = FUNC_5(VAR_4, VAR_4->sc_cbw->CBWCDB[4], -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 6,
      (1UL << 1) | (1UL << 4) | 1, 0);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_6(VAR_4);

  break;

 case 148:
  VAR_4->sc_transfer.cmd_dir = VAR_1;
  VAR_5 = FUNC_5(VAR_4,
      FUNC_1(&VAR_4->sc_cbw->CBWCDB[7]), -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 10,
      (1UL << 1) | (3UL << 7) | 1, 0);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_6(VAR_4);

  break;

 case 145:
  VAR_4->sc_transfer.cmd_dir = VAR_2;
  VAR_5 = FUNC_5(VAR_4, VAR_4->sc_cbw->CBWCDB[4], -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 6,
      (1UL << 1) | (1UL << 2) | (1UL << 4) | 1, 0);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_7(VAR_4);

  break;

 case 146:
  VAR_4->sc_transfer.cmd_dir = VAR_2;
  VAR_5 = FUNC_5(VAR_4,
      FUNC_1(&VAR_4->sc_cbw->CBWCDB[7]), -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 10,
      (1UL << 1) | (1UL << 2) | (3UL << 7) | 1, 0);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_7(VAR_4);

  break;

 case 144:
  VAR_5 = FUNC_5(VAR_4, 0, -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 6,
      (1UL << 4) | 1, 0);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_8(VAR_4);

  break;

 case 141:
  VAR_6 = VAR_4->sc_cbw->CBWCDB[4];
  VAR_4->sc_transfer.cmd_dir = VAR_2;
  VAR_7 = ((VAR_6 == 0) ? 256UL : VAR_6);
  VAR_5 = FUNC_5(VAR_4, VAR_7 << 9, VAR_8);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 6,
      (7UL << 1) | (1UL << 4) | 1, 1);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_9(VAR_4);

  break;

 case 143:
  VAR_4->sc_transfer.cmd_dir = VAR_2;
  VAR_7 = FUNC_1(&VAR_4->sc_cbw->CBWCDB[7]);
  VAR_5 = FUNC_5(VAR_4, VAR_7 << 9, VAR_8);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 10,
      (1UL << 1) | (0xfUL << 2) | (3UL << 7) | 1, 1);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_9(VAR_4);

  break;

 case 142:
  VAR_4->sc_transfer.cmd_dir = VAR_2;
  VAR_7 = FUNC_2(&VAR_4->sc_cbw->CBWCDB[6]);
  if (VAR_7 >= (1UL << (32 - 9))) {

   VAR_4->sc_csw->bCSWStatus = VAR_0;
   VAR_5 = 1;
   break;
  }
  VAR_5 = FUNC_5(VAR_4, VAR_7 << 9, VAR_8);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 12,
      (1UL << 1) | (0xfUL << 2) | (0xfUL << 6) | 1, 1);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_9(VAR_4);

  break;

 case 140:
  VAR_4->sc_transfer.cmd_dir = VAR_2;
  VAR_5 = FUNC_3(VAR_4, 10,
      (0xfUL << 2) | (1UL << 8) | 1, 1);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_10(VAR_4);

  break;

 case 139:
  VAR_4->sc_transfer.cmd_dir = VAR_2;
  VAR_5 = FUNC_5(VAR_4,
      FUNC_1(&VAR_4->sc_cbw->CBWCDB[7]), -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 10,
      (3UL << 7) | 1, 1);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_11(VAR_4);

  break;

 case 137:
  VAR_4->sc_transfer.cmd_dir = VAR_2;
  VAR_5 = FUNC_5(VAR_4, VAR_4->sc_cbw->CBWCDB[4], -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 6,
      (1UL << 4) | 1, 0);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_12(VAR_4);

  break;

 case 134:
  VAR_5 = FUNC_5(VAR_4, 0, -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 6,
      (1UL << 1) | (1UL << 4) | 1, 0);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_13(VAR_4);

  break;

 case 133:
  VAR_5 = FUNC_5(VAR_4, 0, -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 10,
      (0xfUL << 2) | (3UL << 7) | 1, 1);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_14(VAR_4);

  break;

 case 132:
  VAR_5 = FUNC_5(VAR_4, 0, -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 6,
      0 | 1, 1);
  break;





 case 131:
  VAR_5 = FUNC_5(VAR_4, 0, -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 10,
      (1UL << 1) | (0xfUL << 2) | (3UL << 7) | 1, 1);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_15(VAR_4);

  break;

 case 128:
  VAR_6 = VAR_4->sc_cbw->CBWCDB[4];
  VAR_4->sc_transfer.cmd_dir = VAR_1;
  VAR_7 = ((VAR_6 == 0) ? 256UL : VAR_6);
  VAR_5 = FUNC_5(VAR_4, VAR_7 << 9, VAR_8);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 6,
      (7UL << 1) | (1UL << 4) | 1, 1);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_16(VAR_4);

  break;

 case 130:
  VAR_4->sc_transfer.cmd_dir = VAR_1;
  VAR_7 = FUNC_1(&VAR_4->sc_cbw->CBWCDB[7]);
  VAR_5 = FUNC_5(VAR_4, VAR_7 << 9, VAR_8);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 10,
      (1UL << 1) | (0xfUL << 2) | (3UL << 7) | 1, 1);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_16(VAR_4);

  break;

 case 129:
  VAR_4->sc_transfer.cmd_dir = VAR_1;
  VAR_7 = FUNC_2(&VAR_4->sc_cbw->CBWCDB[6]);
  if (VAR_7 > (VAR_8 >> 9)) {

   VAR_4->sc_csw->bCSWStatus = VAR_0;
   VAR_5 = 1;
   break;
  }
  VAR_5 = FUNC_5(VAR_4, VAR_7 << 9, VAR_8);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, 12,
      (1UL << 1) | (0xfUL << 2) | (0xfUL << 6) | 1, 1);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_16(VAR_4);

  break;
 case 150:
 case 138:
 case 136:
 case 135:


 default:
  VAR_5 = FUNC_5(VAR_4, 0, -1U);
  if (VAR_5) {
   break;
  }
  VAR_5 = FUNC_3(VAR_4, VAR_4->sc_transfer.cmd_len,
      0xff, 0);
  if (VAR_5) {
   break;
  }
  VAR_4->sc_transfer.currlun->sense_data =
      VAR_3;
  VAR_5 = 1;

  break;
 }
 return (VAR_5);
}
