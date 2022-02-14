
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_2, char *VAR_3[])
{
 int VAR_4;
 int VAR_5;
 char VAR_6[80];

 VAR_5 = 0;
 FUNC_2();
 for (VAR_4 = 1; (VAR_4 < VAR_2) && (VAR_5 == 0); VAR_4++) {
  FUNC_4(VAR_6, sizeof(VAR_6), "*** FILE %s BEGIN ***\n",
      VAR_3[VAR_4]);
  if (FUNC_3(VAR_6))
   break;
  VAR_5 = FUNC_0(VAR_3[VAR_4]);
  if (!VAR_5) {
   FUNC_4(VAR_6, sizeof(VAR_6), "*** FILE %s END ***\n",
       VAR_3[VAR_4]);
   VAR_5 = FUNC_3(VAR_6);
  }
 }
 FUNC_1();

 if (VAR_5 == 0)
  return (VAR_1);
 else
  return (VAR_0);
}
