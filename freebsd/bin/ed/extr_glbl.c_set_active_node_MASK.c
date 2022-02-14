
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 size_t VAR_2 ;
 int ** VAR_3 ;
 size_t VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int **,int) ;
 int VAR_7 ;
 char* FUNC_5 (int ) ;

int
FUNC_6(line_t *VAR_8)
{
 if (VAR_2 + 1 > VAR_4) {
  size_t VAR_9 = VAR_4;
  line_t **VAR_10;
  FUNC_1();



   if ((VAR_10 = (line_t **) FUNC_4(VAR_3,
       (VAR_9 += VAR_1) * sizeof(line_t *))) == ((void*)0)) {
    FUNC_2(VAR_7, "%s\n", FUNC_5(VAR_6));
    VAR_5 = "out of memory";
    FUNC_0();
    return VAR_0;
   }
  VAR_4 = VAR_9;
  VAR_3 = VAR_10;
  FUNC_0();
 }
 VAR_3[VAR_2++] = VAR_8;
 return 0;
}
