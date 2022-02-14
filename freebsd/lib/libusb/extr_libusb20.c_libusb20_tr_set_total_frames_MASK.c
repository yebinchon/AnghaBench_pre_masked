
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct libusb20_transfer {scalar_t__ maxFrames; scalar_t__ nFrames; } ;



void
FUNC_0(struct libusb20_transfer *VAR_0, uint32_t VAR_1)
{
 if (VAR_1 > VAR_0->maxFrames) {

  VAR_1 = VAR_0->maxFrames;
 }
 VAR_0->nFrames = VAR_1;
 return;
}
