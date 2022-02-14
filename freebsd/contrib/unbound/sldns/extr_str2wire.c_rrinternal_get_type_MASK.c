
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,char*,size_t) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(sldns_buffer* VAR_2, char* VAR_3, size_t VAR_4,
 int* VAR_5, uint16_t* VAR_6)
{

 if(!*VAR_5) {

  if(FUNC_1(VAR_2, VAR_3, "\t\n ", VAR_4) == -1) {
   return FUNC_0(VAR_1,
    FUNC_2(VAR_2));
  }
 }
 *VAR_6 = FUNC_3(VAR_3);
 if(*VAR_6 == 0 && FUNC_4(VAR_3, "TYPE0") != 0) {
  return FUNC_0(VAR_1,
   FUNC_2(VAR_2));
 }
 return VAR_0;
}
