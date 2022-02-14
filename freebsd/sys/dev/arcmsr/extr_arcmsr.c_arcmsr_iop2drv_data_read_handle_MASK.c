
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {scalar_t__ wqbuf_firstindex; scalar_t__ wqbuf_lastindex; int qbuffer_lock; int acb_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct AdapterControlBlock*) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_2)
{
 FUNC_0(&VAR_2->qbuffer_lock);
 VAR_2->acb_flags |= VAR_1;






 if(VAR_2->wqbuf_firstindex != VAR_2->wqbuf_lastindex) {
  FUNC_2(VAR_2);
 }
 if(VAR_2->wqbuf_firstindex == VAR_2->wqbuf_lastindex) {
  VAR_2->acb_flags |= VAR_0;
 }
 FUNC_1(&VAR_2->qbuffer_lock);
}
