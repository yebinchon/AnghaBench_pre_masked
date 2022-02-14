
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snddev_info {int bufsz; } ;
typedef int device_t ;


 int FUNC_0 (int,unsigned int,unsigned int) ;
 int FUNC_1 (int ) ;
 struct snddev_info* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int,...) ;
 scalar_t__ FUNC_5 (int ,int ,char*,int*) ;

unsigned int
FUNC_6(device_t VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 struct snddev_info *VAR_4 = FUNC_2(VAR_0);
 int VAR_5, VAR_6;

 VAR_5 = 0;
 if (FUNC_5(FUNC_1(VAR_0), FUNC_3(VAR_0), "buffersize", &VAR_5) == 0) {
  VAR_6 = VAR_5;
  FUNC_0(VAR_5, VAR_1, VAR_3);
  if (VAR_6 != VAR_5)
   FUNC_4(VAR_0, "'buffersize=%d' hint is out of range (%d-%d), using %d\n", VAR_6, VAR_1, VAR_3, VAR_5);
  VAR_6 = VAR_1;
  while (VAR_6 < VAR_5)
   VAR_6 <<= 1;
  if (VAR_6 > VAR_5)
   VAR_6 >>= 1;
  if (VAR_6 != VAR_5) {
   FUNC_4(VAR_0, "'buffersize=%d' hint is not a power of 2, using %d\n", VAR_5, VAR_6);
   VAR_5 = VAR_6;
  }
 } else {
  VAR_5 = VAR_2;
 }

 VAR_4->bufsz = VAR_5;

 return VAR_5;
}
