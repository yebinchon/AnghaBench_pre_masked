
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int res_state ;
typedef int ns_type ;
typedef int ns_rr ;
typedef int ns_msg ;
typedef scalar_t__ ns_class ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int ,int,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ,int ,char const*,scalar_t__,int ,int *,int ,int *,int *,int) ;
 int FUNC_7 (int ,int *,int,int *,int ) ;

__attribute__((used)) static int
FUNC_8(res_state VAR_8, const char *VAR_9, ns_class VAR_10, ns_type VAR_11,
  u_char *VAR_12, ns_msg *VAR_13)
{
 u_char VAR_14[VAR_2];
 int VAR_15, VAR_16;

 VAR_16 = FUNC_6(VAR_8, VAR_4, VAR_9, VAR_10, VAR_11,
    ((void*)0), 0, ((void*)0), VAR_14, VAR_2);
 if (VAR_16 < 0) {
  FUNC_0(("do_query: res_nmkquery failed"));
  return (-1);
 }
 VAR_16 = FUNC_7(VAR_8, VAR_14, VAR_16, VAR_12, VAR_1);
 if (VAR_16 < 0) {
  FUNC_0(("do_query: res_nsend failed"));
  return (-1);
 }
 if (VAR_16 == 0) {
  FUNC_0(("do_query: res_nsend returned 0"));
  VAR_3 = VAR_0;
  return (-1);
 }
 if (FUNC_1(VAR_12, VAR_16, VAR_13) < 0) {
  FUNC_0(("do_query: ns_initparse failed"));
  return (-1);
 }
 VAR_16 = 0;
 for (VAR_15 = 0; VAR_15 < FUNC_2(*VAR_13, VAR_5); VAR_15++) {
  ns_rr VAR_17;

  if (FUNC_3(VAR_13, VAR_5, VAR_15, &VAR_17) < 0) {
   FUNC_0(("do_query: ns_parserr failed"));
   return (-1);
  }
  VAR_16 += (FUNC_4(VAR_17) == VAR_10 &&
        (FUNC_5(VAR_17) == VAR_6 ||
         FUNC_5(VAR_17) == VAR_7));
 }
 return (VAR_16);
}
