
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
typedef int * hook_p ;
struct TYPE_3__ {int lowerOrphan; int * lower; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(node_p VAR_5, hook_p VAR_6, const char *VAR_7)
{
 const priv_p VAR_8 = FUNC_0(VAR_5);
 u_char VAR_9 = VAR_8->lowerOrphan;
 hook_p *VAR_10;


 if (FUNC_1(VAR_7, VAR_2) == 0)
  VAR_7 = VAR_3;


 if (FUNC_1(VAR_7, VAR_3) == 0) {
  VAR_10 = &VAR_8->lower;
  VAR_9 = 0;
 } else if (FUNC_1(VAR_7, VAR_4) == 0) {
  VAR_10 = &VAR_8->lower;
  VAR_9 = 1;
 } else
  return (VAR_0);


 if (*VAR_10 != ((void*)0))
  return (VAR_1);


 *VAR_10 = VAR_6;
 VAR_8->lowerOrphan = VAR_9;
 return (0);
}
