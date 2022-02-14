
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int * h_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hostent*) ;
 struct hostent* FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct hostent*,struct hostent*) ;
 int FUNC_4 (struct hostent*,int *) ;
 int FUNC_5 (struct hostent*,int ,int) ;
 int FUNC_6 (char*,...) ;
 int * FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(struct hostent *VAR_1, char *VAR_2)
{
 struct hostent *VAR_3;
 int VAR_4;




 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3 != ((void*)0)) {




  VAR_4 = FUNC_4(VAR_3, ((void*)0));
  if (VAR_4 != 0) {
   FUNC_1(VAR_3);
   return (VAR_4);
  }

  FUNC_3(VAR_1, VAR_3);
  FUNC_1(VAR_3);
 } else {



   FUNC_5(VAR_1, 0, sizeof(struct hostent));
  VAR_1->h_name = FUNC_7(VAR_2);
  FUNC_0(VAR_1->h_name != ((void*)0));
 }
 return (0);
}
