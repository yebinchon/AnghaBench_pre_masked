
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* buffer; scalar_t__ checksum; scalar_t__ offset; int length; } ;
typedef TYPE_1__ vpdbuf_t ;
typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static inline uint8_t *
FUNC_4(uint8_t *VAR_3, uint32_t VAR_4, const char *VAR_5)
{
 vpdbuf_t VAR_6;
 uint8_t *VAR_7 = ((void*)0);
 uint8_t VAR_8 = VAR_5[0];
 uint8_t VAR_9 = VAR_5[1];

 VAR_6.buffer = (uint8_t*) VAR_3;
 VAR_6.length = VAR_4;
 VAR_6.offset = 0;
 VAR_6.checksum = 0;

 while (!FUNC_1(&VAR_6)) {
  int VAR_10 = FUNC_2(&VAR_6);
  int VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;

  if (VAR_10 == VAR_2) {
   break;
  }

  VAR_11 = FUNC_2(&VAR_6);
  VAR_12 = FUNC_2(&VAR_6);
  VAR_13 = VAR_11 + (VAR_12 << 8);

  if ((VAR_10 == VAR_0) || (VAR_10 == VAR_1)) {
   while (VAR_13 > 0) {
    int VAR_15;
    int VAR_16;
    int VAR_17;
    uint8_t *VAR_18;

    VAR_15 = FUNC_2(&VAR_6);
    VAR_16 = FUNC_2(&VAR_6);


    VAR_18 = FUNC_3(&VAR_6);

    VAR_17 = FUNC_2(&VAR_6);


    VAR_13 -= (VAR_17 + 3);


    if ((VAR_8 == VAR_15) && (VAR_9 == VAR_16)) {
     VAR_7 = VAR_18;
     for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
      FUNC_2(&VAR_6);
     }

    } else if ('R' == VAR_15 && 'V' == VAR_16) {


     for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
      FUNC_2(&VAR_6);
     }


     if (VAR_6.checksum != 0) {
      FUNC_0(((void*)0), "checksum error\n");
      return ((void*)0);
     }
    }
    else
     for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
      FUNC_2(&VAR_6);
     }
   }
  }

  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
   FUNC_2(&VAR_6);
  }
 }

 return VAR_7;
}
