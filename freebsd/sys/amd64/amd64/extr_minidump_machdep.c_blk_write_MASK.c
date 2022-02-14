
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int u_int ;
struct dumperinfo {int maxiosize; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dumperinfo*) ;
 int FUNC_1 () ;
 size_t VAR_7 ;
 int FUNC_2 (struct dumperinfo*,char*,int ,size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int
FUNC_8(struct dumperinfo *VAR_13, char *VAR_14, vm_paddr_t VAR_15, size_t VAR_16)
{
 size_t VAR_17;
 int VAR_18, VAR_19, VAR_20;
 u_int VAR_21;

 VAR_21 = FUNC_3(VAR_13->maxiosize, VAR_2 * VAR_4);
 if (VAR_21 == 0)
  VAR_21 = VAR_4;
 VAR_18 = 0;
 if ((VAR_16 % VAR_4) != 0) {
  FUNC_5("size not page aligned\n");
  return (VAR_1);
 }
 if (VAR_14 != ((void*)0) && VAR_15 != 0) {
  FUNC_5("cant have both va and pa!\n");
  return (VAR_1);
 }
 if ((((uintptr_t)VAR_15) % VAR_4) != 0) {
  FUNC_5("address not page aligned %p\n", VAR_14);
  return (VAR_1);
 }
 if (VAR_14 != ((void*)0)) {

  VAR_18 = FUNC_0(VAR_13);
  if (VAR_18)
   return (VAR_18);
 }
 while (VAR_16) {
  VAR_17 = VAR_21 - VAR_10;
  if (VAR_17 > VAR_16)
   VAR_17 = VAR_16;
  VAR_7 += VAR_17;
  VAR_11 -= VAR_17;
  if (VAR_7 >> 24) {
   FUNC_6(VAR_11, VAR_9);
   VAR_7 &= (1<<24) - 1;
  }
  if (VAR_11 <= VAR_12) {
   FUNC_7(VAR_6);
   if (VAR_12 > VAR_5)
    VAR_12 -= VAR_5;
   else
    VAR_12 = 0;
  }

  if (VAR_14) {
   VAR_18 = FUNC_2(VAR_13, VAR_14, 0, VAR_17);
   if (VAR_18)
    return (VAR_18);
   VAR_14 += VAR_17;
   VAR_16 -= VAR_17;
  } else {
   for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19 += VAR_4)
    VAR_8 = FUNC_4(VAR_15 + VAR_19, (VAR_19 + VAR_10) >> VAR_3);
   VAR_10 += VAR_17;
   VAR_15 += VAR_17;
   VAR_16 -= VAR_17;
   if (VAR_10 == VAR_21) {
    VAR_18 = FUNC_0(VAR_13);
    if (VAR_18)
     return (VAR_18);
   }
  }


  VAR_20 = FUNC_1();
  if (VAR_20 == 0x03)
   return (VAR_0);
  if (VAR_20 != -1)
   FUNC_5(" (CTRL-C to abort) ");
 }

 return (0);
}
