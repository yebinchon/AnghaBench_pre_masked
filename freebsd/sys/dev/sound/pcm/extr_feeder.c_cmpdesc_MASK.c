
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_feederdesc {scalar_t__ type; scalar_t__ in; scalar_t__ out; scalar_t__ flags; } ;



__attribute__((used)) static int
FUNC_0(struct pcm_feederdesc *VAR_0, struct pcm_feederdesc *VAR_1)
{
 return ((VAR_0->type == VAR_1->type) &&
  ((VAR_0->in == 0) || (VAR_0->in == VAR_1->in)) &&
  ((VAR_0->out == 0) || (VAR_0->out == VAR_1->out)) &&
  (VAR_0->flags == VAR_1->flags));
}
