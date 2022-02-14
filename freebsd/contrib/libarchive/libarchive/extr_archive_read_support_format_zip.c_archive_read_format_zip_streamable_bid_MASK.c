
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;


 char* FUNC_0 (struct archive_read*,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_0, int VAR_1)
{
 const char *VAR_2;

 (void)VAR_1;

 if ((VAR_2 = FUNC_0(VAR_0, 4, ((void*)0))) == ((void*)0))
  return (-1);
 if (VAR_2[0] == 'P' && VAR_2[1] == 'K') {
  if ((VAR_2[2] == '\001' && VAR_2[3] == '\002')
      || (VAR_2[2] == '\003' && VAR_2[3] == '\004')
      || (VAR_2[2] == '\005' && VAR_2[3] == '\006')
      || (VAR_2[2] == '\006' && VAR_2[3] == '\006')
      || (VAR_2[2] == '\007' && VAR_2[3] == '\010')
      || (VAR_2[2] == '0' && VAR_2[3] == '0'))
   return (29);
 }






 return (0);
}
