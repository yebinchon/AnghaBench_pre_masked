
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sbuf {int dummy; } ;
struct priv {scalar_t__ enabled; int sscf; scalar_t__ lower; scalar_t__ upper; } ;
typedef int node_p ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*) ;
 int FUNC_6 (struct sbuf*,char*,int ,int ) ;
 int FUNC_7 (struct sbuf*,char*,...) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(node_p VAR_0, struct priv *VAR_1, char *VAR_2, u_int VAR_3)
{
 struct sbuf VAR_4;

 FUNC_6(&VAR_4, VAR_2, VAR_3, 0);

 if (VAR_1->upper)
  FUNC_7(&VAR_4, "upper hook: %s connected to %s:%s\n",
      FUNC_0(VAR_1->upper),
      FUNC_3(FUNC_1(FUNC_2(VAR_1->upper))),
      FUNC_0(FUNC_2(VAR_1->upper)));
 else
  FUNC_7(&VAR_4, "upper hook: <not connected>\n");

 if (VAR_1->lower)
  FUNC_7(&VAR_4, "lower hook: %s connected to %s:%s\n",
      FUNC_0(VAR_1->lower),
      FUNC_3(FUNC_1(FUNC_2(VAR_1->lower))),
      FUNC_0(FUNC_2(VAR_1->lower)));
 else
  FUNC_7(&VAR_4, "lower hook: <not connected>\n");

 FUNC_7(&VAR_4, "sscf state: %s\n",
     VAR_1->enabled == 0 ? "<disabled>" :
     FUNC_9(FUNC_8(VAR_1->sscf)));

 FUNC_4(&VAR_4);
 return (FUNC_5(&VAR_4));
}
