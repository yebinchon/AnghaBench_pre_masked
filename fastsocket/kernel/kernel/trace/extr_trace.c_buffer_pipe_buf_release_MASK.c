
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {scalar_t__ private; } ;
struct buffer_ref {int page; int buffer; scalar_t__ ref; } ;


 int FUNC_0 (struct buffer_ref*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pipe_inode_info *VAR_0,
        struct pipe_buffer *VAR_1)
{
 struct buffer_ref *VAR_2 = (struct buffer_ref *)VAR_1->private;

 if (--VAR_2->ref)
  return;

 FUNC_1(VAR_2->buffer, VAR_2->page);
 FUNC_0(VAR_2);
 VAR_1->private = 0;
}
