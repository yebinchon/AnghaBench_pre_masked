
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gid_t ;
typedef int cap_channel_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const**,int,int*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *,char const**,int*,int) ;

__attribute__((used)) static void
FUNC_5(cap_channel_t *VAR_2)
{
 cap_channel_t *VAR_3;
 const char *VAR_4[5];
 gid_t VAR_5[5];







 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4[0] = "wheel";
 VAR_4[1] = "daemon";
 VAR_4[2] = "kmem";
 VAR_4[3] = "sys";
 VAR_4[4] = "tty";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 5, ((void*)0), 0) == 0);
 VAR_5[0] = 0;
 VAR_5[1] = 1;
 VAR_5[2] = 2;
 VAR_5[3] = 3;
 VAR_5[4] = 4;

 FUNC_0(FUNC_4(VAR_3, VAR_4, VAR_5, 5));

 FUNC_2(VAR_3);







 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4[0] = "kmem";
 VAR_4[1] = "sys";
 VAR_4[2] = "tty";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 3, ((void*)0), 0) == 0);
 VAR_4[3] = "daemon";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 4, ((void*)0), 0) == -1 &&
     VAR_1 == VAR_0);
 VAR_4[0] = "daemon";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 1, ((void*)0), 0) == -1 &&
     VAR_1 == VAR_0);
 VAR_4[0] = "kmem";
 VAR_5[0] = 2;
 VAR_5[1] = 3;
 VAR_5[2] = 4;

 FUNC_0(FUNC_4(VAR_3, VAR_4, VAR_5, 3));

 FUNC_2(VAR_3);







 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4[0] = "wheel";
 VAR_4[1] = "kmem";
 VAR_4[2] = "tty";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 3, ((void*)0), 0) == 0);
 VAR_4[3] = "daemon";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 4, ((void*)0), 0) == -1 &&
     VAR_1 == VAR_0);
 VAR_4[0] = "daemon";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 1, ((void*)0), 0) == -1 &&
     VAR_1 == VAR_0);
 VAR_4[0] = "wheel";
 VAR_5[0] = 0;
 VAR_5[1] = 2;
 VAR_5[2] = 4;

 FUNC_0(FUNC_4(VAR_3, VAR_4, VAR_5, 3));

 FUNC_2(VAR_3);







 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4[0] = "kmem";
 VAR_4[1] = "sys";
 VAR_4[2] = "tty";
 VAR_5[0] = 2;
 VAR_5[1] = 3;
 VAR_5[2] = 4;
 FUNC_0(FUNC_3(VAR_3, ((void*)0), 0, VAR_5, 3) == 0);
 VAR_5[3] = 0;
 FUNC_0(FUNC_3(VAR_3, ((void*)0), 0, VAR_5, 4) == -1 &&
     VAR_1 == VAR_0);
 VAR_5[0] = 0;
 FUNC_0(FUNC_3(VAR_3, ((void*)0), 0, VAR_5, 1) == -1 &&
     VAR_1 == VAR_0);
 VAR_5[0] = 2;

 FUNC_0(FUNC_4(VAR_3, VAR_4, VAR_5, 3));

 FUNC_2(VAR_3);







 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4[0] = "wheel";
 VAR_4[1] = "kmem";
 VAR_4[2] = "tty";
 VAR_5[0] = 0;
 VAR_5[1] = 2;
 VAR_5[2] = 4;
 FUNC_0(FUNC_3(VAR_3, ((void*)0), 0, VAR_5, 3) == 0);
 VAR_5[3] = 1;
 FUNC_0(FUNC_3(VAR_3, ((void*)0), 0, VAR_5, 4) == -1 &&
     VAR_1 == VAR_0);
 VAR_5[0] = 1;
 FUNC_0(FUNC_3(VAR_3, ((void*)0), 0, VAR_5, 1) == -1 &&
     VAR_1 == VAR_0);
 VAR_5[0] = 0;

 FUNC_0(FUNC_4(VAR_3, VAR_4, VAR_5, 3));

 FUNC_2(VAR_3);







 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4[0] = "kmem";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 1, ((void*)0), 0) == 0);
 VAR_4[1] = "daemon";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 2, ((void*)0), 0) == -1 &&
     VAR_1 == VAR_0);
 VAR_4[0] = "daemon";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 1, ((void*)0), 0) == -1 &&
     VAR_1 == VAR_0);
 VAR_4[0] = "kmem";
 VAR_5[0] = 2;

 FUNC_0(FUNC_4(VAR_3, VAR_4, VAR_5, 1));

 FUNC_2(VAR_3);







 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4[0] = "wheel";
 VAR_4[1] = "tty";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 2, ((void*)0), 0) == 0);
 VAR_4[2] = "daemon";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 3, ((void*)0), 0) == -1 &&
     VAR_1 == VAR_0);
 VAR_4[0] = "daemon";
 FUNC_0(FUNC_3(VAR_3, VAR_4, 1, ((void*)0), 0) == -1 &&
     VAR_1 == VAR_0);
 VAR_4[0] = "wheel";
 VAR_5[0] = 0;
 VAR_5[1] = 4;

 FUNC_0(FUNC_4(VAR_3, VAR_4, VAR_5, 2));

 FUNC_2(VAR_3);







 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4[0] = "kmem";
 VAR_5[0] = 2;
 FUNC_0(FUNC_3(VAR_3, ((void*)0), 0, VAR_5, 1) == 0);
 VAR_5[1] = 1;
 FUNC_0(FUNC_3(VAR_3, ((void*)0), 0, VAR_5, 2) == -1 &&
     VAR_1 == VAR_0);
 VAR_5[0] = 1;
 FUNC_0(FUNC_3(VAR_3, ((void*)0), 0, VAR_5, 1) == -1 &&
     VAR_1 == VAR_0);
 VAR_5[0] = 2;

 FUNC_0(FUNC_4(VAR_3, VAR_4, VAR_5, 1));

 FUNC_2(VAR_3);







 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4[0] = "wheel";
 VAR_4[1] = "tty";
 VAR_5[0] = 0;
 VAR_5[1] = 4;
 FUNC_0(FUNC_3(VAR_3, ((void*)0), 0, VAR_5, 2) == 0);
 VAR_5[2] = 1;
 FUNC_0(FUNC_3(VAR_3, ((void*)0), 0, VAR_5, 3) == -1 &&
     VAR_1 == VAR_0);
 VAR_5[0] = 1;
 FUNC_0(FUNC_3(VAR_3, ((void*)0), 0, VAR_5, 1) == -1 &&
     VAR_1 == VAR_0);
 VAR_5[0] = 0;

 FUNC_0(FUNC_4(VAR_3, VAR_4, VAR_5, 2));

 FUNC_2(VAR_3);
}
