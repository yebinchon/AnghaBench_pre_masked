
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int sldns_buffer ;


 size_t VAR_0 ;
 size_t FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

size_t
FUNC_3(sldns_buffer* VAR_1)
{
 size_t VAR_2 = 0;
 size_t VAR_3;
 while(1) {
  if(FUNC_1(VAR_1) < 1)
   return 0;
  VAR_3 = FUNC_0(VAR_1);
  if(VAR_3&0xc0)
   return 0;
  VAR_2 += VAR_3 + 1;
  if(VAR_2 > VAR_0)
   return 0;
  if(VAR_3 == 0)
   return VAR_2;
  if(FUNC_1(VAR_1) < VAR_3)
   return 0;
  FUNC_2(VAR_1, (ssize_t)VAR_3);
 }
}
