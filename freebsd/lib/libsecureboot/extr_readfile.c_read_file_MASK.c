
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char const*,int ) ;
 unsigned char* FUNC_3 (int,size_t) ;

unsigned char *
FUNC_4(const char *VAR_1, size_t *VAR_2)
{
 struct stat VAR_3;
 unsigned char *VAR_4;
 int VAR_5;

     if (VAR_2)
  *VAR_2 = 0;
 if ((VAR_5 = FUNC_2(VAR_1, VAR_0)) < 0)
  return (((void*)0));
 FUNC_1(VAR_5, &VAR_3);
 VAR_4 = FUNC_3(VAR_5, VAR_3.st_size);
 FUNC_0(VAR_5);
 if (VAR_2 != ((void*)0) && VAR_4 != ((void*)0))
  *VAR_2 = VAR_3.st_size;
 return (VAR_4);
}
