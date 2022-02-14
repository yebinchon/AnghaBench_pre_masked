
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct iucv_sock {scalar_t__ msglimit; int src_name; int * src_user_id; } ;
typedef int query_buffer ;
struct TYPE_2__ {int lock; int autobind_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int,int*) ;
 struct iucv_sock* FUNC_3 (struct sock*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_3)
{
 struct iucv_sock *VAR_4 = FUNC_3(VAR_3);
 char VAR_5[80];
 char VAR_6[12];
 int VAR_7 = 0;


 FUNC_2("QUERY USERID", VAR_5, sizeof(VAR_5), &VAR_7);
 if (FUNC_6(VAR_7))
  return -VAR_0;

 FUNC_4(VAR_4->src_user_id, VAR_5, 8);

 FUNC_7(&VAR_2.lock);

 FUNC_5(VAR_6, "%08x", FUNC_1(&VAR_2.autobind_name));
 while (FUNC_0(VAR_6)) {
  FUNC_5(VAR_6, "%08x",
   FUNC_1(&VAR_2.autobind_name));
 }

 FUNC_8(&VAR_2.lock);

 FUNC_4(&VAR_4->src_name, VAR_6, 8);

 if (!VAR_4->msglimit)
  VAR_4->msglimit = VAR_1;

 return VAR_7;
}
