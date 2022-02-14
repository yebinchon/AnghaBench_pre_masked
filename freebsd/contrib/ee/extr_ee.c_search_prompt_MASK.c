
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ) ;
 int VAR_2 ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 scalar_t__ FUNC_4 (char*) ;
 char FUNC_5 (char) ;
 char* VAR_7 ;

void
FUNC_6()
{
 if (VAR_6 != ((void*)0))
  FUNC_0(VAR_6);
 if ((VAR_7 != ((void*)0)) && (*VAR_7 != '\0'))
  FUNC_0(VAR_7);
 VAR_6 = FUNC_1(VAR_3, VAR_0);
 VAR_2 = VAR_0;
 VAR_5 = VAR_6;
 VAR_4 = VAR_7 = FUNC_2(FUNC_4(VAR_6) + 1);
 while (*VAR_5 != '\0')
 {
  *VAR_4 = FUNC_5(*VAR_5);
  VAR_4++;
  VAR_5++;
 }
 *VAR_4 = '\0';
 FUNC_3(VAR_1);
}
