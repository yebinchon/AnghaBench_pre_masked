
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct libusb20_transfer {int is_opened; int maxFrames; int * pLength; int * ppBuffer; TYPE_2__* pdev; } ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {int (* tr_open ) (struct libusb20_transfer*,int,int,int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct libusb20_transfer*,int,int,int,int ,int) ;
 int FUNC_4 (struct libusb20_transfer*,int,int,int,int ,int) ;

int
FUNC_5(struct libusb20_transfer *VAR_4, uint32_t VAR_5,
    uint32_t VAR_6, uint8_t VAR_7, uint16_t VAR_8)
{
 uint32_t VAR_9;
 uint8_t VAR_10;
 int VAR_11;

 if (VAR_4->is_opened)
  return (VAR_0);
 if (VAR_6 & VAR_3) {
  VAR_6 &= ~VAR_3;





  VAR_6 *= 8;
  VAR_10 = 1;
 } else {
  VAR_10 = 0;
 }
 if (VAR_6 == 0)
  return (VAR_1);

 VAR_4->maxFrames = VAR_6;

 VAR_9 = VAR_6 * sizeof(VAR_4->pLength[0]);
 VAR_4->pLength = FUNC_1(VAR_9);
 if (VAR_4->pLength == ((void*)0)) {
  return (VAR_2);
 }
 FUNC_2(VAR_4->pLength, 0, VAR_9);

 VAR_9 = VAR_6 * sizeof(VAR_4->ppBuffer[0]);
 VAR_4->ppBuffer = FUNC_1(VAR_9);
 if (VAR_4->ppBuffer == ((void*)0)) {
  FUNC_0(VAR_4->pLength);
  return (VAR_2);
 }
 FUNC_2(VAR_4->ppBuffer, 0, VAR_9);

 if (VAR_10) {
  VAR_11 = VAR_4->pdev->methods->tr_open(VAR_4, VAR_5,
      VAR_6 / 8, VAR_7, VAR_8, 1);
 } else {
  VAR_11 = VAR_4->pdev->methods->tr_open(VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8, 0);
 }

 if (VAR_11) {
  FUNC_0(VAR_4->ppBuffer);
  FUNC_0(VAR_4->pLength);
 } else {
  VAR_4->is_opened = 1;
 }
 return (VAR_11);
}
