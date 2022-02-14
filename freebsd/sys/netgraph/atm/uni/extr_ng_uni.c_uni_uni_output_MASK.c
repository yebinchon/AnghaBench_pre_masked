
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct uni_msg {int dummy; } ;
struct uni_arg {int sig; int cookie; } ;
struct uni {int dummy; } ;
struct priv {int * upper; } ;
struct mbuf {int dummy; } ;
typedef int node_p ;
typedef enum uni_sig { ____Placeholder_uni_sig } uni_sig ;
typedef int arg ;


 struct priv* FUNC_0 (int ) ;
 int FUNC_1 (int,int *,struct mbuf*) ;
 int FUNC_2 (struct uni_msg*) ;
 struct mbuf* FUNC_3 (struct uni_msg*,struct uni_arg*,int) ;

__attribute__((used)) static void
FUNC_4(struct uni *VAR_0, void *VAR_1, enum uni_sig VAR_2, u_int32_t VAR_3,
    struct uni_msg *VAR_4)
{
 node_p VAR_5 = (node_p)VAR_1;
 struct priv *VAR_6 = FUNC_0(VAR_5);
 struct mbuf *VAR_7;
 struct uni_arg VAR_8;
 int VAR_9;

 if (VAR_6->upper == ((void*)0)) {
  if (VAR_4 != ((void*)0))
   FUNC_2(VAR_4);
  return;
 }
 VAR_8.sig = VAR_2;
 VAR_8.cookie = VAR_3;

 VAR_7 = FUNC_3(VAR_4, &VAR_8, sizeof(VAR_8));
 if (VAR_4 != ((void*)0))
  FUNC_2(VAR_4);
 if (VAR_7 == ((void*)0))
  return;

 FUNC_1(VAR_9, VAR_6->upper, VAR_7);
}
