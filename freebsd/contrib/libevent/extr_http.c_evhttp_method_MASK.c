
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum evhttp_cmd_type { ____Placeholder_evhttp_cmd_type } evhttp_cmd_type ;
__attribute__((used)) static const char *
FUNC_0(enum evhttp_cmd_type VAR_0)
{
 const char *VAR_1;

 switch (VAR_0) {
 case 134:
  VAR_1 = "GET";
  break;
 case 130:
  VAR_1 = "POST";
  break;
 case 133:
  VAR_1 = "HEAD";
  break;
 case 129:
  VAR_1 = "PUT";
  break;
 case 135:
  VAR_1 = "DELETE";
  break;
 case 132:
  VAR_1 = "OPTIONS";
  break;
 case 128:
  VAR_1 = "TRACE";
  break;
 case 136:
  VAR_1 = "CONNECT";
  break;
 case 131:
  VAR_1 = "PATCH";
  break;
 default:
  VAR_1 = ((void*)0);
  break;
 }

 return (VAR_1);
}
