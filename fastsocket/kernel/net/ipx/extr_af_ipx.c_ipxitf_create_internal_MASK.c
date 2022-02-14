
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipx_interface_definition {int ipx_node; int ipx_network; } ;
struct ipx_interface {int if_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ipx_interface* VAR_5 ;
 struct ipx_interface* VAR_6 ;
 int FUNC_0 (struct ipx_interface*) ;
 struct ipx_interface* FUNC_1 (int *,int ,int ,int *,int,int ) ;
 struct ipx_interface* FUNC_2 (int ) ;
 int FUNC_3 (struct ipx_interface*) ;
 int FUNC_4 (struct ipx_interface*) ;
 int FUNC_5 (struct ipx_interface*) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ipx_interface_definition *VAR_7)
{
 struct ipx_interface *VAR_8;
 int VAR_9 = -VAR_3;


 if (VAR_6)
  goto out;


 VAR_9 = -VAR_1;
 if (!VAR_7->ipx_network)
  goto out;
 VAR_8 = FUNC_2(VAR_7->ipx_network);
 VAR_9 = -VAR_0;
 if (VAR_8) {
  FUNC_5(VAR_8);
  goto out;
 }
 VAR_8 = FUNC_1(((void*)0), VAR_7->ipx_network, 0, ((void*)0), 1, 0);
 VAR_9 = -VAR_2;
 if (!VAR_8)
  goto out;
 FUNC_6((char *)&(VAR_8->if_node), VAR_7->ipx_node, VAR_4);
 VAR_5 = VAR_6 = VAR_8;
 FUNC_3(VAR_8);
 FUNC_4(VAR_8);

 VAR_9 = FUNC_0(VAR_8);
 FUNC_5(VAR_8);
out:
 return VAR_9;
}
