
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;


 scalar_t__ FUNC_0 (int,int const*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static char *
FUNC_2(
 int VAR_0,
 const fd_set* VAR_1
 )
{
 static char VAR_2[256];
 char * VAR_3 = VAR_2;

 VAR_0 = FUNC_1(VAR_0, 255);

 while (VAR_0 >= 0) {
  *VAR_3++ = FUNC_0(VAR_0, VAR_1) ? '#' : '-';
  VAR_0--;
 }
 *VAR_3 = '\0';

 return VAR_2;
}
