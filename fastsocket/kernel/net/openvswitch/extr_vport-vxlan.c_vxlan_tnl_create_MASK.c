
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef void vxlan_sock ;
struct vxlan_port {void* vs; int name; } ;
struct vport_parms {int name; struct nlattr* options; int dp; } ;
typedef void vport ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct nlattr* FUNC_3 (struct nlattr*,int ) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 struct net* FUNC_6 (int ) ;
 void* FUNC_7 (int,int *,struct vport_parms const*) ;
 int FUNC_8 (void*) ;
 int VAR_3 ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_4 ;
 void* FUNC_10 (struct net*,int ,int ,void*,int) ;
 struct vxlan_port* FUNC_11 (void*) ;

__attribute__((used)) static struct vport *FUNC_12(const struct vport_parms *VAR_5)
{
 struct net *VAR_6 = FUNC_6(VAR_5->dp);
 struct nlattr *VAR_7 = VAR_5->options;
 struct vxlan_port *VAR_8;
 struct vxlan_sock *VAR_9;
 struct vport *VAR_10;
 struct nlattr *VAR_11;
 u16 VAR_12;
 int VAR_13;

 if (!VAR_7) {
  VAR_13 = -VAR_0;
  goto error;
 }
 VAR_11 = FUNC_3(VAR_7, VAR_2);
 if (VAR_11 && FUNC_5(VAR_11) == sizeof(u16)) {
  VAR_12 = FUNC_4(VAR_11);
 } else {

  VAR_13 = -VAR_0;
  goto error;
 }

 VAR_10 = FUNC_7(sizeof(struct vxlan_port),
    &VAR_3, VAR_5);
 if (FUNC_1(VAR_10))
  return VAR_10;

 VAR_8 = FUNC_11(VAR_10);
 FUNC_9(VAR_8->name, VAR_5->name, VAR_1);

 VAR_9 = FUNC_10(VAR_6, FUNC_2(VAR_12), VAR_4, VAR_10, 1);
 if (FUNC_1(VAR_9)) {
  FUNC_8(VAR_10);
  return (void *)VAR_9;
 }
 VAR_8->vs = VAR_9;

 return VAR_10;

error:
 return FUNC_0(VAR_13);
}
