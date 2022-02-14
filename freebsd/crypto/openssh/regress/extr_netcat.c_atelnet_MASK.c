
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (int ,int,unsigned char*,int) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;

void
FUNC_2(int VAR_6, unsigned char *VAR_7, unsigned int VAR_8)
{
 unsigned char *VAR_9, *VAR_10;
 unsigned char VAR_11[4];

 if (VAR_8 < 3)
  return;
 VAR_10 = VAR_7 + VAR_8 - 2;

 for (VAR_9 = VAR_7; VAR_9 < VAR_10; VAR_9++) {
  if (*VAR_9 != VAR_2)
   continue;

  VAR_11[0] = VAR_2;
  VAR_9++;
  if ((*VAR_9 == VAR_3) || (*VAR_9 == VAR_4))
   VAR_11[1] = VAR_1;
  else if ((*VAR_9 == VAR_0) || (*VAR_9 == VAR_1))
   VAR_11[1] = VAR_4;
  else
   continue;

  VAR_9++;
  VAR_11[2] = *VAR_9;
  if (FUNC_0(VAR_5, VAR_6, VAR_11, 3) != 3)
   FUNC_1("Write Error!");
 }
}
