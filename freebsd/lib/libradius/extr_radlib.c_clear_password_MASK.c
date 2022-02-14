
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {scalar_t__ pass_len; scalar_t__ pass_pos; int pass; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct rad_handle *VAR_0)
{
 if (VAR_0->pass_len != 0) {
  FUNC_0(VAR_0->pass, 0, VAR_0->pass_len);
  VAR_0->pass_len = 0;
 }
 VAR_0->pass_pos = 0;
}
