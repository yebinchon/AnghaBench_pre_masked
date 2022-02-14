
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unshareline ;
typedef int shareline ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,int,int) ;
 int FUNC_3 (char*) ;

int
FUNC_4(int VAR_1, char **VAR_2)
{
 char VAR_3[VAR_0], VAR_4[VAR_0];
 int VAR_5;

 (void) FUNC_2(VAR_3, sizeof (VAR_3),
     "mkdir /tmp/nfsv4test.%d ; share /tmp/nfsv4test.%d", FUNC_1(),
     FUNC_1());
 (void) FUNC_2(VAR_4, sizeof (VAR_4),
     "unshare /tmp/nfsv4test.%d ; rmdir /tmp/nfsv4test.%d", FUNC_1(),
     FUNC_1());

 (void) FUNC_3(VAR_3);
 VAR_5 = FUNC_0();
 (void) FUNC_3(VAR_4);

 return (VAR_5);
}
