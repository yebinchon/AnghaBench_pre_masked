
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char**,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int ,int,int,int,int,int) ;
 int FUNC_2 (int ,int,int,int,int,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_3, char *VAR_4[])
{
 acl_type_t VAR_5 = VAR_0;
 int VAR_6 = 0;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_10 = 0;
 VAR_11 = 0;
 VAR_12 = 0;
 VAR_13 = 0;
 VAR_14 = 0;
 while ((VAR_7 = FUNC_0(VAR_3, VAR_4, "dhinqv")) != -1)
  switch(VAR_7) {
  case 'd':
   VAR_5 = VAR_1;
   break;
  case 'h':
   VAR_10 = 1;
   break;
  case 'i':
   VAR_11 = 1;
   break;
  case 'n':
   VAR_13 = 1;
   break;
  case 'q':
   VAR_12 = 1;
   break;
  case 'v':
   VAR_14 = 1;
   break;
  default:
   FUNC_4();
   return(-1);
  }
 VAR_3 -= VAR_2;
 VAR_4 += VAR_2;

 if (VAR_3 == 0) {
  VAR_8 = FUNC_2(VAR_5, VAR_10, VAR_11, VAR_13,
      VAR_12, VAR_14);
  return(VAR_8 ? 1 : 0);
 }

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (!FUNC_3(VAR_4[VAR_9], "-")) {
   VAR_8 = FUNC_2(VAR_5, VAR_10, VAR_11, VAR_13,
       VAR_12, VAR_14);
   if (VAR_8 == -1)
    VAR_6 = -1;
  } else {
   VAR_8 = FUNC_1(VAR_4[VAR_9], VAR_5, VAR_10, VAR_11, VAR_13,
       VAR_12, VAR_14);
   if (VAR_8 == -1)
    VAR_6 = -1;
  }
 }

 return(VAR_6 ? 1 : 0);
}
