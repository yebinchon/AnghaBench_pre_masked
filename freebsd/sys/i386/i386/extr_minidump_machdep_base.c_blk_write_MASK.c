
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
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (size_t) ;
 int VAR_5 ;
 int FUNC_1 (struct dumperinfo*) ;
 int FUNC_2 () ;
 size_t VAR_6 ;
 int FUNC_3 (struct dumperinfo*,char*,int ,size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (char*,...) ;
 size_t VAR_9 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct dumperinfo *VAR_10, char *VAR_11, vm_paddr_t VAR_12, size_t VAR_13)
{
 size_t VAR_14;
 int VAR_15, VAR_16, VAR_17;
 u_int VAR_18;

 VAR_18 = FUNC_4(VAR_10->maxiosize, VAR_2 * VAR_4);
 if (VAR_18 == 0)
  VAR_18 = VAR_4;
 VAR_15 = 0;
 if ((VAR_13 % VAR_4) != 0) {
  FUNC_6("size not page aligned\n");
  return (VAR_1);
 }
 if (VAR_11 != ((void*)0) && VAR_12 != 0) {
  FUNC_6("cant have both va and pa!\n");
  return (VAR_1);
 }
 if (VAR_12 != 0 && (((uintptr_t)VAR_11) % VAR_4) != 0) {
  FUNC_6("address not page aligned\n");
  return (VAR_1);
 }
 if (VAR_11 != ((void*)0)) {

  VAR_15 = FUNC_1(VAR_10);
  if (VAR_15)
   return (VAR_15);
 }
 while (VAR_13) {
  VAR_14 = VAR_18 - VAR_8;
  if (VAR_14 > VAR_13)
   VAR_14 = VAR_13;
  VAR_6 += VAR_14;
  VAR_9 -= VAR_14;
  if (VAR_6 >> 24) {
   FUNC_6(" %lld", FUNC_0(VAR_9 >> VAR_3));
   VAR_6 &= (1<<24) - 1;
  }

  FUNC_7(VAR_5);

  if (VAR_11) {
   VAR_15 = FUNC_3(VAR_10, VAR_11, 0, VAR_14);
   if (VAR_15)
    return (VAR_15);
   VAR_11 += VAR_14;
   VAR_13 -= VAR_14;
  } else {
   for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16 += VAR_4)
    VAR_7 = FUNC_5(VAR_12 + VAR_16, (VAR_16 + VAR_8) >> VAR_3);
   VAR_8 += VAR_14;
   VAR_12 += VAR_14;
   VAR_13 -= VAR_14;
   if (VAR_8 == VAR_18) {
    VAR_15 = FUNC_1(VAR_10);
    if (VAR_15)
     return (VAR_15);
   }
  }


  VAR_17 = FUNC_2();
  if (VAR_17 == 0x03)
   return (VAR_0);
  if (VAR_17 != -1)
   FUNC_6(" (CTRL-C to abort) ");
 }

 return (0);
}
