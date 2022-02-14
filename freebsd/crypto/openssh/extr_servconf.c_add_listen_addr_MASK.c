
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {size_t num_ports; int* ports; } ;
typedef TYPE_1__ ServerOptions ;


 int FUNC_0 (TYPE_1__*,char const*,char const*,int) ;

__attribute__((used)) static void
FUNC_1(ServerOptions *VAR_0, const char *VAR_1,
    const char *VAR_2, int VAR_3)
{
 u_int VAR_4;

 if (VAR_3 > 0)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 else {
  for (VAR_4 = 0; VAR_4 < VAR_0->num_ports; VAR_4++) {
   FUNC_0(VAR_0, VAR_1, VAR_2,
       VAR_0->ports[VAR_4]);
  }
 }
}
