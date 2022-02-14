
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pbuf ;
typedef int cn_buf ;
struct TYPE_8__ {int key_type; } ;
typedef TYPE_1__ br_x509_pkey ;
struct TYPE_9__ {unsigned char* oid; char* buf; int len; scalar_t__ status; } ;
typedef TYPE_2__ br_name_element ;




 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 () ;
 unsigned char* FUNC_6 (TYPE_1__*,char*,char const*) ;
 unsigned char* FUNC_7 (TYPE_1__*,char*,char const*) ;
 TYPE_1__* FUNC_8 (char*,TYPE_2__*,int) ;
 int FUNC_9 (TYPE_1__*) ;

unsigned char *
FUNC_10(const char *VAR_1, int VAR_2)
{
 br_x509_pkey *VAR_3;
 br_name_element VAR_4;
 char VAR_5[80];
 unsigned char VAR_6[4];
 char VAR_7[VAR_0];
 char *VAR_8;
 unsigned char *VAR_9;
 size_t VAR_10;

 FUNC_0(5, ("verify_sig: %s\n", VAR_1));
 VAR_10 = FUNC_4(VAR_7, VAR_1, sizeof(VAR_7));
 if (VAR_10 > (sizeof(VAR_7) - 5) || FUNC_2(&VAR_1[VAR_10 - 3], "sig") != 0)
  return (((void*)0));
 VAR_8 = FUNC_3(&VAR_7[VAR_10 - 3], "certs");




 VAR_6[0] = 3;
 VAR_6[1] = 0x55;
 VAR_6[2] = 4;
 VAR_6[3] = 3;
 VAR_4.oid = VAR_6;
 VAR_4.buf = VAR_5;
 VAR_4.len = sizeof(VAR_5);

 VAR_3 = FUNC_8(VAR_7, &VAR_4, 1);
 if (!VAR_3) {
  FUNC_1("cannot verify: %s: %s\n", VAR_7, FUNC_5());
  return (((void*)0));
 }
 for (; VAR_8 > VAR_7; VAR_8--) {
  if (*VAR_8 == '.') {
   *VAR_8 = '\0';
   break;
  }
 }
 switch (VAR_3->key_type) {
 default:
  VAR_9 = ((void*)0);
 }
 FUNC_9(VAR_3);
 if (!VAR_9) {
  FUNC_1("Unverified %s (%s)\n", VAR_7,
      VAR_4.status ? VAR_5 : "unknown");
 } else if ((VAR_2 & 1) != 0) {
  FUNC_1("Verified %s signed by %s\n", VAR_7,
      VAR_4.status ? VAR_5 : "someone we trust");
 }
 return (VAR_9);
}
