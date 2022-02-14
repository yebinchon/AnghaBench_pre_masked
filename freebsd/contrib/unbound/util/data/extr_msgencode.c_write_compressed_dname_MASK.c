
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct compress_tree_node {int labs; int offset; } ;
typedef int sldns_buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__*,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(sldns_buffer* VAR_0, uint8_t* VAR_1, int VAR_2,
 struct compress_tree_node* VAR_3)
{

 int VAR_4 = VAR_2 - VAR_3->labs;
 uint8_t VAR_5;
 uint16_t VAR_6;

 if(VAR_2 == 1) {

  if(FUNC_1(VAR_0) < 1)
   return 0;
  FUNC_4(VAR_0, 0);
  return 1;
 }


 while(VAR_4--) {
  VAR_5 = *VAR_1++;
  if(FUNC_1(VAR_0) < (size_t)VAR_5+1)
   return 0;
  FUNC_4(VAR_0, VAR_5);
  FUNC_2(VAR_0, VAR_1, VAR_5);
  VAR_1 += VAR_5;
 }

 if(FUNC_1(VAR_0) < 2)
  return 0;
 VAR_6 = FUNC_0(VAR_3->offset);
 FUNC_3(VAR_0, VAR_6);
 return 1;
}
