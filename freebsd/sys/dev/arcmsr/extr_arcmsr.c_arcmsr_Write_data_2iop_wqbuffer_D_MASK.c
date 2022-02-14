
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct QBUFFER {int data_len; scalar_t__ data; } ;
struct AdapterControlBlock {int acb_flags; size_t wqbuf_firstindex; size_t wqbuf_lastindex; int * wqbuffer; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct QBUFFER* FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct AdapterControlBlock *VAR_5)
{
 u_int8_t *VAR_6;
 struct QBUFFER *VAR_7;
 u_int8_t *VAR_8 = ((void*)0);
 u_int32_t *VAR_9, *VAR_10 = ((void*)0);
 u_int32_t VAR_11 = 0, VAR_12;

 if(VAR_5->acb_flags & VAR_0) {
  VAR_8 = FUNC_3(128, VAR_2, VAR_3 | VAR_4);
  VAR_10 = (u_int32_t *)VAR_8;
  if( VAR_8 == ((void*)0))
   return;

  VAR_5->acb_flags &= (~VAR_0);
  VAR_7 = FUNC_0(VAR_5);
  VAR_9 = (u_int32_t *)VAR_7->data;
  while((VAR_5->wqbuf_firstindex != VAR_5->wqbuf_lastindex)
   && (VAR_11 < 124)) {
   VAR_6 = &VAR_5->wqbuffer[VAR_5->wqbuf_firstindex];
   *VAR_8 = *VAR_6;
   VAR_5->wqbuf_firstindex++;
   VAR_5->wqbuf_firstindex %= VAR_1;
   VAR_8++;
   VAR_11++;
  }
  VAR_7->data_len = VAR_11;
  VAR_12 = VAR_11;
  VAR_8 = (u_int8_t *)VAR_10;
  while(VAR_12 >= 4)
  {
   *VAR_9++ = *VAR_10++;
   VAR_12 -= 4;
  }
  if(VAR_12)
   *VAR_9 = *VAR_10;
  FUNC_2( VAR_8, VAR_2);
  FUNC_1(VAR_5);
 }
}
