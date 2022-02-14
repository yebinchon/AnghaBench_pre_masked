
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void (*) (void*),int ,char*,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (char*,...) ;
 void FUNC_5 (void*) ;
 int FUNC_6 (void (*) (void*)) ;

__attribute__((used)) static void
FUNC_7(void *VAR_4)
{
 static int VAR_5;
 int VAR_6, VAR_7;
 bool VAR_8 = ((uintptr_t)VAR_4 % 2) == 0;

 for (VAR_6 = 0; VAR_6 < 1000; VAR_6++) {
  FUNC_2(&VAR_3);
  FUNC_6(FUNC_7);
  if (VAR_5 >= VAR_1-1) {
   FUNC_3(&VAR_3);
   break;
  }
  VAR_7 = FUNC_1(FUNC_7, VAR_8 ? 0 : VAR_2,
      "haa", 0, &VAR_3);
  if (VAR_8)
   FUNC_3(&VAR_3);
  if (VAR_7 != 0)
   FUNC_4("mtsleep failed");
 }

 FUNC_2(&VAR_3);
 VAR_5++;
 FUNC_6(FUNC_7);

 VAR_7 = FUNC_1(FUNC_5, VAR_2, "kepuli", 1, &VAR_3);
 if (VAR_7 != VAR_0)
  FUNC_4("mtsleep unexpected return value %d", VAR_7);

 FUNC_0(0);
}
