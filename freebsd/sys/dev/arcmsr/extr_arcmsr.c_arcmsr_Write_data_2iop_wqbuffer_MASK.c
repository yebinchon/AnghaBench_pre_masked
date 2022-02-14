
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct QBUFFER {int data_len; scalar_t__ data; } ;
struct AdapterControlBlock {scalar_t__ adapter_type; int acb_flags; size_t wqbuf_firstindex; size_t wqbuf_lastindex; int * wqbuffer; } ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 struct QBUFFER* FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_3)
{
 u_int8_t *VAR_4;
 struct QBUFFER *VAR_5;
 u_int8_t *VAR_6;
 int32_t VAR_7=0;

 if(VAR_3->adapter_type >= VAR_0) {
  FUNC_0(VAR_3);
  return;
 }
 if(VAR_3->acb_flags & VAR_1) {
  VAR_3->acb_flags &= (~VAR_1);
  VAR_5 = FUNC_1(VAR_3);
  VAR_6 = (u_int8_t *)VAR_5->data;
  while((VAR_3->wqbuf_firstindex != VAR_3->wqbuf_lastindex)
   && (VAR_7 < 124)) {
   VAR_4 = &VAR_3->wqbuffer[VAR_3->wqbuf_firstindex];
   *VAR_6 = *VAR_4;
   VAR_3->wqbuf_firstindex++;
   VAR_3->wqbuf_firstindex %= VAR_2;
   VAR_6++;
   VAR_7++;
  }
  VAR_5->data_len = VAR_7;
  FUNC_2(VAR_3);
 }
}
