
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (char*,int,size_t,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static size_t
FUNC_6(char *VAR_5, size_t VAR_6)
{
 size_t VAR_7, VAR_8;





 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {

  if (VAR_4 == 0) {
   VAR_2[VAR_8++] = VAR_5[VAR_7];
   VAR_4 = (VAR_5[VAR_7] == '\r');
   continue;
  }


  if (VAR_5[VAR_7] == '\0') {
   VAR_4 = 0;
   continue;
  }


  if (VAR_5[VAR_7] == '\n') {
   if (VAR_8 == 0) {
    if (FUNC_3(VAR_3) != 0) {
     int VAR_9 = FUNC_2(VAR_3, -1, VAR_1);
     FUNC_1(VAR_9 == 0);
     VAR_2[VAR_8++] = '\n';
    } else {

     FUNC_5(VAR_0,
         "Received LF as first character");
     FUNC_0();
    }
   } else
    VAR_2[VAR_8-1] = '\n';
   VAR_4 = 0;
   continue;
  }


  VAR_2[VAR_8++] = VAR_5[VAR_7];
  VAR_4 = (VAR_5[VAR_7] == '\r');
  continue;
 }

 return FUNC_4(VAR_2, 1, VAR_8, VAR_3);
}
