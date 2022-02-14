
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtextget {char* status_xml; size_t alloc_len; scalar_t__ status; } ;
typedef int extget ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtextget*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,unsigned long,int ) ;
 char* FUNC_3 (size_t) ;

int
FUNC_4(int VAR_2, unsigned long VAR_3, char **VAR_4)
{
 size_t VAR_5 = 32768;
 struct mtextget VAR_6;
 int VAR_7;

 *VAR_4 = ((void*)0);

 for (;;) {
  FUNC_0(&VAR_6, sizeof(VAR_6));
  *VAR_4 = FUNC_3(VAR_5);
  if (*VAR_4 == ((void*)0))
   return (-1);
  VAR_6.status_xml = *VAR_4;
  VAR_6.alloc_len = VAR_5;

  VAR_7 = FUNC_2(VAR_2, VAR_3, (caddr_t)&VAR_6);
  if (VAR_7 == 0 && VAR_6.status == VAR_1)
   break;

  FUNC_1(*VAR_4);
  *VAR_4 = ((void*)0);

  if (VAR_7 != 0 || VAR_6.status != VAR_0)
   return (-1);


  VAR_5 *= 2;
 }
 return (0);
}
