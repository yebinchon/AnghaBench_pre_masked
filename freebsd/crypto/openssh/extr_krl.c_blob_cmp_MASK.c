
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct revoked_blob {scalar_t__ len; int blob; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct revoked_blob *VAR_0, struct revoked_blob *VAR_1)
{
 int VAR_2;

 if (VAR_0->len != VAR_1->len) {
  if ((VAR_2 = FUNC_1(VAR_0->blob, VAR_1->blob, FUNC_0(VAR_0->len, VAR_1->len))) != 0)
   return VAR_2;
  return VAR_0->len > VAR_1->len ? 1 : -1;
 } else
  return FUNC_1(VAR_0->blob, VAR_1->blob, VAR_0->len);
}
