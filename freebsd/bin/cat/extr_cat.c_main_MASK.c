
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_whence; int l_type; scalar_t__ l_start; scalar_t__ l_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,struct flock*) ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (char**,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int FUNC_8 () ;
 void* VAR_15 ;

int
FUNC_9(int VAR_16, char *VAR_17[])
{
 int VAR_18;
 struct flock VAR_19;

 FUNC_7(VAR_3, "");

 while ((VAR_18 = FUNC_4(VAR_16, VAR_17, "belnstuv")) != -1)
  switch (VAR_18) {
  case 'b':
   VAR_6 = VAR_9 = 1;
   break;
  case 'e':
   VAR_7 = VAR_15 = 1;
   break;
  case 'l':
   VAR_8 = 1;
   break;
  case 'n':
   VAR_9 = 1;
   break;
  case 's':
   VAR_12 = 1;
   break;
  case 't':
   VAR_14 = VAR_15 = 1;
   break;
  case 'u':
   FUNC_6(VAR_13, ((void*)0));
   break;
  case 'v':
   VAR_15 = 1;
   break;
  default:
   FUNC_8();
  }
 VAR_17 += VAR_10;

 if (VAR_8) {
  VAR_19.l_len = 0;
  VAR_19.l_start = 0;
  VAR_19.l_type = VAR_2;
  VAR_19.l_whence = VAR_4;
  if (FUNC_3(VAR_5, VAR_1, &VAR_19) == -1)
   FUNC_0(VAR_0, "stdout");
 }

 if (VAR_6 || VAR_7 || VAR_9 || VAR_12 || VAR_14 || VAR_15)
  FUNC_5(VAR_17, 1);
 else
  FUNC_5(VAR_17, 0);
 if (FUNC_2(VAR_13))
  FUNC_0(1, "stdout");
 FUNC_1(VAR_11);

}
