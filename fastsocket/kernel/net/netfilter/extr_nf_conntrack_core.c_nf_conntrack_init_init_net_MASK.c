
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hlist_head {int dummy; } ;
struct TYPE_3__ {int use; } ;
struct TYPE_4__ {int status; TYPE_1__ ct_general; int * ct_net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_2__ VAR_7 ;
 int FUNC_4 (char*,int ,int,int) ;
 int FUNC_5 (int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_9 = 8;
 int VAR_10;



 if (!VAR_5) {
  VAR_5
   = (((VAR_8 << VAR_2) / 16384)
      / sizeof(struct hlist_head));
  if (VAR_8 > (1024 * 1024 * 1024 / VAR_3))
   VAR_5 = 16384;
  if (VAR_5 < 32)
   VAR_5 = 32;





  VAR_9 = 4;
 }
 VAR_6 = VAR_9 * VAR_5;

 FUNC_4("nf_conntrack version %s (%u buckets, %d max)\n",
        VAR_1, VAR_5,
        VAR_6);

 VAR_10 = FUNC_3();
 if (VAR_10 < 0)
  goto err_proto;

 VAR_10 = FUNC_1();
 if (VAR_10 < 0)
  goto err_helper;





 FUNC_0(&VAR_7.ct_general.use, 1);

 FUNC_5(VAR_0, &VAR_7.status);

 return 0;

err_helper:
 FUNC_2();
err_proto:
 return VAR_10;
}
