
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_chunk {int dummy; } ;
typedef int sldns_buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,size_t) ;
 int FUNC_1 (struct auth_chunk**,size_t*,int *) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__,int ) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int
FUNC_10(struct auth_chunk** VAR_1, size_t* VAR_2,
 sldns_buffer* VAR_3)
{
 size_t VAR_4;
 int VAR_5 = 0;
 FUNC_3(VAR_3);
 VAR_4 = FUNC_6(VAR_3);
 if(!FUNC_1(VAR_1, VAR_2, VAR_3)) {
  if(FUNC_6(VAR_3) < FUNC_5(VAR_3))
   FUNC_8(VAR_3, FUNC_6(VAR_3), 0);
  else FUNC_8(VAR_3, FUNC_6(VAR_3)-1, 0);
  FUNC_4(VAR_3);
  return 0;
 }
 VAR_5 += FUNC_0(VAR_3, VAR_4);
 while(VAR_5 > 0) {
  FUNC_2(VAR_3, VAR_4);
  VAR_4 = FUNC_6(VAR_3);
  if(!FUNC_1(VAR_1, VAR_2, VAR_3)) {
   if(FUNC_6(VAR_3) < FUNC_5(VAR_3))
    FUNC_8(VAR_3, FUNC_6(VAR_3), 0);
   else FUNC_8(VAR_3, FUNC_6(VAR_3)-1, 0);
   FUNC_4(VAR_3);
   return 0;
  }
  VAR_5 += FUNC_0(VAR_3, VAR_4);
 }

 if(FUNC_7(VAR_3) < 1) {
  FUNC_9(VAR_0, "http chunkline: "
   "line too long");
  return 0;
 }
 FUNC_8(VAR_3, FUNC_6(VAR_3), 0);
 FUNC_4(VAR_3);
 return 1;
}
