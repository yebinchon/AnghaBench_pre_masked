
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 size_t FUNC_2 (char const*) ;
 char FUNC_3 (char const) ;

size_t
FUNC_4(
 const char * VAR_2,
 char * VAR_3,
 size_t VAR_4,
 char * VAR_5,
 size_t VAR_6
 )
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 size_t VAR_10;
 size_t VAR_11;


 if (VAR_4 < 1 || VAR_6 < 1)
  return 0;

 VAR_10 = FUNC_2(VAR_2);


 VAR_8 = 0;
 VAR_9 = VAR_1;
 for (VAR_7 = 0; VAR_9 && VAR_7 <= VAR_10; VAR_7++) {
  switch (VAR_2[VAR_7]) {

  case '\t':
  case '\n':
  case '\r':
  case ' ':
   break;

  case '=':
   VAR_9 = VAR_0;
   break;

  default:
   if (VAR_8 < VAR_4)
    VAR_3[VAR_8++] = FUNC_3(VAR_2[VAR_7]);
  }
 }

 VAR_8 = FUNC_0(VAR_8, VAR_4 - 1);
 VAR_3[VAR_8] = '\0';


 VAR_5[0] = '\0';
 VAR_8 = 0;
 for (VAR_11 = 0; VAR_7 < VAR_10; VAR_7++) {
  if (VAR_2[VAR_7] > 0x0D && VAR_2[VAR_7] != ' ')
   VAR_11 = FUNC_0(VAR_8 + 1, VAR_6 - 1);

  if (VAR_5[0] != '\0' ||
      (VAR_2[VAR_7] > 0x0D && VAR_2[VAR_7] != ' ')) {
   if (VAR_8 < VAR_6)
    VAR_5[VAR_8++] = VAR_2[VAR_7];
  }
 }
 VAR_5[VAR_11] = '\0';

 if (VAR_5[0] == '"') {
  VAR_11--;
  FUNC_1(VAR_5, &VAR_5[1], VAR_6);
  if (VAR_11 > 0 && VAR_5[VAR_11 - 1] == '"') {
   VAR_11--;
   VAR_5[VAR_11] = '\0';
  }
 }

 return VAR_11;
}
