
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(const uint32_t *VAR_1, size_t VAR_2,
 uint32_t *VAR_3, size_t *VAR_4)
{
    unsigned VAR_5;
    int VAR_6;
    unsigned VAR_7 = 0;
    int VAR_8;

    for (VAR_5 = 0; VAR_5 < VAR_2;) {
 while (VAR_5 < VAR_2 && FUNC_0(VAR_1[VAR_5]) != 0) {
     VAR_3[VAR_7++] = VAR_1[VAR_5++];
 }
 if (VAR_5 < VAR_2) {
     if (VAR_7 >= *VAR_4)
  return VAR_0;
     VAR_6 = VAR_7;
     VAR_3[VAR_7++] = VAR_1[VAR_5++];
     VAR_8 = -1;

     while (VAR_5 < VAR_2) {
  uint32_t VAR_9;
  uint32_t VAR_10[2];
  int VAR_11;

  VAR_10[0] = VAR_3[VAR_6];
  VAR_10[1] = VAR_1[VAR_5];

  VAR_11 = FUNC_0(VAR_1[VAR_5]);
  if (VAR_8 != VAR_11 && (VAR_9 = FUNC_1(VAR_10, 2))) {
      VAR_3[VAR_6] = VAR_9;
  } else if (VAR_11 == 0) {
      break;
  } else {
      if (VAR_7 >= *VAR_4)
   return VAR_0;
      VAR_3[VAR_7++] = VAR_1[VAR_5];
      VAR_8 = VAR_11;
  }
  ++VAR_5;
     }
 }
    }
    *VAR_4 = VAR_7;
    return 0;
}
