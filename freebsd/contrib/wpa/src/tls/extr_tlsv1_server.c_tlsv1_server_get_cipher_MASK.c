
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cipher_suite; } ;
struct tlsv1_server {TYPE_1__ rl; } ;
 size_t FUNC_0 (char*,char*,size_t) ;

int FUNC_1(struct tlsv1_server *VAR_0, char *VAR_1,
       size_t VAR_2)
{
 char *VAR_3;

 switch (VAR_0->rl.cipher_suite) {
 case 129:
  VAR_3 = "RC4-MD5";
  break;
 case 128:
  VAR_3 = "RC4-SHA";
  break;
 case 130:
  VAR_3 = "DES-CBC-SHA";
  break;
 case 135:
  VAR_3 = "DES-CBC3-SHA";
  break;
 case 143:
  VAR_3 = "DHE-RSA-DES-CBC-SHA";
  break;
 case 148:
  VAR_3 = "DHE-RSA-DES-CBC3-SHA";
  break;
 case 136:
  VAR_3 = "ADH-RC4-MD5";
  break;
 case 137:
  VAR_3 = "ADH-DES-SHA";
  break;
 case 142:
  VAR_3 = "ADH-DES-CBC3-SHA";
  break;
 case 134:
  VAR_3 = "AES-128-SHA";
  break;
 case 147:
  VAR_3 = "DHE-RSA-AES-128-SHA";
  break;
 case 141:
  VAR_3 = "ADH-AES-128-SHA";
  break;
 case 132:
  VAR_3 = "AES-256-SHA";
  break;
 case 145:
  VAR_3 = "DHE-RSA-AES-256-SHA";
  break;
 case 139:
  VAR_3 = "ADH-AES-256-SHA";
  break;
 case 133:
  VAR_3 = "AES-128-SHA256";
  break;
 case 131:
  VAR_3 = "AES-256-SHA256";
  break;
 case 146:
  VAR_3 = "DHE-RSA-AES-128-SHA256";
  break;
 case 144:
  VAR_3 = "DHE-RSA-AES-256-SHA256";
  break;
 case 140:
  VAR_3 = "ADH-AES-128-SHA256";
  break;
 case 138:
  VAR_3 = "ADH-AES-256-SHA256";
  break;
 default:
  return -1;
 }

 if (FUNC_0(VAR_1, VAR_3, VAR_2) >= VAR_2)
  return -1;
 return 0;
}
