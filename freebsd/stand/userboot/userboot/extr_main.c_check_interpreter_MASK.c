
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;


 int FUNC_0 (int ,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 char* FUNC_4 (char*,size_t,int ,size_t) ;
 int FUNC_5 (int ,int ) ;
 size_t FUNC_6 (int,char*,size_t) ;
 scalar_t__ FUNC_7 (int ,struct stat*) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 size_t FUNC_9 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_10(void)
{
 struct stat VAR_5;
 size_t VAR_6, VAR_7;
 const char *VAR_8, *VAR_9;
 char *VAR_10;
 int VAR_11;






 VAR_10 = ((void*)0);
 if (FUNC_7(VAR_1, &VAR_5) != 0)
  return;
 if ((VAR_11 = FUNC_5(VAR_1, VAR_2)) < 0)
  return;

 VAR_7 = VAR_5.st_size;
 VAR_10 = FUNC_3(VAR_7);
 if (VAR_10 == ((void*)0))
  goto out;
 if (FUNC_6(VAR_11, VAR_10, VAR_7) < VAR_7)
  goto out;

 VAR_6 = FUNC_9(VAR_0);
 VAR_9 = VAR_3 + VAR_6;







 if ((VAR_8 = FUNC_4(VAR_10, VAR_7, VAR_0,
     VAR_6)) != ((void*)0))
  VAR_8 += VAR_6;
 else
  VAR_8 = "4th";







 if (FUNC_8(VAR_9, VAR_8) != 0)
  FUNC_0(VAR_4, VAR_8);
out:
 FUNC_2(VAR_10);
 FUNC_1(VAR_11);
 return;
}
