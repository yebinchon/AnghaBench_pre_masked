
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config_blob {char* name; int len; int data; } ;
typedef int FILE ;


 unsigned char* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,char*,char*,unsigned char*) ;
 int FUNC_2 (unsigned char*) ;

__attribute__((used)) static int FUNC_3(FILE *VAR_0, struct wpa_config_blob *VAR_1)
{
 unsigned char *VAR_2;

 VAR_2 = FUNC_0(VAR_1->data, VAR_1->len, ((void*)0));
 if (VAR_2 == ((void*)0))
  return -1;

 FUNC_1(VAR_0, "\nblob-base64-%s={\n%s}\n", VAR_1->name, VAR_2);
 FUNC_2(VAR_2);
 return 0;
}
