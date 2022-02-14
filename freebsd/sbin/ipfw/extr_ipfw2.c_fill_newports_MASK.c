
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int len; } ;
struct TYPE_5__ {TYPE_1__ o; int * ports; } ;
typedef TYPE_2__ ipfw_insn_u16 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char**,int ,int) ;
 int FUNC_3 (char*,char,char*) ;

__attribute__((used)) static int
FUNC_4(ipfw_insn_u16 *VAR_2, char *VAR_3, int VAR_4, int VAR_5)
{
 uint16_t VAR_6, VAR_7, *VAR_8 = VAR_2->ports;
 int VAR_9 = 0;
 char *VAR_10 = VAR_3;

 while (*VAR_10) {
  VAR_6 = FUNC_2(VAR_3, &VAR_10, 0, VAR_4);
  if (VAR_10 == VAR_3)
   return (0);

  FUNC_0(VAR_5, VAR_9 + 2);

  switch (*VAR_10) {
  case '-':
   VAR_3 = VAR_10 + 1;
   VAR_7 = FUNC_2(VAR_3, &VAR_10, 0, VAR_4);

   if (VAR_10 == VAR_3 || (*VAR_10 != ',' && *VAR_10 != '\0'))
    return (0);
   VAR_8[0] = VAR_6;
   VAR_8[1] = VAR_7;
   break;
  case ',':
  case '\0':
   VAR_8[0] = VAR_8[1] = VAR_6;
   break;
  default:
   FUNC_3("port list: invalid separator <%c> in <%s>",
    *VAR_10, VAR_3);
   return (0);
  }

  VAR_9++;
  VAR_8 += 2;
  VAR_3 = VAR_10 + 1;
 }
 if (VAR_9 > 0) {
  if (VAR_9 + 1 > VAR_1)
   FUNC_1(VAR_0, "too many ports/ranges\n");
  VAR_2->o.len |= VAR_9 + 1;
 }
 return (VAR_9);
}
