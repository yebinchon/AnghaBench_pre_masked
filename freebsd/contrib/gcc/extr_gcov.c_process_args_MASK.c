
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char**,char*,int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3 (int VAR_12, char **VAR_13)
{
  int VAR_14;

  while ((VAR_14 = FUNC_0 (VAR_12, VAR_13, "abcfhlno:puv", VAR_11, ((void*)0))) != -1)
    {
      switch (VAR_14)
 {
 case 'a':
   VAR_0 = 1;
   break;
 case 'b':
   VAR_1 = 1;
   break;
 case 'c':
   VAR_2 = 1;
   break;
 case 'f':
   VAR_3 = 1;
   break;
 case 'h':
   FUNC_1 (0);

 case 'l':
   VAR_5 = 1;
   break;
 case 'n':
   VAR_4 = 0;
   break;
 case 'o':
   VAR_8 = VAR_9;
   break;
 case 'p':
   VAR_6 = 1;
   break;
 case 'u':
   VAR_7 = 1;
   break;
 case 'v':
   FUNC_2 ();

 default:
   FUNC_1 (1);

 }
    }

  return VAR_10;
}
