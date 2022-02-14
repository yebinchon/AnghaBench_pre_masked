
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_11)
{
 static char VAR_12[32];
 char *VAR_13 = VAR_12;

 if (VAR_11 & VAR_4)
  *VAR_13++ = 'E';
 if (VAR_11 & VAR_5)
  *VAR_13++ = 'I';
 if (VAR_11 & VAR_0)
  *VAR_13++ = 'c';
 if (VAR_11 & VAR_1)
  *VAR_13++ = 'C';
 if (VAR_11 & VAR_7)
  *VAR_13++ = 'P';
 if (VAR_11 & VAR_9)
  *VAR_13++ = 'S';
 if (VAR_11 & VAR_6)
  *VAR_13++ = 'B';
 if (VAR_11 & VAR_2)
  *VAR_13++ = 'A';
 if (VAR_11 & VAR_10)
  *VAR_13++ = 's';
 if (VAR_11 & VAR_8)
  *VAR_13++ = 'R';
 if (VAR_11 & VAR_3)
  *VAR_13++ = 'D';
 *VAR_13 = '\0';
 return VAR_12;
}
