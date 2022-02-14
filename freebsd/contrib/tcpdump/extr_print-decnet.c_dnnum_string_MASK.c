
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_4__ {int (* ndo_error ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,size_t,char*,int,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;

const char *
FUNC_3(netdissect_options *VAR_3, u_short VAR_4)
{
 char *VAR_5;
 size_t VAR_6;
 int VAR_7 = (u_short)(VAR_4 & VAR_0) >> VAR_1;
 int VAR_8 = VAR_4 & VAR_2;

 VAR_5 = (char *)FUNC_0(VAR_6 = sizeof("00.0000"));
 if (VAR_5 == ((void*)0))
  (*VAR_3->ndo_error)(VAR_3, "dnnum_string: malloc");
 FUNC_1(VAR_5, VAR_6, "%d.%d", VAR_7, VAR_8);
 return(VAR_5);
}
