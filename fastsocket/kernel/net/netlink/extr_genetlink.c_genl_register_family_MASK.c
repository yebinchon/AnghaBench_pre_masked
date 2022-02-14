
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nlattr {int dummy; } ;
struct genl_family {scalar_t__ id; int maxattr; int family_list; int * attrbuf; int name; int mcast_groups; int ops_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct genl_family*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int * FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int ) ;

int FUNC_10(struct genl_family *VAR_8)
{
 int VAR_9 = -VAR_2;

 if (VAR_8->id && VAR_8->id < VAR_6)
  goto errout;

 if (VAR_8->id > VAR_5)
  goto errout;

 FUNC_0(&VAR_8->ops_list);
 FUNC_0(&VAR_8->mcast_groups);

 FUNC_6();

 if (FUNC_4(VAR_8->name)) {
  VAR_9 = -VAR_1;
  goto errout_locked;
 }

 if (FUNC_3(VAR_8->id)) {
  VAR_9 = -VAR_1;
  goto errout_locked;
 }

 if (VAR_8->id == VAR_4) {
  u16 VAR_10 = FUNC_5();

  if (!VAR_10) {
   VAR_9 = -VAR_3;
   goto errout_locked;
  }

  VAR_8->id = VAR_10;
 }

 if (VAR_8->maxattr) {
  VAR_8->attrbuf = FUNC_8((VAR_8->maxattr+1) *
     sizeof(struct nlattr *), VAR_7);
  if (VAR_8->attrbuf == ((void*)0)) {
   VAR_9 = -VAR_3;
   goto errout_locked;
  }
 } else
  VAR_8->attrbuf = ((void*)0);

 FUNC_9(&VAR_8->family_list, FUNC_2(VAR_8->id));
 FUNC_7();

 FUNC_1(VAR_0, VAR_8);

 return 0;

errout_locked:
 FUNC_7();
errout:
 return VAR_9;
}
