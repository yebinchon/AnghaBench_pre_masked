
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int id ;
typedef int gdb_wince_id ;
typedef int WCHAR ;
 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (char*,int,int*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_16 (int VAR_2)
{
  gdb_wince_id VAR_3;


  while (FUNC_9 (L"Dispatch", VAR_2, &VAR_3, sizeof (VAR_3)) > 0)
    {
      VAR_1 = 1;
      switch (VAR_3)
 {
 case 139:
   FUNC_3 (VAR_2);
   break;
 case 131:
   FUNC_11 (VAR_2);
   break;
 case 129:
   FUNC_13 (VAR_2);
   break;
 case 138:
   FUNC_5 (VAR_2);
   break;
 case 135:
   FUNC_8 (VAR_2);
   break;
 case 137:
   FUNC_6 (VAR_2);
   break;
 case 128:
   FUNC_14 (VAR_2);
   break;
 case 130:
   FUNC_12 (VAR_2);
   break;
 case 132:
   FUNC_10 (VAR_2);
   break;
 case 136:
   FUNC_7 (VAR_2);
   break;
 case 140:
   FUNC_2 (VAR_2);
   break;
 case 141:
   FUNC_1 (VAR_2);
   break;
 case 133:
   FUNC_11 (VAR_2);
   return;
 case 134:
   FUNC_4 (VAR_2);
   break;
 default:
   {
     WCHAR VAR_4[80];
     FUNC_15 (VAR_4, L"Invalid command id received: %d", VAR_3);
     FUNC_0 (((void*)0), VAR_4, L"GDB", VAR_0);
     VAR_1 = 0;
   }
 }
    }
}
