
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int (* leapsec_reader ) (void*) ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static char *
FUNC_2(
 leapsec_reader VAR_1,
 void * VAR_2,
 char * VAR_3,
 size_t VAR_4)
{
 int VAR_5;
 char *VAR_6;


 if (VAR_3 == ((void*)0) || VAR_4 == 0)
  return ((void*)0);

 VAR_6 = VAR_3;
 while (VAR_0 != (VAR_5 = (*VAR_1)(VAR_2)) && '\n' != VAR_5)
  if (VAR_4 > 1) {
   VAR_4--;
   *VAR_6++ = (char)VAR_5;
  }

 while (VAR_6 != VAR_3 && FUNC_0((u_char)VAR_6[-1]))
  VAR_6--;
 *VAR_6 = '\0';
 return (VAR_6 == VAR_3 && VAR_5 == VAR_0) ? ((void*)0) : VAR_3;
}
