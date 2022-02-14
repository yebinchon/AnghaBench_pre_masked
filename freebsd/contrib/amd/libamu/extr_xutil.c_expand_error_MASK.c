
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_1, char *VAR_2, size_t VAR_3)
{
  const char *VAR_4;
  char *VAR_5;
  int VAR_6 = VAR_0;
  size_t VAR_7 = 0, VAR_8;

  *VAR_2 = '\0';
  for (VAR_4 = VAR_1, VAR_5 = VAR_2; VAR_7 < VAR_3 && (*VAR_5 = *VAR_4); VAR_7++, VAR_5++, VAR_4++) {
    if (VAR_4[0] == '%' && VAR_4[1] == 'm') {
      if (VAR_7 >= VAR_3)
 break;
      FUNC_2(VAR_5, FUNC_0(VAR_6), VAR_3 - VAR_7);
      VAR_8 = FUNC_1(VAR_5);
      if (VAR_8 != 0)
   VAR_8--;
      VAR_7 += VAR_8;
      VAR_5 += VAR_8;
      VAR_4++;
    }
  }
  VAR_2[VAR_3 - 1] = '\0';
  return VAR_2;
}
