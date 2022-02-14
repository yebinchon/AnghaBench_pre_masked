
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct QBUFFER {scalar_t__ data_len; scalar_t__ data; } ;
struct AdapterControlBlock {scalar_t__ adapter_type; size_t rqbuf_lastindex; int * rqbuffer; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct AdapterControlBlock*,struct QBUFFER*) ;
 int FUNC_1 (struct AdapterControlBlock*) ;

__attribute__((used)) static u_int32_t FUNC_2(struct AdapterControlBlock *VAR_2,
 struct QBUFFER *VAR_3) {

 u_int8_t *VAR_4;
 u_int8_t *VAR_5;
 u_int32_t VAR_6;

 if(VAR_2->adapter_type >= VAR_0) {
  return(FUNC_0(VAR_2, VAR_3));
 }
 VAR_5 = (u_int8_t *)VAR_3->data;
 VAR_6 = (u_int32_t)VAR_3->data_len;
 while (VAR_6 > 0) {
  VAR_4 = &VAR_2->rqbuffer[VAR_2->rqbuf_lastindex];
  *VAR_4 = *VAR_5;
  VAR_2->rqbuf_lastindex++;

  VAR_2->rqbuf_lastindex %= VAR_1;
  VAR_5++;
  VAR_6--;
 }

 FUNC_1(VAR_2);
 return (1);
}
