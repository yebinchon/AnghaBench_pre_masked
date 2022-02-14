
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {char* ap_str; int ap_policy; } ;


 TYPE_1__* VAR_0 ;
 size_t FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*) ;

ssize_t
FUNC_2(int VAR_1, size_t VAR_2, char *VAR_3)
{
 int VAR_4 = 1;
 int VAR_5 = 0;

 if (VAR_2 < 1)
  return (-1);
 VAR_3[0] = '\0';

 do {
  if (VAR_1 & VAR_0[VAR_5].ap_policy) {
   if (!VAR_4 && FUNC_0(VAR_3, ",", VAR_2) >= VAR_2)
    return (-1);
   if (FUNC_0(VAR_3, VAR_0[VAR_5].ap_str, VAR_2) >=
       VAR_2)
    return (-1);
   VAR_4 = 0;
  }
 } while (((void*)0) != VAR_0[++VAR_5].ap_str);

 return (FUNC_1(VAR_3));
}
