
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostent {scalar_t__ h_addrtype; scalar_t__ h_name; } ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 struct hostent* FUNC_2 (char*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_3 (char*,char*) ;

void
FUNC_4(char **VAR_5)
{





  if (VAR_3.flags & VAR_2) {
    struct hostent *VAR_6;
    VAR_6 = FUNC_2(*VAR_5);
    if (VAR_6 && VAR_6->h_addrtype == VAR_0) {
      FUNC_0("Hostname %s normalized to %s", *VAR_5, VAR_6->h_name);
      *VAR_5 = FUNC_3(*VAR_5, (char *) VAR_6->h_name);
    }
  }
  if (VAR_3.flags & VAR_1) {
    FUNC_1(*VAR_5, VAR_4);
  }
}
