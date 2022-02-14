
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {scalar_t__ private; } ;
struct buffer_ref {int ref; } ;



__attribute__((used)) static void FUNC_0(struct pipe_inode_info *VAR_0,
    struct pipe_buffer *VAR_1)
{
 struct buffer_ref *VAR_2 = (struct buffer_ref *)VAR_1->private;

 VAR_2->ref++;
}
