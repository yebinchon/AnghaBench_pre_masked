
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_feederdesc {scalar_t__ idx; scalar_t__ flags; scalar_t__ out; scalar_t__ in; int type; } ;
struct pcm_feeder {struct pcm_feederdesc* desc; struct pcm_feederdesc desc_static; struct feeder_class* class; int * parent; int * source; int data; } ;
struct feeder_class {char* name; int data; } ;
typedef int kobj_class_t ;


 int FUNC_0 (struct pcm_feeder*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pcm_feeder*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,struct pcm_feeder*,char*,int) ;

__attribute__((used)) static struct pcm_feeder *
FUNC_4(struct feeder_class *VAR_4, struct pcm_feederdesc *VAR_5)
{
 struct pcm_feeder *VAR_6;
 int VAR_7;

 VAR_6 = (struct pcm_feeder *)FUNC_2((kobj_class_t)VAR_4, VAR_1, VAR_2 | VAR_3);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->data = VAR_4->data;
 VAR_6->source = ((void*)0);
 VAR_6->parent = ((void*)0);
 VAR_6->class = VAR_4;
 VAR_6->desc = &(VAR_6->desc_static);

 if (VAR_5) {
  *(VAR_6->desc) = *VAR_5;
 } else {
  VAR_6->desc->type = VAR_0;
  VAR_6->desc->in = 0;
  VAR_6->desc->out = 0;
  VAR_6->desc->flags = 0;
  VAR_6->desc->idx = 0;
 }

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7) {
  FUNC_3("feeder_init(%p) on %s returned %d\n", VAR_6, VAR_4->name, VAR_7);
  FUNC_1(VAR_6);

  return ((void*)0);
 }

 return VAR_6;
}
