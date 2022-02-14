
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, int VAR_1, int VAR_2,
 char * const *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 char *VAR_12;




 VAR_9 = VAR_1 - VAR_0;
 VAR_10 = VAR_2 - VAR_1;
 VAR_8 = FUNC_0(VAR_9, VAR_10);
 VAR_5 = (VAR_2 - VAR_0) / VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_4 = VAR_1+VAR_6;
  VAR_11 = VAR_4;
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   if (VAR_11 >= VAR_1)
    VAR_11 -= VAR_9;
   else
    VAR_11 += VAR_10;
   VAR_12 = VAR_3[VAR_11];

   ((char **) VAR_3)[VAR_11] = VAR_3[VAR_4];

   ((char **)VAR_3)[VAR_4] = VAR_12;
  }
 }
}
