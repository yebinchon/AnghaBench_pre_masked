
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oper_class_map {scalar_t__ bw; } ;
struct oci_info {scalar_t__ freq; int sec_channel; int chanwidth; int op_class; int channel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct oper_class_map* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct oper_class_map const*) ;
 int FUNC_3 (int ,char*,int ,...) ;

int FUNC_4(struct oci_info *VAR_3)
{
 const struct oper_class_map *VAR_4;

 VAR_3->freq = FUNC_1(((void*)0), VAR_3->op_class, VAR_3->channel);
 if (VAR_3->freq < 0) {
  FUNC_3(VAR_2,
      "Error interpreting OCI: unrecognized opclass/channel pair (%d/%d)",
      VAR_3->op_class, VAR_3->channel);
  return -1;
 }

 VAR_4 = FUNC_0(((void*)0), VAR_3->op_class);
 if (!VAR_4) {
  FUNC_3(VAR_2,
      "Error interpreting OCI: Unrecognized opclass (%d)",
      VAR_3->op_class);
  return -1;
 }

 VAR_3->chanwidth = FUNC_2(VAR_4);
 VAR_3->sec_channel = 0;
 if (VAR_4->bw == VAR_1)
  VAR_3->sec_channel = 1;
 else if (VAR_4->bw == VAR_0)
  VAR_3->sec_channel = -1;

 return 0;
}
