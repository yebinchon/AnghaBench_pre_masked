
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(char *VAR_4, short VAR_5)
{
 int VAR_6 = 0;
 FUNC_0(VAR_4, 0, VAR_0);
 if (VAR_5 & VAR_2)
  VAR_4[VAR_6++] = 'r';
 if (VAR_5 & VAR_3)
  VAR_4[VAR_6++] = 'w';
 if (VAR_5 & VAR_1)
  VAR_4[VAR_6++] = 'm';
}
