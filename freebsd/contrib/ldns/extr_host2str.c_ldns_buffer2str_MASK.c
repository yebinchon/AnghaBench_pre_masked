
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ldns_buffer ;


 scalar_t__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 char* FUNC_6 (char const*) ;

char *
FUNC_7(ldns_buffer *VAR_0)
{
 char *VAR_1;



 if (*(FUNC_0(VAR_0, FUNC_2(VAR_0))) != 0) {
  if (!FUNC_3(VAR_0, 1)) {
   return ((void*)0);
  }
  FUNC_5(VAR_0, (uint8_t) '\0');
  if (!FUNC_4(VAR_0, FUNC_2(VAR_0))) {
   return ((void*)0);
  }
 }

 VAR_1 = FUNC_6((const char *)FUNC_1(VAR_0));
        if(!VAR_1) {
                return ((void*)0);
        }
 return VAR_1;
}
