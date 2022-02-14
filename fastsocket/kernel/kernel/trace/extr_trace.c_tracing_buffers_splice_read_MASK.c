
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct splice_pipe_desc {unsigned int flags; int nr_pages; struct partial_page* partial; struct page** pages; int spd_release; int * ops; } ;
struct pipe_inode_info {int dummy; } ;
struct partial_page {int len; unsigned long private; scalar_t__ offset; } ;
struct page {int dummy; } ;
struct ftrace_buffer_info {int cpu; TYPE_1__* tr; } ;
struct file {struct ftrace_buffer_info* private_data; } ;
struct buffer_ref {int ref; int page; int buffer; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int buffer; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct buffer_ref*) ;
 struct buffer_ref* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,size_t,int ,int) ;
 size_t FUNC_9 (struct pipe_inode_info*,struct splice_pipe_desc*) ;
 struct page* FUNC_10 (int ) ;

__attribute__((used)) static ssize_t
FUNC_11(struct file *VAR_9, loff_t *VAR_10,
       struct pipe_inode_info *VAR_11, size_t VAR_12,
       unsigned int VAR_13)
{
 struct ftrace_buffer_info *VAR_14 = VAR_9->private_data;
 struct partial_page VAR_15[VAR_5];
 struct page *VAR_16[VAR_5];
 struct splice_pipe_desc VAR_17 = {
  .pages = VAR_16,
  .partial = VAR_15,
  .flags = VAR_13,
  .ops = &VAR_7,
  .spd_release = VAR_8,
 };
 struct buffer_ref *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 size_t VAR_22;

 if (*VAR_10 & (VAR_4 - 1)) {
  FUNC_0(1, "Ftrace: previous read must page-align\n");
  return -VAR_1;
 }

 if (VAR_12 & (VAR_4 - 1)) {
  FUNC_0(1, "Ftrace: splice_read should page-align\n");
  if (VAR_12 < VAR_4)
   return -VAR_1;
  VAR_12 &= VAR_3;
 }

 VAR_19 = FUNC_5(VAR_14->tr->buffer, VAR_14->cpu);

 for (VAR_21 = 0; VAR_21 < VAR_5 && VAR_12 && VAR_19; VAR_21++, VAR_12 -= VAR_4) {
  struct page *VAR_23;
  int VAR_24;

  VAR_18 = FUNC_2(sizeof(*VAR_18), VAR_2);
  if (!VAR_18)
   break;

  VAR_18->ref = 1;
  VAR_18->buffer = VAR_14->tr->buffer;
  VAR_18->page = FUNC_4(VAR_18->buffer);
  if (!VAR_18->page) {
   FUNC_1(VAR_18);
   break;
  }

  VAR_24 = FUNC_8(VAR_18->buffer, &VAR_18->page,
       VAR_12, VAR_14->cpu, 1);
  if (VAR_24 < 0) {
   FUNC_6(VAR_18->buffer,
         VAR_18->page);
   FUNC_1(VAR_18);
   break;
  }





  VAR_20 = FUNC_7(VAR_18->page);
  if (VAR_20 < VAR_4)
   FUNC_3(VAR_18->page + VAR_20, 0, VAR_4 - VAR_20);

  VAR_23 = FUNC_10(VAR_18->page);

  VAR_17.pages[VAR_21] = VAR_23;
  VAR_17.partial[VAR_21].len = VAR_4;
  VAR_17.partial[VAR_21].offset = 0;
  VAR_17.partial[VAR_21].private = (unsigned long)VAR_18;
  VAR_17.nr_pages++;
  *VAR_10 += VAR_4;

  VAR_19 = FUNC_5(VAR_14->tr->buffer, VAR_14->cpu);
 }

 VAR_17.nr_pages = VAR_21;


 if (!VAR_17.nr_pages) {
  if (VAR_13 & VAR_6)
   VAR_22 = -VAR_0;
  else
   VAR_22 = 0;

  return VAR_22;
 }

 VAR_22 = FUNC_9(VAR_11, &VAR_17);

 return VAR_22;
}
