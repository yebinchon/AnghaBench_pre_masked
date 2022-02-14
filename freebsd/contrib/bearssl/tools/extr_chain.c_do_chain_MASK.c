
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* data; int data_len; } ;
typedef TYPE_1__ br_x509_certificate ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,TYPE_1__*,int ) ;
 int FUNC_4 (char*,...) ;
 TYPE_1__* FUNC_5 (char const*,size_t*) ;
 int FUNC_6 (char*,char*,int ) ;
 int VAR_0 ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;

int
FUNC_9(int VAR_1, char *VAR_2[])
{
 int VAR_3;
 int VAR_4;
 int VAR_5, VAR_6;
 long VAR_7, VAR_8;

 VAR_3 = 0;
 VAR_4 = 1;
 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 ++) {
  const char *VAR_9;

  VAR_9 = VAR_2[VAR_5];
  if (VAR_9[0] != '-') {
   VAR_6 ++;
   continue;
  }
  VAR_2[VAR_5] = ((void*)0);
  if (FUNC_0(VAR_9, "-v") || FUNC_0(VAR_9, "-verbose")) {
   VAR_4 = 1;
  } else if (FUNC_0(VAR_9, "-q") || FUNC_0(VAR_9, "-quiet")) {
   VAR_4 = 0;
  } else {
   FUNC_2(VAR_0, "ERROR: unknown option: '%s'\n", VAR_9);
   FUNC_7();
   goto chain_exit_error;
  }
 }
 if (VAR_6 == 0) {
  FUNC_2(VAR_0, "ERROR: no certificate file provided\n");
  FUNC_7();
  goto chain_exit_error;
 }

 VAR_8 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 ++) {
  const char *VAR_10;
  br_x509_certificate *VAR_11;
  size_t VAR_12, VAR_13;

  VAR_10 = VAR_2[VAR_5];
  if (VAR_10 == ((void*)0)) {
   continue;
  }
  if (VAR_4) {
   FUNC_2(VAR_0, "Reading file '%s': ", VAR_10);
   FUNC_1(VAR_0);
  }
  VAR_11 = FUNC_5(VAR_10, &VAR_13);
  if (VAR_11 == ((void*)0)) {
   goto chain_exit_error;
  }
  if (VAR_4) {
   FUNC_2(VAR_0, "%lu certificate%s\n",
    (unsigned long)VAR_13, VAR_13 > 1 ? "s" : "");
  }
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12 ++) {
   char VAR_14[50];

   FUNC_6(VAR_14, "CERT%ld", VAR_8 ++);
   FUNC_3(VAR_14, VAR_11[VAR_12].data, VAR_11[VAR_12].data_len);
   FUNC_8(VAR_11[VAR_12].data);
  }
  FUNC_8(VAR_11);
 }

 FUNC_4("\nstatic const br_x509_certificate CHAIN[] = {");
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7 ++) {
  if (VAR_7 != 0) {
   FUNC_4(",");
  }
  FUNC_4("\n\t{ (unsigned char *)CERT%ld, sizeof CERT%ld }",
   VAR_7, VAR_7);
 }
 FUNC_4("\n};\n");
 FUNC_4("\n#define CHAIN_LEN   %ld\n", VAR_8);




chain_exit:
 return VAR_3;

chain_exit_error:
 VAR_3 = -1;
 goto chain_exit;
}
