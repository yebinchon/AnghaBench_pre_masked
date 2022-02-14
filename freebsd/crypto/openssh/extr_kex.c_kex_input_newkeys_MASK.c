
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ssh {struct kex* kex; } ;
struct kex {int done; int * name; int flags; int peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ssh*,int ,int *) ;
 int FUNC_3 (struct ssh*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ssh*) ;

__attribute__((used)) static int
FUNC_6(int VAR_6, u_int32_t VAR_7, struct ssh *VAR_8)
{
 struct kex *VAR_9 = VAR_8->kex;
 int VAR_10;

 FUNC_0("SSH2_MSG_NEWKEYS received");
 FUNC_2(VAR_8, VAR_3, &VAR_5);
 FUNC_2(VAR_8, VAR_2, &VAR_4);
 if ((VAR_10 = FUNC_5(VAR_8)) != 0)
  return VAR_10;
 if ((VAR_10 = FUNC_3(VAR_8, VAR_1)) != 0)
  return VAR_10;
 VAR_9->done = 1;
 FUNC_4(VAR_9->peer);

 VAR_9->flags &= ~VAR_0;
 FUNC_1(VAR_9->name);
 VAR_9->name = ((void*)0);
 return 0;
}
