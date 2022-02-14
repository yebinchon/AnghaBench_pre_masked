
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static inline char *FUNC_0(int VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 char *VAR_8 = VAR_4;

 if (VAR_5 > (VAR_2 - 1))
  VAR_5 = VAR_2 - 1;

 if (VAR_6) {
  VAR_8[VAR_7] = VAR_1;
  VAR_7++;
  VAR_5--;
 }

 while (--VAR_5 >= 0)
  VAR_8[VAR_7++] = VAR_0;

 VAR_8[VAR_7] = VAR_3;
 return VAR_8;
}
