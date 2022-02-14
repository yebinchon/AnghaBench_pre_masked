
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out_data {int dummy; } ;
struct ui_out {struct ui_out_data* data; } ;



struct ui_out_data *
FUNC_0 (struct ui_out *VAR_0)
{
  return VAR_0->data;
}
