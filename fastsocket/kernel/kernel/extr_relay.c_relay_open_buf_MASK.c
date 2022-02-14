
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchan_buf {unsigned int cpu; } ;
struct rchan {struct rchan_buf** buf; scalar_t__ is_global; scalar_t__ has_base_filename; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct rchan_buf*,int) ;
 struct rchan_buf* FUNC_1 (struct rchan*) ;
 struct dentry* FUNC_2 (struct rchan*,struct rchan_buf*,unsigned int) ;
 int FUNC_3 (struct rchan_buf*) ;
 int FUNC_4 (struct rchan_buf*,struct dentry*) ;

__attribute__((used)) static struct rchan_buf *FUNC_5(struct rchan *VAR_0, unsigned int VAR_1)
{
  struct rchan_buf *VAR_2 = ((void*)0);
 struct dentry *VAR_3;

  if (VAR_0->is_global)
  return VAR_0->buf[0];

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 if (VAR_0->has_base_filename) {
  VAR_3 = FUNC_2(VAR_0, VAR_2, VAR_1);
  if (!VAR_3)
   goto free_buf;
  FUNC_4(VAR_2, VAR_3);
 }

  VAR_2->cpu = VAR_1;
  FUNC_0(VAR_2, 1);

  if(VAR_0->is_global) {
   VAR_0->buf[0] = VAR_2;
   VAR_2->cpu = 0;
   }

 return VAR_2;

free_buf:
  FUNC_3(VAR_2);
 return ((void*)0);
}
