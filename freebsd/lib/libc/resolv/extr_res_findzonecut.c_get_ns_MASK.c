
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int rrset_ns ;
typedef int res_state ;
typedef int ns_msg ;
typedef int ns_class ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,int ,int ,int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,char const*,int ,int,int *) ;

__attribute__((used)) static int
FUNC_6(res_state VAR_3, const char *VAR_4, ns_class VAR_5, int VAR_6,
      rrset_ns *VAR_7)
{
 u_char *VAR_8;
 ns_msg VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_0);
 if (VAR_8 == ((void*)0))
  return (-1);


 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2, VAR_8, &VAR_9);
 if (VAR_10 != 0) {
  FUNC_0(("get_ns: do_query('%s', %s) failed (%d)",
    VAR_4, FUNC_4(VAR_5), VAR_10));
  FUNC_2(VAR_8);
  return (-1);
 }


 if (FUNC_5(VAR_3, &VAR_9, VAR_1, VAR_4, VAR_5, VAR_6, VAR_7) < 0) {
  FUNC_0(("get_ns save_ns('%s', %s) failed",
    VAR_4, FUNC_4(VAR_5)));
  FUNC_2(VAR_8);
  return (-1);
 }

 FUNC_2(VAR_8);
 return (0);
}
