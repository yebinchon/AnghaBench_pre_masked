
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct unix_sock {int readlock; struct unix_address* addr; } ;
struct unix_address {size_t hash; scalar_t__ len; TYPE_1__* name; int refcnt; } ;
struct socket {int type; struct sock* sk; } ;
struct sock {size_t sk_type; } ;
struct net {int dummy; } ;
struct TYPE_3__ {scalar_t__ sun_path; int sun_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net*,TYPE_1__*,scalar_t__,int ,size_t) ;
 int FUNC_1 (int *,struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int ) ;
 struct unix_address* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct net* FUNC_8 (struct sock*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (scalar_t__,char*,int) ;
 size_t FUNC_12 (int ) ;
 struct unix_sock* FUNC_13 (struct sock*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(struct socket *VAR_5)
{
 struct sock *VAR_6 = VAR_5->sk;
 struct net *VAR_7 = FUNC_8(VAR_6);
 struct unix_sock *VAR_8 = FUNC_13(VAR_6);
 static u32 VAR_9 = 1;
 struct unix_address *VAR_10;
 int VAR_11;

 FUNC_6(&VAR_8->readlock);

 VAR_11 = 0;
 if (VAR_8->addr)
  goto out;

 VAR_11 = -VAR_1;
 VAR_10 = FUNC_5(sizeof(*VAR_10) + sizeof(short) + 16, VAR_2);
 if (!VAR_10)
  goto out;

 VAR_10->name->sun_family = VAR_0;
 FUNC_3(&VAR_10->refcnt, 1);

retry:
 VAR_10->len = FUNC_11(VAR_10->name->sun_path+1, "%05x", VAR_9) + 1 + sizeof(short);
 VAR_10->hash = FUNC_12(FUNC_4(VAR_10->name, VAR_10->len, 0));

 FUNC_9(&VAR_4);
 VAR_9 = (VAR_9+1)&0xFFFFF;

 if (FUNC_0(VAR_7, VAR_10->name, VAR_10->len, VAR_5->type,
          VAR_10->hash)) {
  FUNC_10(&VAR_4);

  if (!(VAR_9&0xFF))
   FUNC_14();
  goto retry;
 }
 VAR_10->hash ^= VAR_6->sk_type;

 FUNC_2(VAR_6);
 VAR_8->addr = VAR_10;
 FUNC_1(&VAR_3[VAR_10->hash], VAR_6);
 FUNC_10(&VAR_4);
 VAR_11 = 0;

out: FUNC_7(&VAR_8->readlock);
 return VAR_11;
}
