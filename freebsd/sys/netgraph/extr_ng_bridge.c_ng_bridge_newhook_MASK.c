
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* priv_p ;
typedef scalar_t__ node_p ;
typedef TYPE_2__* link_p ;
typedef int linkName ;
typedef int hook_p ;
struct TYPE_7__ {int hook; } ;
struct TYPE_6__ {int numLinks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int,int ,int) ;
 int FUNC_4 (char*,int,char*,char*,int ) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,int *,int) ;

__attribute__((used)) static int
FUNC_8(node_p VAR_8, hook_p VAR_9, const char *VAR_10)
{
 const priv_p VAR_11 = FUNC_1(VAR_8);


 if (FUNC_6(VAR_10) > FUNC_6(VAR_6)) {
  char VAR_12[VAR_7];
  u_int32_t VAR_13;
  link_p VAR_14;


  VAR_13 = FUNC_7(VAR_10 + FUNC_6(VAR_6),
      ((void*)0), 10);

  FUNC_4(VAR_12, sizeof(VAR_12),
    "%s%u", VAR_6,
    VAR_13);
  if (FUNC_5(VAR_12, VAR_10) != 0)
   return (VAR_0);

  if(FUNC_2(VAR_9) == VAR_8)
          return (VAR_1);

  VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_3,
         VAR_4|VAR_5);
  if (VAR_14 == ((void*)0))
   return (VAR_2);
  VAR_14->hook = VAR_9;
  FUNC_0(VAR_9, VAR_14);
  VAR_11->numLinks++;
  return (0);
 }


 return (VAR_0);
}
