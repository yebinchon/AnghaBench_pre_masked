
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char,int ) ;
 int VAR_0 ;
 char* FUNC_3 (int,int,int) ;
 char* FUNC_4 (int,int) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;

void FUNC_8()
  {int VAR_2;

   for (VAR_2=1; VAR_2<=VAR_1; VAR_2++)
     {int VAR_3, VAR_4;

      FUNC_0(VAR_0,
              "\n\n\n---------------------------------- %3.1d\n",VAR_2);

      VAR_4 = FUNC_5(VAR_2);
      for (VAR_3=0; VAR_3<VAR_4; VAR_3++)
        {int VAR_5, VAR_6;

         FUNC_0(VAR_0,"%s\n",FUNC_4(VAR_2,VAR_3));
         VAR_6 = FUNC_6(FUNC_7(VAR_2,VAR_3));
         for (VAR_5=0; VAR_5<VAR_6; VAR_5++)
            FUNC_0(VAR_0,"  %s\n",FUNC_3(VAR_2,VAR_3,VAR_5));
         if (VAR_3 == 0) FUNC_1("->\n",VAR_0);
              else
              FUNC_2('\n',VAR_0);
        }
     }
  }
