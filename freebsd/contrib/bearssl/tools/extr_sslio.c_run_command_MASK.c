
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t session_id_len; int* session_id; } ;
typedef TYPE_1__ br_ssl_session_parameters ;
typedef int br_ssl_engine_context ;
typedef int br_ssl_client_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(br_ssl_engine_context *VAR_1, unsigned char *VAR_2, size_t VAR_3)
{



 static br_ssl_session_parameters VAR_4;
 static int VAR_5 = 0;

 size_t VAR_6;

 if (VAR_3 < 2 || VAR_3 > 3) {
  return 0;
 }
 if (VAR_3 == 3 && (VAR_2[1] != '\r' || VAR_2[2] != '\n')) {
  return 0;
 }
 if (VAR_3 == 2 && VAR_2[1] != '\n') {
  return 0;
 }
 switch (VAR_2[0]) {
 case 'Q':
  FUNC_5(VAR_0, "closing...\n");
  FUNC_1(VAR_1);
  return 1;
 case 'R':
  if (FUNC_3(VAR_1)) {
   FUNC_5(VAR_0, "renegotiating...\n");
  } else {
   FUNC_5(VAR_0, "not renegotiating.\n");
  }
  return 1;
 case 'F':







  FUNC_5(VAR_0, "forgetting session...\n");
  FUNC_0((br_ssl_client_context *)VAR_1);
  return 1;
 case 'S':
  FUNC_5(VAR_0, "saving session parameters...\n");
  FUNC_2(VAR_1, &VAR_4);
  FUNC_5(VAR_0, "  id = ");
  for (VAR_6 = 0; VAR_6 < VAR_4.session_id_len; VAR_6 ++) {
   FUNC_5(VAR_0, "%02X", VAR_4.session_id[VAR_6]);
  }
  FUNC_5(VAR_0, "\n");
  VAR_5 = 1;
  return 1;
 case 'P':
  if (VAR_5) {
   FUNC_5(VAR_0, "restoring session parameters...\n");
   FUNC_5(VAR_0, "  id = ");
   for (VAR_6 = 0; VAR_6 < VAR_4.session_id_len; VAR_6 ++) {
    FUNC_5(VAR_0, "%02X", VAR_4.session_id[VAR_6]);
   }
   FUNC_5(VAR_0, "\n");
   FUNC_4(VAR_1, &VAR_4);
   return 1;
  }
  return 0;
 default:
  return 0;
 }
}
