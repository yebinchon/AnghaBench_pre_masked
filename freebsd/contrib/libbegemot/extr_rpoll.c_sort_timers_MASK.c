
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
typedef int ptrdiff_t ;
struct TYPE_2__ {scalar_t__ func; } ;


 int* FUNC_0 (int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int,int,int ) ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(void)
{
 int *VAR_7;
 u_int VAR_8;

 if(VAR_6 > VAR_1) {
  VAR_1 = VAR_6;
  VAR_0 = FUNC_0(VAR_0, sizeof(int *) * VAR_1);
 }

 VAR_7 = VAR_0;

 for(VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  if(VAR_4[VAR_8].func)
   *VAR_7++ = VAR_8;
 FUNC_1(VAR_7 - VAR_0 == (ptrdiff_t)VAR_6);

 VAR_2 = VAR_6;
 if(VAR_2 > 1)
  FUNC_2(VAR_0, VAR_2, sizeof(int), VAR_3);
}
