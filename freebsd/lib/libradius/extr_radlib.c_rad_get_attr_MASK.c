
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {scalar_t__ in_pos; scalar_t__ in_len; int* in; } ;


 int FUNC_0 (struct rad_handle*,char*) ;

int
FUNC_1(struct rad_handle *VAR_0, const void **VAR_1, size_t *VAR_2)
{
 int VAR_3;

 if (VAR_0->in_pos >= VAR_0->in_len)
  return 0;
 if (VAR_0->in_pos + 2 > VAR_0->in_len) {
  FUNC_0(VAR_0, "Malformed attribute in response");
  return -1;
 }
 VAR_3 = VAR_0->in[VAR_0->in_pos++];
 *VAR_2 = VAR_0->in[VAR_0->in_pos++] - 2;
 if (VAR_0->in_pos + (int)*VAR_2 > VAR_0->in_len) {
  FUNC_0(VAR_0, "Malformed attribute in response");
  return -1;
 }
 *VAR_1 = &VAR_0->in[VAR_0->in_pos];
 VAR_0->in_pos += *VAR_2;
 return VAR_3;
}
