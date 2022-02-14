
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
typedef int node_p ;
typedef TYPE_1__* hpriv_p ;
typedef int hook_p ;
struct TYPE_4__ {scalar_t__ rulenum; int hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (char const) ;
 TYPE_1__* FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_4(node_p VAR_5, hook_p VAR_6, const char *VAR_7)
{
 hpriv_p VAR_8;
 u_int16_t VAR_9;
 const char *VAR_10;
 char *VAR_11;


 if (VAR_7[0] == '0' && VAR_7[1] != '\0')
  return (VAR_0);


 for (VAR_10 = VAR_7; *VAR_10 != '\0'; VAR_10++)
  if (!FUNC_1(*VAR_10))
   return (VAR_0);


 VAR_9 = (u_int16_t)FUNC_3(VAR_7, &VAR_11, 10);
 if (*VAR_11 != '\0')
  return (VAR_0);


 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2, VAR_3 | VAR_4);
 if (VAR_8== ((void*)0))
  return (VAR_1);

 VAR_8->hook = VAR_6;
 VAR_8->rulenum = VAR_9;

 FUNC_0(VAR_6, VAR_8);

 return(0);
}
