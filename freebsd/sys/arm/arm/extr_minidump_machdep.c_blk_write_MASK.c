
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int u_int ;
struct dumperinfo {int maxiosize; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (size_t) ;
 int VAR_6 ;
 int FUNC_1 (struct dumperinfo*) ;
 int FUNC_2 () ;
 size_t VAR_7 ;
 int FUNC_3 (struct dumperinfo*,char*,int ,size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,...) ;
 size_t VAR_10 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct dumperinfo *VAR_11, char *VAR_12, vm_paddr_t VAR_13, size_t VAR_14)
{
 size_t VAR_15;
 int VAR_16, VAR_17, VAR_18;
 u_int VAR_19;

 VAR_19 = FUNC_4(VAR_11->maxiosize, VAR_2 * VAR_5);
 if (VAR_19 == 0)
  VAR_19 = VAR_5;
 VAR_16 = 0;
 if (VAR_12 != ((void*)0) && VAR_13 != 0) {
  FUNC_6("cant have both va and pa!\n");
  return (VAR_1);
 }
 if (VAR_13 != 0) {
  if ((VAR_14 % VAR_5) != 0) {
   FUNC_6("size not page aligned\n");
   return (VAR_1);
  }
  if ((VAR_13 & VAR_3) != 0) {
   FUNC_6("address not page aligned\n");
   return (VAR_1);
  }
 }
 if (VAR_12 != ((void*)0)) {

  VAR_16 = FUNC_1(VAR_11);
  if (VAR_16)
   return (VAR_16);
 }
 while (VAR_14) {
  VAR_15 = VAR_19 - VAR_9;
  if (VAR_15 > VAR_14)
   VAR_15 = VAR_14;
  VAR_7 += VAR_15;
  VAR_10 -= VAR_15;
  if (VAR_7 >> 22) {
   FUNC_6(" %lld", FUNC_0(VAR_10 >> VAR_4));
   VAR_7 &= (1<<22) - 1;
  }




  if (VAR_12) {
   VAR_16 = FUNC_3(VAR_11, VAR_12, 0, VAR_15);
   if (VAR_16)
    return (VAR_16);
   VAR_12 += VAR_15;
   VAR_14 -= VAR_15;
  } else {
   for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17 += VAR_5)
    VAR_8 = FUNC_5(VAR_13 + VAR_17,
        (VAR_17 + VAR_9) >> VAR_4);
   VAR_9 += VAR_15;
   VAR_13 += VAR_15;
   VAR_14 -= VAR_15;
   if (VAR_9 == VAR_19) {
    VAR_16 = FUNC_1(VAR_11);
    if (VAR_16)
     return (VAR_16);
   }
  }


  VAR_18 = FUNC_2();
  if (VAR_18 == 0x03)
   return (VAR_0);
  if (VAR_18 != -1)
   FUNC_6(" (CTRL-C to abort) ");
 }

 return (0);
}
