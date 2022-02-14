
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (int *,char*,char*,size_t) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char const**) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(sldns_buffer* VAR_3, char* VAR_4, size_t VAR_5,
 int* VAR_6, uint32_t* VAR_7, uint32_t VAR_8)
{
 const char* VAR_9;
 if(FUNC_2(VAR_3, VAR_4, "\t\n ", VAR_5) == -1) {
  return FUNC_0(VAR_2,
   FUNC_3(VAR_3));
 }
 *VAR_7 = (uint32_t) FUNC_4(VAR_4, &VAR_9);

 if (FUNC_5(VAR_4) > 0 && !FUNC_1((unsigned char)VAR_4[0])) {
  *VAR_6 = 1;

  if (VAR_8 == 0) {
   *VAR_7 = VAR_0;
  } else {
   *VAR_7 = VAR_8;
  }
 }
 return VAR_1;
}
