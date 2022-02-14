
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_src_nodes {unsigned int psn_len; char* psn_buf; struct pf_src_node* psn_src_nodes; } ;
struct pf_src_node {int dummy; } ;
typedef int psn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,int ,struct pfioc_src_nodes*) ;
 int FUNC_3 (struct pfioc_src_nodes*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct pf_src_node*,int) ;
 char* FUNC_6 (char*,unsigned int) ;
 int FUNC_7 (char*) ;

int
FUNC_8(int VAR_2, int VAR_3)
{
 struct pfioc_src_nodes VAR_4;
 struct pf_src_node *VAR_5;
 char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 unsigned int VAR_8 = 0;
 int VAR_9;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 for (;;) {
  VAR_4.psn_len = VAR_8;
  if (VAR_8) {
   VAR_7 = FUNC_6(VAR_6, VAR_8);
   if (VAR_7 == ((void*)0))
    FUNC_0(1, "realloc");
   VAR_4.psn_buf = VAR_6 = VAR_7;
  }
  if (FUNC_2(VAR_2, VAR_0, &VAR_4) < 0) {
   FUNC_7("DIOCGETSRCNODES");
   FUNC_1(VAR_6);
   return (-1);
  }
  if (VAR_4.psn_len + sizeof(struct pfioc_src_nodes) < VAR_8)
   break;
  if (VAR_8 == 0 && VAR_4.psn_len == 0)
   goto done;
  if (VAR_8 == 0 && VAR_4.psn_len != 0)
   VAR_8 = VAR_4.psn_len;
  if (VAR_4.psn_len == 0)
   goto done;
  VAR_8 *= 2;
 }
 VAR_5 = VAR_4.psn_src_nodes;
 if (VAR_4.psn_len > 0 && (VAR_3 & VAR_1))
  FUNC_4("SOURCE TRACKING NODES:");
 for (VAR_9 = 0; VAR_9 < VAR_4.psn_len; VAR_9 += sizeof(*VAR_5)) {
  FUNC_5(VAR_5, VAR_3);
  VAR_5++;
 }
done:
 FUNC_1(VAR_6);
 return (0);
}
