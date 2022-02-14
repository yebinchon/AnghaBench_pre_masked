
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct json_token {scalar_t__ type; scalar_t__ string; } ;


 scalar_t__ VAR_0 ;
 unsigned char* FUNC_0 (unsigned char const*,int ,size_t*) ;
 struct json_token* FUNC_1 (struct json_token*,char const*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (scalar_t__) ;
 struct wpabuf* FUNC_4 (unsigned char*,size_t) ;

struct wpabuf * FUNC_5(struct json_token *VAR_1,
       const char *VAR_2)
{
 struct json_token *VAR_3;
 unsigned char *VAR_4;
 size_t VAR_5;
 struct wpabuf *VAR_6;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3 || VAR_3->type != VAR_0)
  return ((void*)0);
 VAR_4 = FUNC_0((const unsigned char *) VAR_3->string,
    FUNC_3(VAR_3->string), &VAR_5);
 if (!VAR_4)
  return ((void*)0);
 VAR_6 = FUNC_4(VAR_4, VAR_5);
 if (!VAR_6)
  FUNC_2(VAR_4);

 return VAR_6;
}
