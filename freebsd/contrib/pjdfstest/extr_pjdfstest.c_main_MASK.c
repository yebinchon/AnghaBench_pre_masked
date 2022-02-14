
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_desc {int dummy; } ;


 unsigned int FUNC_0 (struct syscall_desc*,char**) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct syscall_desc* FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (unsigned char) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_3 ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char*,char**,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;

int
FUNC_12(int VAR_4, char *VAR_5[])
{
 struct syscall_desc *VAR_6;
 unsigned int VAR_7;
 char *VAR_8, *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_10 = -1;
 VAR_8 = ((void*)0);
 VAR_11 = 0;

 while ((VAR_12 = FUNC_4(VAR_4, VAR_5, "g:u:U:")) != -1) {
  switch(VAR_12) {
  case 'g':
   VAR_8 = VAR_1;
   break;
  case 'u':
   VAR_10 = (int)FUNC_9(VAR_1, &VAR_9, 0);
   if (*VAR_9 != '\0' && !FUNC_5((unsigned char)*VAR_9)) {
    FUNC_3(VAR_3, "invalid uid '%s' - number "
        "expected\n", VAR_1);
    FUNC_1(1);
   }
   break;
  case 'U':
   VAR_11 = (int)FUNC_9(VAR_1, &VAR_9, 0);
   if (*VAR_9 != '\0' && !FUNC_5((unsigned char)*VAR_9)) {
    FUNC_3(VAR_3, "invalid umask '%s' - number "
        "expected\n", VAR_1);
    FUNC_1(1);
   }
   break;
  default:
   FUNC_11();
  }
 }
 VAR_4 -= VAR_2;
 VAR_5 += VAR_2;

 if (VAR_4 < 1) {
  FUNC_3(VAR_3, "too few arguments\n");
  FUNC_11();
 }

 if (VAR_8 != ((void*)0)) {
  FUNC_3(VAR_3, "changing groups to %s\n", VAR_8);
  FUNC_6(VAR_8);
 }
 if (VAR_10 != -1) {
  FUNC_3(VAR_3, "changing uid to %d\n", VAR_10);
  if (FUNC_7(VAR_10) < 0) {
   FUNC_3(VAR_3, "cannot change uid: %s\n",
       FUNC_8(VAR_0));
   FUNC_1(1);
  }
 }


 FUNC_10(VAR_11);

 for (;;) {
  VAR_6 = FUNC_2(VAR_5[0]);
  if (VAR_6 == ((void*)0)) {
   FUNC_3(VAR_3, "syscall '%s' not supported\n",
       VAR_5[0]);
   FUNC_1(1);
  }
  VAR_4++;
  VAR_5++;
  VAR_7 = FUNC_0(VAR_6, VAR_5);
  VAR_4 += VAR_7;
  VAR_5 += VAR_7;
  if (VAR_5[0] == ((void*)0))
   break;
  VAR_4++;
  VAR_5++;
 }

 FUNC_1(0);
}
