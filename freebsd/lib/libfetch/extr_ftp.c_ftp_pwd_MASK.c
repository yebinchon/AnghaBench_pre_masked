
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ err; char* buf; int buflen; } ;
typedef TYPE_1__ conn_t ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_1(conn_t *VAR_4, char *VAR_5, size_t VAR_6)
{
 char *VAR_7, *VAR_8, *VAR_9;
 int VAR_10;

 if (VAR_4->err != VAR_3 &&
     VAR_4->err != VAR_0)
  return (VAR_2);
 VAR_9 = VAR_4->buf + VAR_4->buflen;
 VAR_7 = VAR_4->buf + 4;
 if (VAR_7 >= VAR_9 || *VAR_7++ != '"')
  return (VAR_2);
 for (VAR_10 = 0, VAR_8 = VAR_5; VAR_7 < VAR_9 && VAR_6--; ++VAR_7) {
  if (!VAR_10 && *VAR_7 == '"')
   VAR_10 = 1;
  else if (VAR_10 && *VAR_7 != '"')
   break;
  else if (VAR_10)
   *VAR_8++ = '"', VAR_10 = 0;
  else
   *VAR_8++ = *VAR_7;
 }
 if (!VAR_6)
  return (VAR_2);
 *VAR_8 = '\0';



 return (VAR_1);
}
