
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*,int const*,int) ;

int
FUNC_2(netdissect_options *VAR_0, const u_char *VAR_1,const char *VAR_2,int VAR_3)
{
 if (VAR_3 < 0) {
          FUNC_0((VAR_0,"%sDissector error: print_unknown_data called with negative length",
      VAR_2));
  return(0);
 }
 if (VAR_0->ndo_snapend - VAR_1 < VAR_3)
  VAR_3 = VAR_0->ndo_snapend - VAR_1;
 if (VAR_3 < 0) {
          FUNC_0((VAR_0,"%sDissector error: print_unknown_data called with pointer past end of packet",
      VAR_2));
  return(0);
 }
        FUNC_1(VAR_0, VAR_2,VAR_1,VAR_3);
 return(1);
}
