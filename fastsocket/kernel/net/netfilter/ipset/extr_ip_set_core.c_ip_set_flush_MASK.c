
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
typedef size_t ip_set_id_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int ** VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (struct nlattr const* const*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct sock *VAR_6, struct sk_buff *VAR_7,
      const struct nlmsghdr *VAR_8,
      const struct nlattr * const VAR_9[])
{
 ip_set_id_t VAR_10;

 if (FUNC_4(FUNC_3(VAR_9)))
  return -VAR_2;

 if (!VAR_9[VAR_1]) {
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
   if (VAR_4[VAR_10] != ((void*)0))
    FUNC_1(VAR_4[VAR_10]);
 } else {
  VAR_10 = FUNC_0(FUNC_2(VAR_9[VAR_1]));
  if (VAR_10 == VAR_3)
   return -VAR_0;

  FUNC_1(VAR_4[VAR_10]);
 }

 return 0;
}
