
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_1__* rpc_gss_principal_t ;
struct TYPE_3__ {int len; scalar_t__ name; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(rpc_gss_principal_t VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 uint8_t *VAR_4;

 VAR_2 = VAR_0->len;
 VAR_4 = (uint8_t *) VAR_0->name;
 while (VAR_2 > 0) {
  VAR_3 = VAR_2;
  if (VAR_3 > 16)
   VAR_3 = 16;
  for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++)
   FUNC_1("%02x ", VAR_4[VAR_1]);
  for (; VAR_1 < 16; VAR_1++)
   FUNC_1("   ");
  FUNC_1("|");
  for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++)
   FUNC_1("%c", FUNC_0(VAR_4[VAR_1]) ? VAR_4[VAR_1] : '.');
  FUNC_1("|\n");
  VAR_2 -= VAR_3;
  VAR_4 += VAR_3;
 }
}
