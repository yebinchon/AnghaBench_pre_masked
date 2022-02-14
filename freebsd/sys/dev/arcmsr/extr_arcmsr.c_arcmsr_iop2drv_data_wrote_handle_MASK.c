
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct QBUFFER {int data_len; } ;
struct AdapterControlBlock {int rqbuf_lastindex; int rqbuf_firstindex; int qbuffer_lock; int acb_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct AdapterControlBlock*,struct QBUFFER*) ;
 struct QBUFFER* FUNC_3 (struct AdapterControlBlock*) ;

__attribute__((used)) static void FUNC_4(struct AdapterControlBlock *VAR_2)
{
 struct QBUFFER *VAR_3;
 int VAR_4;


 FUNC_0(&VAR_2->qbuffer_lock);
 VAR_3 = FUNC_3(VAR_2);
 VAR_4 = (VAR_2->rqbuf_lastindex - VAR_2->rqbuf_firstindex - 1) &
  (VAR_1-1);
 if(VAR_4 >= VAR_3->data_len) {
  if(FUNC_2(VAR_2, VAR_3) == 0)
   VAR_2->acb_flags |= VAR_0;
 } else {
  VAR_2->acb_flags |= VAR_0;
 }
 FUNC_1(&VAR_2->qbuffer_lock);
}
