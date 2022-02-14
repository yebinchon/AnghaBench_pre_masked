
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfifo {unsigned char* buffer; unsigned int size; int * lock; scalar_t__ out; scalar_t__ in; } ;
typedef int spinlock_t ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct kfifo* FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 struct kfifo* FUNC_3 (int,int ) ;

struct kfifo *FUNC_4(unsigned char *VAR_1, unsigned int VAR_2,
    gfp_t VAR_3, spinlock_t *VAR_4)
{
 struct kfifo *VAR_5;


 FUNC_0(!FUNC_2(VAR_2));

 VAR_5 = FUNC_3(sizeof(struct kfifo), VAR_3);
 if (!VAR_5)
  return FUNC_1(-VAR_0);

 VAR_5->buffer = VAR_1;
 VAR_5->size = VAR_2;
 VAR_5->in = VAR_5->out = 0;
 VAR_5->lock = VAR_4;

 return VAR_5;
}
