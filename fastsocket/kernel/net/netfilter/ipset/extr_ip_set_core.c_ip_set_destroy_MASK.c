
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
typedef size_t ip_set_id_t ;
struct TYPE_2__ {scalar_t__ ref; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 TYPE_1__** VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct nlattr const* const) ;
 int FUNC_3 (struct nlattr const* const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct sock *VAR_8, struct sk_buff *VAR_9,
        const struct nlmsghdr *VAR_10,
        const struct nlattr * const VAR_11[])
{
 ip_set_id_t VAR_12;
 int VAR_13 = 0;

 if (FUNC_6(FUNC_3(VAR_11)))
  return -VAR_3;
 FUNC_4(&VAR_7);
 if (!VAR_11[VAR_1]) {
  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   if (VAR_5[VAR_12] != ((void*)0) && VAR_5[VAR_12]->ref) {
    VAR_13 = -VAR_2;
    goto out;
   }
  }
  FUNC_5(&VAR_7);
  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   if (VAR_5[VAR_12] != ((void*)0))
    FUNC_1(VAR_12);
  }
 } else {
  VAR_12 = FUNC_0(FUNC_2(VAR_11[VAR_1]));
  if (VAR_12 == VAR_4) {
   VAR_13 = -VAR_0;
   goto out;
  } else if (VAR_5[VAR_12]->ref) {
   VAR_13 = -VAR_2;
   goto out;
  }
  FUNC_5(&VAR_7);

  FUNC_1(VAR_12);
 }
 return 0;
out:
 FUNC_5(&VAR_7);
 return VAR_13;
}
