
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int macaddr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int ,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (char*,char*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_5(void)
{
 char *VAR_2;
 int VAR_3 = 0, VAR_4;
 uint32_t VAR_5[VAR_0];
 uint8_t VAR_6[VAR_0];





 if ((VAR_2 = FUNC_2("ethaddr")) != ((void*)0) ||
     (VAR_2 = FUNC_2("kmac")) != ((void*)0)) {
  VAR_3 = FUNC_4(VAR_2, "%x%*c%x%*c%x%*c%x%*c%x%*c%x",
      &VAR_5[0], &VAR_5[1],
      &VAR_5[2], &VAR_5[3],
      &VAR_5[4], &VAR_5[5]);

  if (VAR_3 < 6) {
   FUNC_3(VAR_5, 0,
       sizeof(VAR_5));
  } else {
   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    VAR_6[VAR_4] = VAR_5[VAR_4] & 0xff;
   (void) FUNC_0(VAR_1,
       VAR_6,
       0,
       0);
  }
  FUNC_1(VAR_2);
  return (0);
 }
 return (-1);
}
