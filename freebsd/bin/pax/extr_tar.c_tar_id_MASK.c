
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; int chksum; } ;
struct TYPE_3__ {int magic; } ;
typedef TYPE_1__ HD_USTAR ;
typedef TYPE_2__ HD_TAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (char*,int) ;

int
FUNC_3(char *VAR_4, int VAR_5)
{
 HD_TAR *VAR_6;
 HD_USTAR *VAR_7;

 if (VAR_5 < VAR_0)
  return(-1);
 VAR_6 = (HD_TAR *)VAR_4;
 VAR_7 = (HD_USTAR *)VAR_4;
 if (VAR_6->name[0] == '\0')
  return(-1);
 if (FUNC_1(VAR_7->magic, VAR_2, VAR_3 - 1) == 0)
  return(-1);
 if (FUNC_0(VAR_6->chksum,sizeof(VAR_6->chksum),VAR_1) != FUNC_2(VAR_4,VAR_0))
  return(-1);
 return(0);
}
