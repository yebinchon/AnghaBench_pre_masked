
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 size_t FUNC_1 (char*,int,size_t,int ) ;

__attribute__((used)) static size_t
FUNC_2(char *VAR_2, size_t VAR_3, int VAR_4)
{
 size_t VAR_5;
 static size_t VAR_6 = 0, VAR_7 = 0;
 static int VAR_8 = -1;

 if (VAR_4) {
  VAR_8 = -1;
  VAR_6 = 0;
  VAR_7 = 0;
  return 0 ;
 }




 VAR_5 = 0;

 if (VAR_8 != -1) {
  VAR_2[VAR_5++] = VAR_8;
  VAR_8 = -1;
 }

 while (VAR_5 < VAR_3) {
  if (VAR_6 == VAR_7) {

   if (FUNC_0(VAR_1)) break;


   VAR_7 = FUNC_1(VAR_0, 1, VAR_3, VAR_1);
   if (VAR_7 == 0) break;
   VAR_6 = 0;
  }


  if (VAR_0[VAR_6] == '\r') {
   VAR_2[VAR_5++] = '\r';
   VAR_2[VAR_5++] = '\0';
   VAR_6++;
   continue;
  }


  if (VAR_0[VAR_6] == '\n') {
   VAR_2[VAR_5++] = '\r';
   VAR_2[VAR_5++] = '\n';
   VAR_6++;
   continue;
  }

  VAR_2[VAR_5++] = VAR_0[VAR_6++];
 }

 if (VAR_5 > VAR_3) {




  VAR_8 = VAR_2[VAR_5-1];
 }

 if (VAR_5 < VAR_3) {

  return VAR_5;
 } else
  return VAR_3;

}
