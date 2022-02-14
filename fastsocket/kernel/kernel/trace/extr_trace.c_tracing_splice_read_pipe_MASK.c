
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tracer {int (* splice_read ) (struct trace_iterator*,struct file*,int *,struct pipe_inode_info*,size_t,unsigned int) ;} ;
struct TYPE_3__ {int len; } ;
struct trace_iterator {int mutex; TYPE_1__ seq; int ent; struct tracer* trace; } ;
struct splice_pipe_desc {unsigned int nr_pages; unsigned int flags; int spd_release; int * ops; struct partial_page* partial; struct page** pages; } ;
struct pipe_inode_info {int dummy; } ;
struct partial_page {int len; scalar_t__ offset; } ;
struct page {int dummy; } ;
struct file {struct trace_iterator* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 struct tracer* VAR_3 ;
 int FUNC_2 (struct trace_iterator*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct pipe_inode_info*,struct splice_pipe_desc*) ;
 int FUNC_7 (struct trace_iterator*,struct file*,int *,struct pipe_inode_info*,size_t,unsigned int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;
 int VAR_4 ;
 size_t FUNC_12 (size_t,struct trace_iterator*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (struct file*) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static ssize_t FUNC_15(struct file *VAR_7,
     loff_t *VAR_8,
     struct pipe_inode_info *VAR_9,
     size_t VAR_10,
     unsigned int VAR_11)
{
 struct page *VAR_12[VAR_2];
 struct partial_page VAR_13[VAR_2];
 struct trace_iterator *VAR_14 = VAR_7->private_data;
 struct splice_pipe_desc VAR_15 = {
  .pages = VAR_12,
  .partial = VAR_13,
  .nr_pages = 0,
  .flags = VAR_11,
  .ops = &VAR_5,
  .spd_release = VAR_6,
 };
 static struct tracer *VAR_16;
 ssize_t VAR_17;
 size_t VAR_18;
 unsigned int VAR_19;


 FUNC_3(&VAR_4);
 if (FUNC_14(VAR_16 != VAR_3 && VAR_3)) {
  VAR_16 = VAR_3;
  *VAR_14->trace = *VAR_3;
 }
 FUNC_4(&VAR_4);

 FUNC_3(&VAR_14->mutex);

 if (VAR_14->trace->splice_read) {
  VAR_17 = VAR_14->trace->splice_read(VAR_14, VAR_7,
            VAR_8, VAR_9, VAR_10, VAR_11);
  if (VAR_17)
   goto out_err;
 }

 VAR_17 = FUNC_13(VAR_7);
 if (VAR_17 <= 0)
  goto out_err;

 if (!VAR_14->ent && !FUNC_2(VAR_14)) {
  VAR_17 = -VAR_0;
  goto out_err;
 }

 FUNC_8();


 for (VAR_19 = 0, VAR_18 = VAR_10; VAR_19 < VAR_2 && VAR_18; VAR_19++) {
  VAR_12[VAR_19] = FUNC_1(VAR_1);
  if (!VAR_12[VAR_19])
   break;

  VAR_18 = FUNC_12(VAR_18, VAR_14);


  VAR_17 = FUNC_11(&VAR_14->seq,
       FUNC_5(VAR_12[VAR_19]),
       VAR_14->seq.len);
  if (VAR_17 < 0) {
   FUNC_0(VAR_12[VAR_19]);
   break;
  }
  VAR_13[VAR_19].offset = 0;
  VAR_13[VAR_19].len = VAR_14->seq.len;

  FUNC_10(&VAR_14->seq);
 }

 FUNC_9();
 FUNC_4(&VAR_14->mutex);

 VAR_15.nr_pages = VAR_19;

 return FUNC_6(VAR_9, &VAR_15);

out_err:
 FUNC_4(&VAR_14->mutex);

 return VAR_17;
}
