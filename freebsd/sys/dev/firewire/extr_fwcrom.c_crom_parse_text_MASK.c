
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
struct csrtext {int crc_len; int * text; } ;
struct csrreg {scalar_t__ key; int val; } ;
struct crom_context {scalar_t__ depth; } ;


 scalar_t__ FUNC_0 (struct crom_context*) ;
 scalar_t__ VAR_0 ;
 struct csrreg* FUNC_1 (struct crom_context*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;

void
FUNC_4(struct crom_context *VAR_1, char *VAR_2, int VAR_3)
{
 struct csrreg *VAR_4;
 struct csrtext *VAR_5;
 uint32_t *VAR_6;
 int VAR_7, VAR_8;
 static char *VAR_9 = "(null)";

 if (VAR_1->depth < 0)
  return;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4->key != VAR_0 ||
     (vm_offset_t)(VAR_4 + VAR_4->val) > FUNC_0(VAR_1)) {
  FUNC_3(VAR_2, VAR_9, VAR_3);
  return;
 }
 VAR_5 = (struct csrtext *)(VAR_4 + VAR_4->val);

 if ((vm_offset_t)VAR_5 + VAR_5->crc_len > FUNC_0(VAR_1)) {
  FUNC_3(VAR_2, VAR_9, VAR_3);
  return;
 }



 VAR_6 = (uint32_t *)&VAR_2[0];
 VAR_8 = VAR_5->crc_len - 2;
 if (VAR_3 < VAR_8 * 4)
  VAR_8 = VAR_3/4;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  *VAR_6++ = FUNC_2(VAR_5->text[VAR_7]);

 if (VAR_3 <= VAR_8 * 4)
  VAR_2[VAR_3 - 1] = 0;
 else
  VAR_2[VAR_8 * 4] = 0;
}
