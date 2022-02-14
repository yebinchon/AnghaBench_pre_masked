
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_3, const char *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(FUNC_2(VAR_3), VAR_1);
 FUNC_0(VAR_6 != -1, "fcntl(F_GETFD) failed; errno=%d", VAR_2);
 if (VAR_6 == -1)
  return;
 if (FUNC_3(VAR_4, 'e') != ((void*)0))
  VAR_5 = VAR_0;
 else
  VAR_5 = 0;
 FUNC_0((VAR_6 & VAR_0) == VAR_5,
     "bad cloexec flag; %d != %d", VAR_6, VAR_5);
}
