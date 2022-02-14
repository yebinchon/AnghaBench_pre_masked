
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_4__ {int ndo_suppress_default_print; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*,int) ;
 int FUNC_1 (TYPE_1__*,int const*,int,int,int *,int *) ;

__attribute__((used)) static u_int
FUNC_2(netdissect_options *VAR_0,
              const u_char *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0), ((void*)0));
 if (VAR_4 < 0) {

  if (!VAR_0->ndo_suppress_default_print)
   FUNC_0(VAR_1, VAR_3);
  VAR_4 = -VAR_4;
 }
 return (VAR_4);
}
