
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;


 int FUNC_0 (int,char*,int) ;
 size_t FUNC_1 (int*) ;
 int FUNC_2 (int ) ;
 int* VAR_0 ;

__attribute__((used)) static int
FUNC_3(void)
{
 u_int VAR_1;
 int VAR_2;


 VAR_2 = FUNC_2(0);
 for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0); VAR_1++) {
  if (VAR_0[VAR_1] == VAR_2)
   break;
 }
 FUNC_0(VAR_1 < FUNC_1(VAR_0),
     "Unknown current scheduler %d", VAR_2);


 VAR_1++;
 if (VAR_1 >= FUNC_1(VAR_0))
  VAR_1 = 0;
 return VAR_0[VAR_1];
}
