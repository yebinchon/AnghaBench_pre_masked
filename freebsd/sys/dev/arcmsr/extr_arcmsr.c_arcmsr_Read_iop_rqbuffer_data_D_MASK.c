
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct QBUFFER {scalar_t__ data_len; scalar_t__ data; } ;
struct AdapterControlBlock {size_t rqbuf_lastindex; int * rqbuffer; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int,int ,int) ;

__attribute__((used)) static u_int32_t FUNC_3(struct AdapterControlBlock *VAR_4,
 struct QBUFFER *VAR_5) {

 u_int8_t *VAR_6;
 u_int8_t *VAR_7 = ((void*)0);
 u_int32_t *VAR_8, *VAR_9 = ((void*)0);
 u_int32_t VAR_10, VAR_11;

 VAR_8 = (u_int32_t *)VAR_5->data;
 VAR_10 = (u_int32_t)VAR_5->data_len;
 if ( VAR_10 > 0 )
 {
  VAR_7 = FUNC_2(128, VAR_1, VAR_2 | VAR_3);
  VAR_9 = (u_int32_t *)VAR_7;
  if( VAR_7 == ((void*)0))
   return (0);
  VAR_11 = VAR_10;
  while(VAR_11 >= 4)
  {
   *VAR_9++ = *VAR_8++;
   VAR_11 -= 4;
  }
  if(VAR_11)
   *VAR_9 = *VAR_8;
  VAR_9 = (u_int32_t *)VAR_7;
 }
 while (VAR_10 > 0) {
  VAR_6 = &VAR_4->rqbuffer[VAR_4->rqbuf_lastindex];
  *VAR_6 = *VAR_7;
  VAR_4->rqbuf_lastindex++;

  VAR_4->rqbuf_lastindex %= VAR_0;
  VAR_7++;
  VAR_10--;
 }
 if(VAR_9)
  FUNC_1( (u_int8_t *)VAR_9, VAR_1);

 FUNC_0(VAR_4);
 return (1);
}
