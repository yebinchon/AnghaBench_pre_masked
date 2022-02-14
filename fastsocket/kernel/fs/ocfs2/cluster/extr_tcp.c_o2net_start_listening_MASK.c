
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {int nd_num; int nd_ipv4_port; int nd_ipv4_address; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int * VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int * VAR_4 ;
 int FUNC_5 (int ) ;

int FUNC_6(struct o2nm_node *VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 FUNC_3(VAR_2, "starting o2net thread...\n");
 VAR_4 = FUNC_1("o2net");
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_1, "unable to launch o2net thread\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_5->nd_ipv4_address,
     VAR_5->nd_ipv4_port);
 if (VAR_6) {
  FUNC_2(VAR_4);
  VAR_4 = ((void*)0);
 } else
  FUNC_5(VAR_5->nd_num);

 return VAR_6;
}
