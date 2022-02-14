
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,void*,int) ;
 int FUNC_6 (void*,char,int) ;
 int VAR_9 ;
 int FUNC_7 (int,char*,int) ;
 scalar_t__ FUNC_8 (int,int ,int ,int*,int) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int*) ;
 int FUNC_10 (int,char*,int) ;

void
FUNC_11(void *VAR_10, void *VAR_11, char VAR_12, int VAR_13)
{
 char VAR_14[VAR_1];
 char VAR_15[VAR_1];
 ssize_t VAR_16;
 ssize_t VAR_17;
 int VAR_18[2];
 int VAR_19;

 VAR_19 = VAR_1;

 if (VAR_13 != 0)
  (void)FUNC_5(VAR_15, VAR_10, VAR_1);

 if (FUNC_9(VAR_0, VAR_5, VAR_4, VAR_18) != 0)
  FUNC_1("socketpair() failed");

 VAR_19 = VAR_1;

 if (FUNC_8(VAR_18[1], VAR_6, VAR_7, &VAR_19, sizeof(VAR_19)) != 0)
  FUNC_1("setsockopt() failed, SO_RCVBUF");

 VAR_19 = VAR_1;

 if (FUNC_8(VAR_18[0], VAR_6, VAR_8, &VAR_19, sizeof(VAR_19)) != 0)
  FUNC_1("setsockopt() failed, SO_SNDBUF");

 if (FUNC_3(VAR_18[0], VAR_2, VAR_3) != 0)
  FUNC_1("fcntl() failed");

 VAR_16 = FUNC_10(VAR_18[0], (char *)VAR_10 + VAR_9, VAR_1 - VAR_9);

 if (VAR_16 == -1)
  FUNC_1("write() failed");


 (void)FUNC_6(VAR_11, VAR_12, VAR_1);

 VAR_17 = FUNC_7(VAR_18[1], VAR_14 + VAR_9, VAR_1 - VAR_9);

 if (VAR_17 == -1)
  FUNC_1("read() failed");

 if (VAR_17 != VAR_16)
  FUNC_1("too short read");

 if (VAR_13 != 0 && FUNC_4(VAR_15, VAR_14 + VAR_9, VAR_17) != 0)
  FUNC_1("data mismatch");

 FUNC_0(FUNC_2(VAR_18[0]) == 0);
 FUNC_0(FUNC_2(VAR_18[1]) == 0);
}
