
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_iface {int pfiio_flags; int pfiio_name; } ;
struct pfctl {int opts; int dev; } ;
struct node_host {char* ifname; struct node_host* next; } ;
typedef int pi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pfioc_iface*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 struct node_host* FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,struct pfioc_iface*) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int) ;

int
FUNC_7(struct pfctl *VAR_5, char *VAR_6, int VAR_7, int VAR_8)
{
 struct pfioc_iface VAR_9;
 struct node_host *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);

 if ((VAR_4 & VAR_2) == 0)
  return (0);

 FUNC_0(&VAR_9, sizeof(VAR_9));

 VAR_9.pfiio_flags = VAR_7;



 VAR_10 = FUNC_3(VAR_6, 0);
 for (VAR_11 = VAR_10; VAR_11 != ((void*)0); VAR_11 = VAR_11->next)
  FUNC_7(VAR_5, VAR_11->ifname, VAR_7, VAR_8);

 if (FUNC_6(VAR_9.pfiio_name, VAR_6, sizeof(VAR_9.pfiio_name)) >=
     sizeof(VAR_9.pfiio_name))
  FUNC_2(1, "pfctl_set_interface_flags: strlcpy");

 if ((VAR_5->opts & VAR_3) == 0) {
  if (VAR_8 == 0) {
   if (FUNC_4(VAR_5->dev, VAR_0, &VAR_9))
    FUNC_1(1, "DIOCCLRIFFLAG");
  } else {
   if (FUNC_4(VAR_5->dev, VAR_1, &VAR_9))
    FUNC_1(1, "DIOCSETIFFLAG");
   FUNC_5(VAR_6);
  }
 }
 return (0);
}
