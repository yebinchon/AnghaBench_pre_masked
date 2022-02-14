
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct sfs_node {void* sn_id; void* sn_parent_id; int sn_name; } ;
typedef struct sfs_node sfs_node_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sfs_node* FUNC_1 (size_t,int ,int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static sfs_node_t *
FUNC_4(size_t VAR_3, const char *VAR_4, uint64_t VAR_5, uint64_t VAR_6)
{
 struct sfs_node *VAR_7;

 FUNC_0(FUNC_3(VAR_4) < sizeof(VAR_7->sn_name),
     ("sfs node name is too long"));
 FUNC_0(VAR_3 >= sizeof(*VAR_7), ("sfs node size is too small"));
 VAR_7 = FUNC_1(VAR_3, VAR_0, VAR_1 | VAR_2);
 FUNC_2(VAR_7->sn_name, VAR_4, sizeof(VAR_7->sn_name));
 VAR_7->sn_parent_id = VAR_5;
 VAR_7->sn_id = VAR_6;

 return (VAR_7);
}
