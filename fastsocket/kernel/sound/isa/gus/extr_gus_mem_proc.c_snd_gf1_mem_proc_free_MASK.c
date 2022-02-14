
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct gus_proc_private* private_data; } ;
struct gus_proc_private {int dummy; } ;


 int FUNC_0 (struct gus_proc_private*) ;

__attribute__((used)) static void FUNC_1(struct snd_info_entry *VAR_0)
{
 struct gus_proc_private *VAR_1 = VAR_0->private_data;
 FUNC_0(VAR_1);
}
