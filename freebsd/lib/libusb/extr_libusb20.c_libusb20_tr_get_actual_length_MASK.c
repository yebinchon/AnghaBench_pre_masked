
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct libusb20_transfer {size_t aFrames; scalar_t__* pLength; } ;



uint32_t
FUNC_0(struct libusb20_transfer *VAR_0)
{
 uint32_t VAR_1;
 uint32_t VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 != VAR_0->aFrames; VAR_1++) {
  VAR_2 += VAR_0->pLength[VAR_1];
 }
 return (VAR_2);
}
