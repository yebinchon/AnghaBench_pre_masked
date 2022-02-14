
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_fast_read_ctx {char* buf; int line; } ;
struct eap_fast_pac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_fast_read_ctx*) ;
 int FUNC_1 (struct eap_fast_pac*) ;
 scalar_t__ FUNC_2 (struct eap_sm*,char const*,struct eap_fast_read_ctx*) ;
 char* FUNC_3 (struct eap_fast_pac*,char*) ;
 char* FUNC_4 (struct eap_fast_pac*,char*) ;
 char* FUNC_5 (struct eap_fast_pac**,struct eap_fast_pac**) ;
 char* FUNC_6 (struct eap_fast_pac*,char*) ;
 char* FUNC_7 (struct eap_fast_pac*,char*) ;
 char* FUNC_8 (struct eap_fast_pac*,char*) ;
 char* FUNC_9 (struct eap_fast_pac*,char*) ;
 char* FUNC_10 (struct eap_fast_pac**) ;
 scalar_t__ FUNC_11 (struct eap_fast_read_ctx*,char**) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 char* VAR_2 ;
 int FUNC_13 (int ,char*,...) ;

int FUNC_14(struct eap_sm *VAR_3, struct eap_fast_pac **VAR_4,
        const char *VAR_5)
{
 struct eap_fast_read_ctx VAR_6;
 struct eap_fast_pac *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 char *VAR_9;
 const char *VAR_10 = ((void*)0);

 if (VAR_5 == ((void*)0))
  return -1;

 if (FUNC_2(VAR_3, VAR_5, &VAR_6) < 0)
  return 0;

 if (FUNC_11(&VAR_6, &VAR_9) < 0) {

  FUNC_0(&VAR_6);
  return 0;
 }
 if (FUNC_12(VAR_2, VAR_6.buf) != 0)
  VAR_10 = "Unrecognized header line";

 while (!VAR_10 && FUNC_11(&VAR_6, &VAR_9) == 0) {
  if (FUNC_12(VAR_6.buf, "START") == 0)
   VAR_10 = FUNC_10(&VAR_7);
  else if (FUNC_12(VAR_6.buf, "END") == 0) {
   VAR_10 = FUNC_5(VAR_4, &VAR_7);
   VAR_8++;
  } else if (!VAR_7)
   VAR_10 = "Unexpected line outside START/END block";
  else if (FUNC_12(VAR_6.buf, "PAC-Type") == 0)
   VAR_10 = FUNC_9(VAR_7, VAR_9);
  else if (FUNC_12(VAR_6.buf, "PAC-Key") == 0)
   VAR_10 = FUNC_7(VAR_7, VAR_9);
  else if (FUNC_12(VAR_6.buf, "PAC-Opaque") == 0)
   VAR_10 = FUNC_8(VAR_7, VAR_9);
  else if (FUNC_12(VAR_6.buf, "A-ID") == 0)
   VAR_10 = FUNC_3(VAR_7, VAR_9);
  else if (FUNC_12(VAR_6.buf, "I-ID") == 0)
   VAR_10 = FUNC_6(VAR_7, VAR_9);
  else if (FUNC_12(VAR_6.buf, "A-ID-Info") == 0)
   VAR_10 = FUNC_4(VAR_7, VAR_9);
 }

 if (VAR_7) {
  if (!VAR_10)
   VAR_10 = "PAC block not terminated with END";
  FUNC_1(VAR_7);
 }

 FUNC_0(&VAR_6);

 if (VAR_10) {
  FUNC_13(VAR_1, "EAP-FAST: %s in '%s:%d'",
      VAR_10, VAR_5, VAR_6.line);
  return -1;
 }

 FUNC_13(VAR_0, "EAP-FAST: Read %d PAC entries from '%s'",
     VAR_8, VAR_5);

 return 0;
}
