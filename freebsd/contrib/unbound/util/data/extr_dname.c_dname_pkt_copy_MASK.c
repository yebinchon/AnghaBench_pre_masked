
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__* FUNC_5 (int *,int ) ;

void FUNC_6(sldns_buffer* VAR_2, uint8_t* VAR_3, uint8_t* VAR_4)
{

 size_t VAR_5 = 0;
 uint8_t VAR_6;
 VAR_6 = *VAR_4++;
 while(VAR_6) {
  if(FUNC_0(VAR_6)) {

   VAR_4 = FUNC_5(VAR_2, FUNC_1(VAR_6, *VAR_4));
   VAR_6 = *VAR_4++;
   continue;
  }
  FUNC_2(VAR_6 <= VAR_1);
  VAR_5 += (size_t)VAR_6+1;
  if(VAR_5 >= VAR_0) {
   *VAR_3 = 0;
   FUNC_3("bad dname in dname_pkt_copy");
   return;
  }
  *VAR_3++ = VAR_6;
  FUNC_4(VAR_3, VAR_4, VAR_6);
  VAR_4 += VAR_6;
  VAR_3 += VAR_6;
  VAR_6 = *VAR_4++;
 }

 *VAR_3 = 0;
}
