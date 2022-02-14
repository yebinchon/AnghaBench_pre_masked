
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* h_hostname; int h_netswap; int h_netroot; } ;
typedef TYPE_1__ host ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (int *,int ,char*) ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_0, host *VAR_1)
{
  int VAR_2 = 0;

  FUNC_0(VAR_0, "%s\troot=", VAR_1->h_hostname);
  VAR_2 += FUNC_2(VAR_0, VAR_1->h_netroot, VAR_1->h_hostname);
  FUNC_1(" swap=", VAR_0);
  VAR_2 += FUNC_2(VAR_0, VAR_1->h_netswap, VAR_1->h_hostname);
  FUNC_1("\n", VAR_0);

  return 0;
}
