
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipflags1; int iptrgcls; int ipmsgid; int ippathid; } ;
union iucv_param {TYPE_1__ db; } ;
struct iucv_path {int pathid; } ;
struct iucv_message {int class; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,union iucv_param*) ;
 union iucv_param** VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (union iucv_param*,int ,int) ;
 size_t FUNC_5 () ;

int FUNC_6(struct iucv_path *VAR_7, struct iucv_message *VAR_8)
{
 union iucv_param *VAR_9;
 int VAR_10;

 FUNC_2();
 if (FUNC_0(VAR_5)) {
  VAR_10 = -VAR_0;
  goto out;
 }
 VAR_9 = VAR_6[FUNC_5()];
 FUNC_4(VAR_9, 0, sizeof(union iucv_param));
 VAR_9->db.ippathid = VAR_7->pathid;
 VAR_9->db.ipmsgid = VAR_8->id;
 VAR_9->db.iptrgcls = VAR_8->class;
 VAR_9->db.ipflags1 = (VAR_3 | VAR_1 | VAR_2);
 VAR_10 = FUNC_1(VAR_4, VAR_9);
out:
 FUNC_3();
 return VAR_10;
}
