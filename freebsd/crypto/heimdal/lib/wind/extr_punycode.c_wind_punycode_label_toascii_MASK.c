
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,int) ;
 unsigned int VAR_1 ;
 char FUNC_1 (unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

int
FUNC_4(const uint32_t *VAR_6, size_t VAR_7,
       char *VAR_8, size_t *VAR_9)
{
    unsigned VAR_10 = VAR_3;
    unsigned VAR_11 = 0;
    unsigned VAR_12 = VAR_2;
    unsigned VAR_13 = 0;
    unsigned VAR_14;
    unsigned VAR_15;
    unsigned VAR_16 = 0;
    unsigned VAR_17;

    for (VAR_15 = 0; VAR_15 < VAR_7; ++VAR_15) {
 if (VAR_6[VAR_15] < 0x80) {
     ++VAR_13;
     if (VAR_16 >= *VAR_9)
  return VAR_0;
     VAR_8[VAR_16++] = VAR_6[VAR_15];
 }
    }
    VAR_14 = VAR_13;
    if (VAR_14 > 0) {
 if (VAR_16 >= *VAR_9)
     return VAR_0;
 VAR_8[VAR_16++] = 0x2D;
    }

    if (VAR_13 < VAR_7) {
 if (VAR_16 + 4 >= *VAR_9)
     return VAR_0;
 FUNC_3(VAR_8 + 4, VAR_8, VAR_16);
 FUNC_2(VAR_8, "xn--", 4);
 VAR_16 += 4;
    }

    while (VAR_13 < VAR_7) {
 VAR_17 = (unsigned)-1;
 for (VAR_15 = 0; VAR_15 < VAR_7; ++VAR_15)
     if(VAR_6[VAR_15] < VAR_17 && VAR_6[VAR_15] >= VAR_10)
  VAR_17 = VAR_6[VAR_15];

 VAR_11 += (VAR_17 - VAR_10) * (VAR_13 + 1);
 VAR_10 = VAR_17;
 for (VAR_15 = 0; VAR_15 < VAR_7; ++VAR_15) {
     if (VAR_6[VAR_15] < VAR_10) {
  ++VAR_11;
     } else if (VAR_6[VAR_15] == VAR_10) {
  unsigned VAR_18 = VAR_11;
  unsigned VAR_19;
  for (VAR_19 = VAR_1; ; VAR_19 += VAR_1) {
      unsigned VAR_20;
      if (VAR_19 <= VAR_12)
   VAR_20 = VAR_5;
      else if (VAR_19 >= VAR_12 + VAR_4)
   VAR_20 = VAR_4;
      else
   VAR_20 = VAR_19 - VAR_12;
      if (VAR_18 < VAR_20)
   break;
      if (VAR_16 >= *VAR_9)
   return VAR_0;
      VAR_8[VAR_16++] = FUNC_1(VAR_20 + ((VAR_18 - VAR_20) % (VAR_1 - VAR_20)));
      VAR_18 = (VAR_18 - VAR_20) / (VAR_1 - VAR_20);
  }
  if (VAR_16 >= *VAR_9)
      return VAR_0;
  VAR_8[VAR_16++] = FUNC_1(VAR_18);

  VAR_12 = FUNC_0(VAR_11, VAR_13 + 1, VAR_13 == VAR_14);
  VAR_11 = 0;
  ++VAR_13;
     }
 }
 ++VAR_11;
 ++VAR_10;
    }

    *VAR_9 = VAR_16;
    return 0;
}
