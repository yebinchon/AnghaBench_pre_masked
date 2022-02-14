
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct libusb20_transfer {int* pLength; int nFrames; void** ppBuffer; int timeout; } ;


 void* FUNC_0 (void*) ;

void
FUNC_1(struct libusb20_transfer *VAR_0, void *VAR_1, void *VAR_2, uint32_t VAR_3)
{
 uint16_t VAR_4;

 VAR_0->ppBuffer[0] = FUNC_0(VAR_1);
 VAR_0->pLength[0] = 8;
 VAR_0->timeout = VAR_3;

 VAR_4 = ((uint8_t *)VAR_1)[6] | (((uint8_t *)VAR_1)[7] << 8);

 if (VAR_4 != 0) {
  VAR_0->nFrames = 2;
  VAR_0->ppBuffer[1] = FUNC_0(VAR_2);
  VAR_0->pLength[1] = VAR_4;
 } else {
  VAR_0->nFrames = 1;
 }
 return;
}
