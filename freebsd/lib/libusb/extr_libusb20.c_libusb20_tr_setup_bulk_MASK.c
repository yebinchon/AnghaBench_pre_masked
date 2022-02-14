
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct libusb20_transfer {int nFrames; void* timeout; void** pLength; int * ppBuffer; } ;


 int FUNC_0 (void*) ;

void
FUNC_1(struct libusb20_transfer *VAR_0, void *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 VAR_0->ppBuffer[0] = FUNC_0(VAR_1);
 VAR_0->pLength[0] = VAR_2;
 VAR_0->timeout = VAR_3;
 VAR_0->nFrames = 1;
 return;
}
