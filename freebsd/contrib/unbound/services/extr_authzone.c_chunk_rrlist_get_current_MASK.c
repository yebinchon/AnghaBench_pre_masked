
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct auth_chunk {size_t len; int data; } ;
typedef int ssize_t ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,size_t) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,size_t) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int
FUNC_11(struct auth_chunk* VAR_1, int VAR_2,
 size_t VAR_3, uint8_t** VAR_4, uint16_t* VAR_5,
 uint16_t* VAR_6, uint32_t* VAR_7, uint16_t* VAR_8,
 uint8_t** VAR_9, size_t* VAR_10)
{
 sldns_buffer VAR_11;

 if(!VAR_1) return 0;
 if(VAR_1->len < VAR_0) return 0;
 if(VAR_2 >= (int)FUNC_0(VAR_1->data)) return 0;
 if(VAR_3 >= VAR_1->len) return 0;


 FUNC_4(&VAR_11, VAR_1->data, VAR_1->len);
 if(VAR_3 == 0) {
  size_t VAR_12;

  FUNC_9(&VAR_11, VAR_0);
  for(VAR_12=0; VAR_12<FUNC_1(VAR_1->data); VAR_12++) {
   if(FUNC_2(&VAR_11) == 0) return 0;
   if(FUNC_8(&VAR_11) < 4) return 0;
   FUNC_10(&VAR_11, 4);
  }
 } else {
  FUNC_9(&VAR_11, VAR_3);
 }
 *VAR_4 = FUNC_3(&VAR_11);
 if(FUNC_2(&VAR_11) == 0) return 0;
 if(FUNC_8(&VAR_11) < 10) return 0;
 *VAR_5 = FUNC_6(&VAR_11);
 *VAR_6 = FUNC_6(&VAR_11);
 *VAR_7 = FUNC_7(&VAR_11);
 *VAR_8 = FUNC_6(&VAR_11);
 if(FUNC_8(&VAR_11) < (*VAR_8)) return 0;
 *VAR_9 = FUNC_3(&VAR_11);
 FUNC_10(&VAR_11, (ssize_t)(*VAR_8));
 *VAR_10 = FUNC_5(&VAR_11);
 return 1;
}
