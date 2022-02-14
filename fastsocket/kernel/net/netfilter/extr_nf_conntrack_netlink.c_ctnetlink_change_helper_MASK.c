
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conntrack_helper {int dummy; } ;
struct nf_conn_help {struct nf_conntrack_helper* helper; int help; } ;
struct nf_conn {scalar_t__ master; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nf_conntrack_helper* FUNC_0 (char*) ;
 int FUNC_1 (struct nlattr const* const,char**) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_6 ;
 struct nf_conn_help* FUNC_3 (struct nf_conn*,int ) ;
 int FUNC_4 (struct nf_conn*) ;
 struct nf_conn_help* FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (struct nf_conntrack_helper*,struct nf_conntrack_helper*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static inline int
FUNC_11(struct nf_conn *VAR_7, const struct nlattr * const VAR_8[])
{
 struct nf_conntrack_helper *VAR_9;
 struct nf_conn_help *VAR_10 = FUNC_5(VAR_7);
 char *VAR_11 = ((void*)0);
 int VAR_12;


 if (VAR_7->master)
  return -VAR_2;

 VAR_12 = FUNC_1(VAR_8[VAR_0], &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 if (!FUNC_10(VAR_11, "")) {
  if (VAR_10 && VAR_10->helper) {

   FUNC_4(VAR_7);
   FUNC_6(VAR_10->helper, ((void*)0));
  }

  return 0;
 }

 VAR_9 = FUNC_0(VAR_11);
 if (VAR_9 == ((void*)0)) {
  return -VAR_4;
 }

 if (VAR_10) {
  if (VAR_10->helper == VAR_9)
   return 0;
  if (VAR_10->helper)
   return -VAR_2;

  FUNC_2(&VAR_10->help, 0, sizeof(VAR_10->help));
 } else {
  VAR_10 = FUNC_3(VAR_7, VAR_5);
  if (VAR_10 == ((void*)0))
   return -VAR_3;
 }

 FUNC_6(VAR_10->helper, VAR_9);

 return 0;
}
