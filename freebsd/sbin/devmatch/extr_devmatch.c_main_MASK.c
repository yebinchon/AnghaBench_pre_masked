
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,void*) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (int,char**,char*,int ,int *) ;
 void* VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_9 () ;
 int * VAR_9 ;
 int FUNC_10 (int *,int *,int *) ;
 int VAR_10 ;
 int FUNC_11 () ;
 int VAR_11 ;

int
FUNC_12(int VAR_12, char **VAR_13)
{
 int VAR_14;

 while ((VAR_14 = FUNC_8(VAR_12, VAR_13, "adh:p:uv",
      VAR_5, ((void*)0))) != -1) {
  switch (VAR_14) {
  case 'a':
   VAR_1++;
   break;
  case 'd':
   VAR_2++;
   break;
  case 'h':
   VAR_4 = VAR_7;
   break;
  case 'p':
   VAR_6 = VAR_7;
   break;
  case 'u':
   VAR_10++;
   break;
  case 'v':
   VAR_11++;
   break;
  default:
   FUNC_11();
  }
 }
 VAR_12 -= VAR_8;
 VAR_13 += VAR_8;

 if (VAR_12 >= 1)
  FUNC_11();

 FUNC_9();
 if (VAR_2) {
  FUNC_10(((void*)0), ((void*)0), ((void*)0));
  FUNC_6(0);
 }

 if (FUNC_3())
  FUNC_4(1, "devinfo_init");
 if ((VAR_9 = FUNC_2(VAR_0)) == ((void*)0))
  FUNC_5(1, "can't find root device");
 if (VAR_6 != ((void*)0))
  FUNC_7(VAR_6);
 else
  FUNC_0(VAR_9, VAR_3, (void *)0);
 FUNC_1();
}
