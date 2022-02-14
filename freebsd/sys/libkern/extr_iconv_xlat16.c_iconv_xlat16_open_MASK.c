
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kobj_class {int dummy; } ;
struct iconv_xlat16 {struct iconv_cspair* d_csp; struct iconv_xlat16* t_ctp; struct iconv_xlat16* f_ctp; int ** d_table; } ;
struct iconv_cspair {int cp_refcount; int cp_to; int cp_from; scalar_t__ cp_data; } ;
struct iconv_converter_class {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,struct iconv_xlat16**) ;
 scalar_t__ FUNC_1 (struct kobj_class*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct iconv_converter_class *VAR_3,
 struct iconv_cspair *VAR_4, struct iconv_cspair *VAR_5, void **VAR_6)
{
 struct iconv_xlat16 *VAR_7;
 uint32_t *VAR_8, **VAR_9;
 int VAR_10;

 VAR_7 = (struct iconv_xlat16 *)FUNC_1((struct kobj_class*)VAR_3, VAR_1, VAR_2);
 VAR_8 = (uint32_t *)((caddr_t)VAR_4->cp_data + sizeof(VAR_7->d_table));
 VAR_9 = (uint32_t **)VAR_4->cp_data;
 for (VAR_10 = 0 ; VAR_10 < 0x200 ; VAR_10++) {
  if (*VAR_9) {
   VAR_7->d_table[VAR_10] = VAR_8;
   VAR_8 += 0x80;
  } else {
   VAR_7->d_table[VAR_10] = ((void*)0);
  }
  VAR_9++;
 }

 if (FUNC_2(VAR_4->cp_to, VAR_0) != 0) {
  if (FUNC_0(VAR_0, VAR_4->cp_from, &VAR_7->f_ctp) != 0)
   VAR_7->f_ctp = ((void*)0);
  if (FUNC_0(VAR_0, VAR_4->cp_to, &VAR_7->t_ctp) != 0)
   VAR_7->t_ctp = ((void*)0);
 } else {
  VAR_7->f_ctp = VAR_7->t_ctp = VAR_7;
 }

 VAR_7->d_csp = VAR_4;
 VAR_4->cp_refcount++;
 *VAR_6 = (void*)VAR_7;
 return (0);
}
