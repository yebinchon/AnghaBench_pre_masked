
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char* FUNC_0 (unsigned char*,int ,size_t*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static unsigned char * FUNC_4(char *VAR_1, size_t *VAR_2)
{
 char *VAR_3, *VAR_4;
 unsigned char *VAR_5;

 VAR_3 = FUNC_2(VAR_1, "<Base64>");
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_3 += 8;
 VAR_4 = FUNC_2(VAR_3, "</Base64>");
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 *VAR_4 = '\0';

 VAR_5 = FUNC_0((unsigned char *) VAR_3, FUNC_1(VAR_3),
    VAR_2);
 *VAR_4 = '<';
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_0, "TNC: Failed to decode Base64 data");
 }

 return VAR_5;
}
