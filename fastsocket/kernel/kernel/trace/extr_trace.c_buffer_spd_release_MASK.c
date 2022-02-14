
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct splice_pipe_desc {TYPE_1__* partial; } ;
struct buffer_ref {int page; int buffer; scalar_t__ ref; } ;
struct TYPE_2__ {scalar_t__ private; } ;


 int FUNC_0 (struct buffer_ref*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct splice_pipe_desc *VAR_0, unsigned int VAR_1)
{
 struct buffer_ref *VAR_2 =
  (struct buffer_ref *)VAR_0->partial[VAR_1].private;

 if (--VAR_2->ref)
  return;

 FUNC_1(VAR_2->buffer, VAR_2->page);
 FUNC_0(VAR_2);
 VAR_0->partial[VAR_1].private = 0;
}
