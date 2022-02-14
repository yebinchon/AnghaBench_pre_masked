
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_info {int dummy; } ;
struct i2sbus_dev {struct pcm_info in; struct pcm_info out; } ;



__attribute__((used)) static inline void FUNC_0(struct i2sbus_dev *VAR_0, int VAR_1,
    struct pcm_info **VAR_2, struct pcm_info **VAR_3)
{
 if (VAR_1) {
  if (VAR_2)
   *VAR_2 = &VAR_0->in;
  if (VAR_3)
   *VAR_3 = &VAR_0->out;
 } else {
  if (VAR_2)
   *VAR_2 = &VAR_0->out;
  if (VAR_3)
   *VAR_3 = &VAR_0->in;
 }
}
