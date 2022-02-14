
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_msg {int dummy; } ;
struct uni {int dummy; } ;
struct sscfu_arg {int sig; } ;
struct priv {int * lower; int uni; } ;
struct mbuf {int dummy; } ;
typedef int node_p ;
typedef enum saal_sig { ____Placeholder_saal_sig } saal_sig ;
typedef int arg ;


 struct priv* FUNC_0 (int ) ;
 int FUNC_1 (int,int *,struct mbuf*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,struct uni_msg*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct uni_msg*) ;
 struct mbuf* FUNC_5 (struct uni_msg*,struct sscfu_arg*,int) ;

__attribute__((used)) static void
FUNC_6(struct uni *VAR_1, void *VAR_2, enum saal_sig VAR_3, struct uni_msg *VAR_4)
{
 node_p VAR_5 = (node_p)VAR_2;
 struct priv *VAR_6 = FUNC_0(VAR_5);
 struct mbuf *VAR_7;
 struct sscfu_arg VAR_8;
 int VAR_9;

 if (FUNC_3(VAR_6->uni, VAR_0) > 0)
  FUNC_2(VAR_5, VAR_3, VAR_4, 1);

 if (VAR_6->lower == ((void*)0)) {
  if (VAR_4 != ((void*)0))
   FUNC_4(VAR_4);
  return;
 }

 VAR_8.sig = VAR_3;

 VAR_7 = FUNC_5(VAR_4, &VAR_8, sizeof(VAR_8));
 if (VAR_4 != ((void*)0))
  FUNC_4(VAR_4);
 if (VAR_7 == ((void*)0))
  return;

 FUNC_1(VAR_9, VAR_6->lower, VAR_7);
}
