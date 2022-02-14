
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct h6namemem {int dummy; } ;
struct TYPE_4__ {int (* ndo_error ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;

struct h6namemem *
FUNC_2(netdissect_options *VAR_0)
{
 register struct h6namemem *VAR_1;
 static struct h6namemem *VAR_2 = ((void*)0);
 static u_int VAR_3 = 0;

 if (VAR_3 <= 0) {
  VAR_3 = 64;
  VAR_2 = (struct h6namemem *)FUNC_0(VAR_3, sizeof (*VAR_2));
  if (VAR_2 == ((void*)0))
   (*VAR_0->ndo_error)(VAR_0, "newh6namemem: calloc");
 }
 --VAR_3;
 VAR_1 = VAR_2++;
 return (VAR_1);
}
