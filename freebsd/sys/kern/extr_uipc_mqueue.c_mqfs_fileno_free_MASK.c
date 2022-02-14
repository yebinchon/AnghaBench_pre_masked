
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqfs_node {int mn_type; int mn_fileno; } ;
struct mqfs_info {int mi_unrhdr; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;







__attribute__((used)) static void
FUNC_2(struct mqfs_info *VAR_0, struct mqfs_node *VAR_1)
{
 switch (VAR_1->mn_type) {
 case 130:
 case 133:
 case 132:
 case 129:
  FUNC_1(VAR_0->mi_unrhdr, VAR_1->mn_fileno);
  break;
 case 128:
 case 131:

  break;
 default:
  FUNC_0(0,
      ("mqfs_fileno_free() called for unknown type node: %d",
   VAR_1->mn_type));
  break;
 }
}
