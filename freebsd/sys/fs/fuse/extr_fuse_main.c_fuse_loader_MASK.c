
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
typedef int * eventhandler_tag ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int VAR_5 ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int,int *) ;

__attribute__((used)) static int
FUNC_11(struct module *VAR_6, int VAR_7, void *VAR_8)
{
 static eventhandler_tag VAR_9 = ((void*)0);
 int VAR_10 = 0;

 switch (VAR_7) {
 case 129:
  FUNC_7(&VAR_2, "fuse_mtx", ((void*)0), VAR_1);
  VAR_10 = FUNC_1();
  if (VAR_10) {
   FUNC_6(&VAR_2);
   return (VAR_10);
  }
  FUNC_4();
  FUNC_2();
  FUNC_3();
  FUNC_5();
  VAR_3 = FUNC_8("fusepbuf", VAR_5 / 2);


  if ((VAR_10 = FUNC_10(((void*)0), VAR_7, &VAR_4)))
   FUNC_0(VAR_9);
  break;
 case 128:
  if ((VAR_10 = FUNC_10(((void*)0), VAR_7, &VAR_4)))
   return (VAR_10);
  FUNC_0(VAR_9);
  FUNC_9(VAR_3);
  break;
 default:
  return (VAR_0);
 }

 return (VAR_10);
}
