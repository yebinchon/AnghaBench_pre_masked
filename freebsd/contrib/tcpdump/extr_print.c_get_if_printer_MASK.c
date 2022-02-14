
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* ndo_error ) (TYPE_1__*,char*,int) ;} ;
typedef TYPE_1__ netdissect_options ;
typedef int * if_printer ;


 int * FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*,char const*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;

if_printer
FUNC_4(netdissect_options *VAR_0, int VAR_1)
{
 const char *VAR_2;
 if_printer VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == ((void*)0)) {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 != ((void*)0))
   (*VAR_0->ndo_error)(VAR_0,
       "packet printing is not supported for link type %s: use -w",
       VAR_2);
  else
   (*VAR_0->ndo_error)(VAR_0,
       "packet printing is not supported for link type %d: use -w", VAR_1);
 }
 return VAR_3;
}
