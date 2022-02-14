
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tftp_handle {int tftp_blksize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_1(struct tftp_handle *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return (VAR_5);

 VAR_4 =
     (unsigned int)FUNC_0(VAR_2, &VAR_3, 0);






 if (*VAR_3 == '\0' && VAR_4 >= 8 &&
     VAR_4 <= VAR_0) {
  VAR_1->tftp_blksize = VAR_4;
  VAR_5 = 1;
 }

 return (VAR_5);
}
