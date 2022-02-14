
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ustr {int u_len; int u_name; } ;
struct super_block {int dummy; } ;
struct TYPE_2__ {int s_nls_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct ustr*) ;
 struct ustr* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,struct ustr*,struct ustr*) ;
 int FUNC_5 (struct ustr*,struct ustr*) ;
 scalar_t__ FUNC_6 (struct ustr*,int *,int) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;

int FUNC_9(struct super_block *VAR_3, uint8_t *VAR_4, uint8_t *VAR_5,
       int VAR_6)
{
 struct ustr *VAR_7, *VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_3(sizeof(struct ustr), VAR_0);
 if (!VAR_7)
  return 0;

 VAR_8 = FUNC_3(sizeof(struct ustr), VAR_0);
 if (!VAR_8)
  goto out1;

 if (FUNC_6(VAR_8, VAR_4, VAR_6))
  goto out2;

 if (FUNC_0(VAR_3, VAR_2)) {
  if (!FUNC_5(VAR_7, VAR_8)) {
   FUNC_7("Failed in udf_get_filename: sname = %s\n",
      VAR_4);
   goto out2;
  }
 } else if (FUNC_0(VAR_3, VAR_1)) {
  if (!FUNC_4(FUNC_1(VAR_3)->s_nls_map, VAR_7,
      VAR_8)) {
   FUNC_7("Failed in udf_get_filename: sname = %s\n",
      VAR_4);
   goto out2;
  }
 } else
  goto out2;

 VAR_9 = FUNC_8(VAR_5, VAR_7->u_name, VAR_7->u_len,
         VAR_8->u_name, VAR_8->u_len);
out2:
 FUNC_2(VAR_8);
out1:
 FUNC_2(VAR_7);
 return VAR_9;
}
