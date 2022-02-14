
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,char*,size_t) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(sldns_buffer* VAR_3, char* VAR_4, size_t VAR_5,
 int* VAR_6, uint16_t* VAR_7)
{

 if(!*VAR_6) {

  if(FUNC_1(VAR_3, VAR_4, "\t\n ", VAR_5) == -1) {
   return FUNC_0(VAR_2,
    FUNC_2(VAR_3));
  }
 } else *VAR_6 = 0;
 *VAR_7 = FUNC_3(VAR_4);

 if(*VAR_7 == 0 && FUNC_4(VAR_4, "CLASS0") != 0) {
  *VAR_6 = 1;
  *VAR_7 = VAR_0;
 }
 return VAR_1;
}
