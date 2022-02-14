
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int visbuf ;
typedef int resp ;
typedef int rbuf ;
typedef int ch ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int,int *,char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_5 ;

int
FUNC_5(void)
{
 char VAR_6, *VAR_7, VAR_8, VAR_9[2048], VAR_10[2048];

 if (FUNC_0(VAR_3, VAR_4, &VAR_8, sizeof(VAR_8)) != sizeof(VAR_8))
  FUNC_2(0);

 VAR_7 = VAR_9;
 switch (VAR_8) {
 case 0:
  return (0);
 default:
  *VAR_7++ = VAR_8;

 case 1:
 case 2:
  do {
   if (FUNC_0(VAR_3, VAR_4, &VAR_6, sizeof(VAR_6)) != sizeof(VAR_6))
    FUNC_2(0);
   *VAR_7++ = VAR_6;
  } while (VAR_7 < &VAR_9[sizeof(VAR_9) - 1] && VAR_6 != '\n');

  if (!VAR_2) {
   VAR_7[-1] = '\0';
   (void) FUNC_3(VAR_10, sizeof(VAR_10),
       ((void*)0), "%s\n", VAR_9);
   (void) FUNC_0(VAR_5, VAR_0,
       VAR_10, FUNC_4(VAR_10));
  }
  ++VAR_1;
  if (VAR_8 == 1)
   return (-1);
  FUNC_1(1);
 }

}
