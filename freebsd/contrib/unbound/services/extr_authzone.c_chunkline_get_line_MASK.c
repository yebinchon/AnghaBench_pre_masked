
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct auth_chunk {size_t len; struct auth_chunk* next; scalar_t__* data; } ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct auth_chunk** VAR_1, size_t* VAR_2,
 sldns_buffer* VAR_3)
{
 int VAR_4 = 0;
 while(*VAR_1) {

  if(*VAR_2 < (*VAR_1)->len) {
   VAR_4 = 1;
   while(*VAR_2 < (*VAR_1)->len) {
    char VAR_5 = (char)((*VAR_1)->data[*VAR_2]);
    (*VAR_2)++;
    if(FUNC_0(VAR_3) < 2) {

     FUNC_2(VAR_0, "http chunkline, "
      "line too long");
     return 0;
    }
    FUNC_1(VAR_3, (uint8_t)VAR_5);
    if(VAR_5 == '\n') {

     return 1;
    }
   }
  }

  *VAR_1 = (*VAR_1)->next;
  *VAR_2 = 0;
 }

 if(VAR_4) return 1;
 return 0;
}
