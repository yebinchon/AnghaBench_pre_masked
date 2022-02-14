
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ustr {int dummy; } ;
struct super_block {int dummy; } ;
struct TYPE_2__ {int s_nls_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ,int *,struct ustr*,int ) ;
 int FUNC_3 (int *,struct ustr*,int ) ;
 int FUNC_4 (struct ustr*,int const*,int) ;

int FUNC_5(struct super_block *VAR_3, const uint8_t *VAR_4,
       uint8_t *VAR_5, int VAR_6)
{
 struct ustr VAR_7;
 int VAR_8;

 if (!FUNC_4(&VAR_7, VAR_4, VAR_6))
  return 0;

 if (FUNC_0(VAR_3, VAR_1)) {
  VAR_8 = FUNC_3(VAR_5, &VAR_7, VAR_2);
  if (!VAR_8)
   return 0;
 } else if (FUNC_0(VAR_3, VAR_0)) {
  VAR_8 = FUNC_2(FUNC_1(VAR_3)->s_nls_map, VAR_5,
     &VAR_7, VAR_2);
  if (!VAR_8)
   return 0;
 } else
  return 0;

 return VAR_8;
}
