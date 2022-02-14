
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int clocktime_t ;
struct TYPE_2__ {unsigned char* onebits; unsigned char* zerobits; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 unsigned long FUNC_1 (unsigned char*,int,int *) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static unsigned long
FUNC_3(
    unsigned char *VAR_5,
    int VAR_6,
    clocktime_t *VAR_7
    )
{
 register unsigned char *VAR_8 = VAR_5;
 register unsigned char *VAR_9 = VAR_5 + VAR_6;
 register unsigned char *VAR_10 = VAR_4.onebits;
 register unsigned char *VAR_11 = VAR_4.zerobits;
 register unsigned VAR_12 = VAR_3;
 register unsigned int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 unsigned char VAR_18[9];
 for (VAR_13 = 0; VAR_13 < 9; VAR_13++)
 {
  VAR_18[VAR_13] = 0;
 }

 VAR_16 = 0;
 VAR_14 = 0;





 while (VAR_8 < VAR_9)
 {
  register unsigned int VAR_19 = *VAR_8 ^ 0xFF;



  if (!((VAR_19+1) & VAR_19) || !*VAR_8)
  {



   for (VAR_13 = 0; VAR_19; VAR_13++)
   {
    VAR_19 >>= 1;
   }

   *VAR_8 = VAR_13;
   VAR_18[VAR_13]++;
   VAR_16 += VAR_13;
   VAR_14++;
  }
  else
  {



   FUNC_2(("parse: cvt_rawdcf: character check for 0x%x@%ld FAILED\n",
     (u_int)*VAR_8, (long)(VAR_8 - VAR_5)));
   *VAR_8 = (unsigned char)~0;
   VAR_12 = VAR_2|VAR_1;
  }
  VAR_8++;
 }





 if (VAR_14)
 {
  VAR_16 /= VAR_14;
 }
 else
 {
  VAR_16 = 4;
 }

 FUNC_2(("parse: cvt_rawdcf: average bit count: %d\n", VAR_16));

 VAR_14 = 0;
 VAR_15 = 0;




 FUNC_2(("parse: cvt_rawdcf: histogram:"));
 for (VAR_13 = 0; VAR_13 <= VAR_16; VAR_13++)
 {
  VAR_14 += VAR_18[VAR_13] * VAR_13;
  VAR_15 += VAR_18[VAR_13];
  FUNC_2((" %d", VAR_18[VAR_13]));
 }
 FUNC_2((" <M>"));




 VAR_14 += VAR_15 / 2;






 if (VAR_15)
 {
  VAR_14 /= VAR_15;
 }
 else
 {
  VAR_14 = 0;
 }

 VAR_15 = 0;
 VAR_16 = 0;




 for (; VAR_13 < 9; VAR_13++)
 {
  VAR_15+=VAR_18[VAR_13] * VAR_13;
  VAR_16 +=VAR_18[VAR_13];
  FUNC_2((" %d", VAR_18[VAR_13]));
 }
 FUNC_2(("\n"));




 if (VAR_16)
 {
  VAR_15 /= VAR_16;
 }
 else
 {
  VAR_15 = 9 -1;
 }
 VAR_17 = VAR_16 = VAR_14;
 for (VAR_13 = VAR_14; VAR_13 <= VAR_15; VAR_13++)
 {
  if (VAR_18[VAR_16] > VAR_18[VAR_13])
  {




   VAR_16 = VAR_17 = VAR_13;
  }
  else
      if (VAR_18[VAR_16] == VAR_18[VAR_13])
      {




       VAR_17 = VAR_13;
      }
 }





 VAR_16 = (VAR_16 + VAR_17) / 2;

 FUNC_2(("parse: cvt_rawdcf: lower maximum %d, higher maximum %d, cutoff %d\n", VAR_14, VAR_15, VAR_16));




 VAR_8 = VAR_5;
 while ((VAR_8 < VAR_9) && *VAR_11 && *VAR_10)
 {
  if (*VAR_8 == (unsigned char)~0)
  {



   *VAR_8 = '?';
  }
  else
  {



   *VAR_8 = (*VAR_8 >= VAR_16) ? *VAR_10 : *VAR_11;
  }
  VAR_8++;
  VAR_10++;
  VAR_11++;
 }





 if (VAR_12 != VAR_3)
 {
  FUNC_0("%-30s", "*** BAD DATA");
 }

 return (VAR_12 == VAR_3) ? FUNC_1(VAR_5, VAR_6, VAR_7) : VAR_12;
}
