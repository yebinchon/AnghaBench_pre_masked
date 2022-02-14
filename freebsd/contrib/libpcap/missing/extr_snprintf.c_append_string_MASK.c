
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {scalar_t__ (* append_char ) (struct state*,char) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct state*,char) ;
 scalar_t__ FUNC_2 (struct state*,char) ;
 scalar_t__ FUNC_3 (struct state*,char) ;
 scalar_t__ FUNC_4 (struct state*,char) ;

__attribute__((used)) static int
FUNC_5 (struct state *VAR_1,
        unsigned char *VAR_2,
        int VAR_3,
        int VAR_4,
        int VAR_5)
{
  if(VAR_4 != -1)
    VAR_3 -= VAR_4;
  else
    VAR_3 -= FUNC_0((char *)VAR_2);
  if(!(VAR_5 & VAR_0))
    while(VAR_3-- > 0)
      if((*VAR_1->append_char) (VAR_1, ' '))
 return 1;
  if (VAR_4 != -1) {
    while (*VAR_2 && VAR_4--)
      if ((*VAR_1->append_char) (VAR_1, *VAR_2++))
 return 1;
  } else {
    while (*VAR_2)
      if ((*VAR_1->append_char) (VAR_1, *VAR_2++))
 return 1;
  }
  if(VAR_5 & VAR_0)
    while(VAR_3-- > 0)
      if((*VAR_1->append_char) (VAR_1, ' '))
 return 1;
  return 0;
}
