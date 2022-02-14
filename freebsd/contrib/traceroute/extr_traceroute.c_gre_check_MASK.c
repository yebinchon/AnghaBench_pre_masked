
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct grehdr {int callId; int proto; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;

int
FUNC_1(const u_char *VAR_2, int VAR_3)
{
 struct grehdr *const VAR_4 = (struct grehdr *) VAR_2;

 return(FUNC_0(VAR_4->proto) == VAR_1
     && FUNC_0(VAR_4->callId) == VAR_0 + VAR_3);
}
