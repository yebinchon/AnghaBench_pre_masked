
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sbuf {int dummy; } ;
struct priv {scalar_t__ uni; int * upper; int * lower; } ;
typedef int node_p ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*) ;
 int FUNC_6 (struct sbuf*,char*,scalar_t__,int ) ;
 int FUNC_7 (struct sbuf*,char*,...) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,struct sbuf*) ;

__attribute__((used)) static int
FUNC_11(node_p VAR_1, struct priv *VAR_2, char *VAR_3, u_int VAR_4)
{
 struct sbuf VAR_5;
 u_int VAR_6;

 FUNC_6(&VAR_5, VAR_3, VAR_4, 0);

 if (VAR_2->lower != ((void*)0))
  FUNC_7(&VAR_5, "lower hook: connected to %s:%s\n",
      FUNC_3(FUNC_1(FUNC_2(VAR_2->lower))),
      FUNC_0(FUNC_2(VAR_2->lower)));
 else
  FUNC_7(&VAR_5, "lower hook: <not connected>\n");

 if (VAR_2->upper != ((void*)0))
  FUNC_7(&VAR_5, "upper hook: connected to %s:%s\n",
      FUNC_3(FUNC_1(FUNC_2(VAR_2->upper))),
      FUNC_0(FUNC_2(VAR_2->upper)));
 else
  FUNC_7(&VAR_5, "upper hook: <not connected>\n");

 FUNC_7(&VAR_5, "debugging:");
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (FUNC_9(VAR_2->uni, VAR_6) != 0)
   FUNC_7(&VAR_5, " %s=%u", FUNC_8(VAR_6),
       FUNC_9(VAR_2->uni, VAR_6));
 FUNC_7(&VAR_5, "\n");

 if (VAR_2->uni)
  FUNC_10(VAR_2->uni, &VAR_5);

 FUNC_4(&VAR_5);
 return (FUNC_5(&VAR_5));
}
