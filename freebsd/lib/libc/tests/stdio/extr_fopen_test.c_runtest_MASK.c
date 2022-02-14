
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char const*) ;
 int * FUNC_6 (char const*,char) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_8, const char *VAR_9)
{
 FILE *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_10 = FUNC_5(VAR_8, VAR_9);
 FUNC_0(VAR_10 != ((void*)0),
     "fopen(\"%s\", \"%s\") failed", VAR_8, VAR_9);
 VAR_13 = FUNC_4(VAR_10);
 FUNC_0(VAR_13 >= 0, "fileno() failed for fopen");
 VAR_11 = FUNC_6(VAR_9, 'e') != ((void*)0) ? VAR_1 : 0;
 FUNC_0((VAR_12 = FUNC_3(VAR_13, VAR_2)) == VAR_11,
     "fcntl(.., F_GETFD) didn't FD_CLOEXEC as expected %d != %d",
     VAR_11, VAR_12);
 VAR_14 = FUNC_3(VAR_13, VAR_3);
 if (FUNC_6(VAR_9, '+'))
  VAR_15 = VAR_6 | (*VAR_9 == 'a' ? VAR_4 : 0);
 else if (*VAR_9 == 'r')
  VAR_15 = VAR_5;
 else if (*VAR_9 == 'w')
  VAR_15 = VAR_7;
 else if (*VAR_9 == 'a')
  VAR_15 = VAR_7 | VAR_4;
 else
  VAR_15 = -1;
 FUNC_2(VAR_10);
 if (VAR_15 == -1)
  FUNC_1("unrecognized mode: %s", VAR_9);
 else if ((VAR_14 & (VAR_0 | VAR_4)) != VAR_15)
  FUNC_1("incorrect access mode: %s", VAR_9);
}
