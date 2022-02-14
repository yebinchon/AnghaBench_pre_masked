
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int u_char ;
typedef int sub ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char const*) ;
 char const FUNC_3 (int ) ;

int
FUNC_4(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 char VAR_3[1024];
 int VAR_4;
 int VAR_5;
 u_int VAR_6, VAR_7, VAR_8 = FUNC_2(VAR_1);

 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_8;) {

  if (VAR_1[VAR_6] == '!') {
   VAR_4 = 1;
   VAR_6++;
  } else
   VAR_4 = 0;





  for (VAR_7 = 0;
      VAR_6 < VAR_8 && VAR_7 < sizeof(VAR_3) - 1 && VAR_1[VAR_6] != ',';
      VAR_7++, VAR_6++)
   VAR_3[VAR_7] = VAR_2 && FUNC_0((u_char)VAR_1[VAR_6]) ?
       FUNC_3((u_char)VAR_1[VAR_6]) : VAR_1[VAR_6];

  if (VAR_7 >= sizeof(VAR_3) - 1)
   return 0;


  if (VAR_6 < VAR_8 && VAR_1[VAR_6] == ',')
   VAR_6++;


  VAR_3[VAR_7] = '\0';


  if (FUNC_1(VAR_0, VAR_3)) {
   if (VAR_4)
    return -1;
   else
    VAR_5 = 1;
  }
 }





 return VAR_5;
}
