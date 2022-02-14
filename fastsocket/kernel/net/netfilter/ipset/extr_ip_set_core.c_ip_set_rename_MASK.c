
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_set {scalar_t__ ref; int name; } ;
typedef size_t ip_set_id_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 struct ip_set* FUNC_1 (char*) ;
 TYPE_1__** VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 char* FUNC_2 (struct nlattr const* const) ;
 scalar_t__ FUNC_3 (struct nlattr const* const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char const*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct sock *VAR_10, struct sk_buff *VAR_11,
       const struct nlmsghdr *VAR_12,
       const struct nlattr * const VAR_13[])
{
 struct ip_set *VAR_14;
 const char *VAR_15;
 ip_set_id_t VAR_16;
 int VAR_17 = 0;

 if (FUNC_7(FUNC_3(VAR_13) ||
       VAR_13[VAR_1] == ((void*)0) ||
       VAR_13[VAR_2] == ((void*)0)))
  return -VAR_4;

 VAR_14 = FUNC_1(FUNC_2(VAR_13[VAR_1]));
 if (VAR_14 == ((void*)0))
  return -VAR_0;

 FUNC_4(&VAR_9);
 if (VAR_14->ref != 0) {
  VAR_17 = -VAR_5;
  goto out;
 }

 VAR_15 = FUNC_2(VAR_13[VAR_2]);
 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
  if (VAR_7[VAR_16] != ((void*)0) &&
      FUNC_0(VAR_7[VAR_16]->name, VAR_15)) {
   VAR_17 = -VAR_3;
   goto out;
  }
 }
 FUNC_6(VAR_14->name, VAR_15, VAR_6);

out:
 FUNC_5(&VAR_9);
 return VAR_17;
}
