
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t uint16_t ;
struct libusb20_transfer {size_t maxFrames; int * pLength; int * ppBuffer; } ;


 int FUNC_0 (void*) ;

void
FUNC_1(struct libusb20_transfer *VAR_0, void *VAR_1, uint32_t VAR_2, uint16_t VAR_3)
{
 if (VAR_3 >= VAR_0->maxFrames) {

  return;
 }
 VAR_0->ppBuffer[VAR_3] = FUNC_0(VAR_1);
 VAR_0->pLength[VAR_3] = VAR_2;
 return;
}
