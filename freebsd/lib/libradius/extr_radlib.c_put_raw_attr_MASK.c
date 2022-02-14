
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {int out_len; int* out; } ;


 int VAR_0 ;
 int FUNC_0 (struct rad_handle*,char*) ;
 int FUNC_1 (size_t*,void const*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct rad_handle *VAR_1, int VAR_2, const void *VAR_3, size_t VAR_4)
{
 if (VAR_4 > 253) {
  FUNC_0(VAR_1, "Attribute too long");
  return -1;
 }
 if (VAR_1->out_len + 2 + VAR_4 > VAR_0) {
  FUNC_0(VAR_1, "Maximum message length exceeded");
  return -1;
 }
 VAR_1->out[VAR_1->out_len++] = VAR_2;
 VAR_1->out[VAR_1->out_len++] = VAR_4 + 2;
 FUNC_1(&VAR_1->out[VAR_1->out_len], VAR_3, VAR_4);
 VAR_1->out_len += VAR_4;
 return 0;
}
