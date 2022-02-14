
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lock_quick_type ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,int ,int *) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char const*,int,int,char const*,int) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 () ;
 int VAR_3 ;
 int FUNC_9 (char const*,char const*,int,int) ;

int
FUNC_10(int VAR_4, char* VAR_5[])
{
 int VAR_6;
 const char* VAR_7 = VAR_0;
 const char* VAR_8 = ((void*)0);
 const char* VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 1;





 FUNC_5(((void*)0), 0, ((void*)0));
 VAR_9 = FUNC_7(VAR_5[0],'/')?FUNC_7(VAR_5[0],'/')+1:VAR_5[0];
 FUNC_4(VAR_9);

 while( (VAR_6=FUNC_1(VAR_4, VAR_5, "c:dhpvw:")) != -1) {
  switch(VAR_6) {
  case 'c':
   VAR_7 = VAR_1;



   break;
  case 'v':
   VAR_10++;
   VAR_3++;
   break;
  case 'p':
   VAR_12 = 0;
   break;
  case 'd':
   VAR_11++;
   break;
  case 'w':
   VAR_8 = VAR_1;
   break;
  case '?':
  case 'h':
  default:
   FUNC_8();
   return 1;
  }
 }
 VAR_4 -= VAR_2;


 if(VAR_8) {




  FUNC_0("option not supported");

 }

 if(VAR_4 != 0) {
  FUNC_8();
  return 1;
 }

 FUNC_6(VAR_7, VAR_10, VAR_11, VAR_9, VAR_12);
 FUNC_5(((void*)0), 0, ((void*)0));

 if(FUNC_3()) {
  FUNC_2((lock_quick_type*)FUNC_3());
 }

 return 0;
}
