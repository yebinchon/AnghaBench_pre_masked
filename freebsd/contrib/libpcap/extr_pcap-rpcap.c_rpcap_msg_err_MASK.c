
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,char*,int,int,char*,int) ;

__attribute__((used)) static void FUNC_3(SOCKET VAR_3, uint32 VAR_4, char *VAR_5)
{
 char VAR_6[VAR_0];

 if (VAR_4 >= VAR_0)
 {




  if (FUNC_2(VAR_3, VAR_5, VAR_0 - 1,
      VAR_2|VAR_1, VAR_6,
      VAR_0) == -1)
  {

   FUNC_0(VAR_5, VAR_0, "Read of error message from client failed: %s", VAR_6);
   return;
  }




  VAR_5[VAR_0 - 1] = '\0';




  (void)FUNC_1(VAR_3, VAR_4 - (VAR_0 - 1), VAR_5);
 }
 else if (VAR_4 == 0)
 {

  VAR_5[0] = '\0';
 }
 else
 {
  if (FUNC_2(VAR_3, VAR_5, VAR_4,
      VAR_2|VAR_1, VAR_6,
      VAR_0) == -1)
  {

   FUNC_0(VAR_5, VAR_0, "Read of error message from client failed: %s", VAR_6);
   return;
  }




  VAR_5[VAR_4] = '\0';
 }
}
