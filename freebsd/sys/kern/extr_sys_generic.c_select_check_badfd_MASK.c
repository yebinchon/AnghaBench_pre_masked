
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int fd_set ;
typedef int fd_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2(fd_set *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 char *VAR_8, *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 uint8_t VAR_13;

 if (VAR_5 >= VAR_6 || VAR_4 == ((void*)0))
  return (0);

 VAR_9 = ((void*)0);
 VAR_13 = 0;
 for (VAR_11 = VAR_5; VAR_11 < VAR_6; VAR_11++) {
  VAR_10 = VAR_11 / VAR_2;

  VAR_8 = (char *)VAR_4 + VAR_10;
  if (VAR_8 != VAR_9) {
   VAR_12 = FUNC_0(VAR_8);
   if (VAR_12 == -1)
    return (VAR_1);
   VAR_9 = VAR_8;
   VAR_13 = VAR_12;
  }
  if ((VAR_13 & (1 << (VAR_11 % VAR_2))) != 0)
   return (VAR_0);
 }
 return (0);
}
