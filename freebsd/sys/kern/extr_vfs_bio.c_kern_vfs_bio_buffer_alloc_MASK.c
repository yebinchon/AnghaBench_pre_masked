
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (char*,int,long) ;
 scalar_t__ VAR_12 ;

caddr_t
FUNC_3(caddr_t VAR_13, long VAR_14)
{
 int VAR_15;
 long VAR_16, VAR_17, VAR_18, VAR_19;





 VAR_14 = VAR_14 * (VAR_5 / 1024);

 FUNC_0();
 if (VAR_10 == 0) {
  int VAR_20 = 4 * VAR_0 / 1024;

  VAR_10 = 50;
  if (VAR_14 > 4096)
   VAR_10 += FUNC_1((VAR_14 - 4096) / VAR_20,
       65536 / VAR_20);
  if (VAR_14 > 65536)
   VAR_10 += FUNC_1((VAR_14 - 65536) * 2 / (VAR_20 * 5),
       32 * 1024 * 1024 / (VAR_20 * 5));

  if (VAR_9 && VAR_10 > VAR_9 / VAR_0)
   VAR_10 = VAR_9 / VAR_0;
  VAR_15 = 1;
 } else
  VAR_15 = 0;


 VAR_16 = (VAR_2 / 3) / VAR_0;
 if (VAR_10 > VAR_16) {
  if (!VAR_15)
   FUNC_2("Warning: nbufs lowered from %d to %ld\n", VAR_10,
       VAR_16);
  VAR_10 = VAR_16;
 }
 if (VAR_7 == 0 && VAR_12) {
  VAR_17 = VAR_9 != 0 ? VAR_9 : VAR_16 * VAR_0;
  VAR_18 = (long)VAR_10 * VAR_0;
  if (VAR_18 < VAR_17 / VAR_6 *
      (VAR_6 - 1)) {





   VAR_19 = VAR_17 - VAR_18;
  } else {





   VAR_19 = VAR_18 / VAR_6;
   VAR_18 -= VAR_19;
  }
  if (VAR_19 / VAR_1 > VAR_3)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_19 / VAR_3;




  if (VAR_7 > 1024)
   VAR_7 = 1024;
  if (VAR_15)
   VAR_10 = VAR_18 / VAR_0;
 }

 if (VAR_11 == 0) {
  VAR_11 = FUNC_1(VAR_10 / 4, 256);
  if (VAR_11 < VAR_4)
   VAR_11 = VAR_4;
 }




 VAR_8 = (void *)VAR_13;
 VAR_13 = (caddr_t)(VAR_8 + VAR_10);

 return(VAR_13);
}
