
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_2__ {scalar_t__ raw; } ;
struct be {int asnlen; TYPE_1__ data; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(netdissect_options *VAR_1, struct be *VAR_2)
{
 const u_char *VAR_3 = (const u_char *)VAR_2->data.raw;
 uint32_t VAR_4 = VAR_2->asnlen;
 uint32_t VAR_5;

 FUNC_1(*VAR_3, VAR_4);
 for (VAR_5 = VAR_4; VAR_5-- > 0; VAR_3++)
  FUNC_0((VAR_1, "_%.2x", *VAR_3));
 return 0;

trunc:
 FUNC_0((VAR_1, "%s", VAR_0));
 return -1;
}
