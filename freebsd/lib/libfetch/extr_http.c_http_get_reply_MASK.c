
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; char err; } ;
typedef TYPE_1__ conn_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(conn_t *VAR_1)
{
 char *VAR_2;

 if (FUNC_0(VAR_1) == -1)
  return (-1);
 if (FUNC_2(VAR_1->buf, "HTTP", 4) != 0)
  return (VAR_0);
 VAR_2 = VAR_1->buf + 4;
 if (*VAR_2 == '/') {
  if (VAR_2[1] != '1' || VAR_2[2] != '.' || (VAR_2[3] != '0' && VAR_2[3] != '1'))
   return (VAR_0);
  VAR_2 += 4;
 }
 if (*VAR_2 != ' ' ||
     !FUNC_1((unsigned char)VAR_2[1]) ||
     !FUNC_1((unsigned char)VAR_2[2]) ||
     !FUNC_1((unsigned char)VAR_2[3]))
  return (VAR_0);

 VAR_1->err = (VAR_2[1] - '0') * 100 + (VAR_2[2] - '0') * 10 + (VAR_2[3] - '0');
 return (VAR_1->err);
}
