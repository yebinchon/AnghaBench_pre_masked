
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpio {scalar_t__ error; int buf; scalar_t__ bufpos; scalar_t__ buflen; scalar_t__ eof; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct httpio*,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, char *VAR_3, int VAR_4)
{
 struct httpio *VAR_5 = (struct httpio *)VAR_2;
 int VAR_6;

 if (VAR_5->error)
  return (-1);
 if (VAR_5->eof)
  return (0);


 if (!VAR_5->buf || VAR_5->bufpos == VAR_5->buflen) {
  if ((VAR_6 = FUNC_0(VAR_5, VAR_4)) < 0) {
   if ((VAR_1 = VAR_5->error) == VAR_0)
    VAR_5->error = 0;
   return (-1);
  } else if (VAR_6 == 0) {
   return (0);
  }
 }

 VAR_6 = VAR_5->buflen - VAR_5->bufpos;
 if (VAR_4 < VAR_6)
  VAR_6 = VAR_4;
 FUNC_1(VAR_3, VAR_5->buf + VAR_5->bufpos, VAR_6);
 VAR_5->bufpos += VAR_6;
 return (VAR_6);
}
