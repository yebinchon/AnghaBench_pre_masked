
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pred_data {int name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  return !FUNC_0 (((const struct pred_data *)VAR_0)->name,
    ((const struct pred_data *)VAR_1)->name);
}
