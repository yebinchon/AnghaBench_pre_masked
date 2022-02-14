
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {char* name; int flags; } ;
typedef TYPE_1__ pcap_if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static u_int
FUNC_3(pcap_if_t *VAR_6)
{
 const char *VAR_7;
 u_int VAR_8;

 if (FUNC_1(VAR_6->name, "any") == 0) {





  VAR_8 = 0x1FFFFFFF;
 } else {







  VAR_7 = VAR_6->name + FUNC_2(VAR_6->name) - 1;
  while (VAR_7-1 >= VAR_6->name && *(VAR_7-1) >= '0' && *(VAR_7-1) <= '9')
   VAR_7--;
  if (*VAR_7 >= '0' && *VAR_7 <= '9')
   VAR_8 = FUNC_0(VAR_7) + 1;
  else
   VAR_8 = 0;
 }
 if (!(VAR_6->flags & VAR_3))
  VAR_8 |= 0x80000000;
 if (!(VAR_6->flags & VAR_4))
  VAR_8 |= 0x40000000;
 if (!(VAR_6->flags & VAR_5) &&
     (VAR_6->flags & VAR_0) == VAR_1)
  VAR_8 |= 0x20000000;





 if (VAR_6->flags & VAR_2)
  VAR_8 |= 0x10000000;

 return (VAR_8);
}
