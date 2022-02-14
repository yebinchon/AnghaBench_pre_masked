
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct tlsv1_server {int state; scalar_t__ use_session_ticket; TYPE_1__* cred; scalar_t__ status_request_v2; scalar_t__ status_request; scalar_t__ status_request_multi; } ;
struct TYPE_2__ {scalar_t__ ocsp_stapling_response; scalar_t__ ocsp_stapling_response_multi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (scalar_t__,size_t*) ;
 int FUNC_3 (struct tlsv1_server*) ;
 scalar_t__ FUNC_4 (struct tlsv1_server*,char**,char*) ;
 scalar_t__ FUNC_5 (struct tlsv1_server*,char**,char*) ;
 scalar_t__ FUNC_6 (struct tlsv1_server*,char**,char*,int,char*,size_t) ;
 scalar_t__ FUNC_7 (struct tlsv1_server*,char**,char*) ;
 scalar_t__ FUNC_8 (struct tlsv1_server*,char**,char*) ;
 scalar_t__ FUNC_9 (struct tlsv1_server*,char**,char*) ;
 scalar_t__ FUNC_10 (struct tlsv1_server*,char**,char*) ;
 scalar_t__ FUNC_11 (struct tlsv1_server*,char**,char*) ;

__attribute__((used)) static u8 * FUNC_12(struct tlsv1_server *VAR_2, size_t *VAR_3)
{
 u8 *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7;
 int VAR_8 = 0;
 char *VAR_9 = ((void*)0);
 size_t VAR_10 = 0;

 *VAR_3 = 0;

 if (VAR_2->status_request_multi &&
     VAR_2->cred->ocsp_stapling_response_multi) {
  VAR_9 = FUNC_2(
   VAR_2->cred->ocsp_stapling_response_multi,
   &VAR_10);
  VAR_8 = 1;
 } else if ((VAR_2->status_request || VAR_2->status_request_v2) &&
     VAR_2->cred->ocsp_stapling_response) {
  VAR_9 = FUNC_2(VAR_2->cred->ocsp_stapling_response,
     &VAR_10);
 }
 if (!VAR_9)
  VAR_10 = 0;

 VAR_7 = 1000 + FUNC_3(VAR_2) + VAR_10;

 VAR_4 = FUNC_1(VAR_7);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_9);
  return ((void*)0);
 }

 VAR_6 = VAR_4;
 VAR_5 = VAR_4 + VAR_7;

 if (FUNC_9(VAR_2, &VAR_6, VAR_5) < 0) {
  FUNC_0(VAR_4);
  FUNC_0(VAR_9);
  return ((void*)0);
 }

 if (VAR_2->use_session_ticket) {
  FUNC_0(VAR_9);


  if (FUNC_7(VAR_2, &VAR_6, VAR_5) < 0 ||
      FUNC_8(VAR_2, &VAR_6, VAR_5) < 0) {
   FUNC_0(VAR_4);
   return ((void*)0);
  }

  *VAR_3 = VAR_6 - VAR_4;

  VAR_2->state = VAR_0;

  return VAR_4;
 }


 if (FUNC_4(VAR_2, &VAR_6, VAR_5) < 0 ||
     FUNC_6(VAR_2, &VAR_6, VAR_5, VAR_8,
      VAR_9, VAR_10) < 0 ||
     FUNC_11(VAR_2, &VAR_6, VAR_5) < 0 ||
     FUNC_5(VAR_2, &VAR_6, VAR_5) < 0 ||
     FUNC_10(VAR_2, &VAR_6, VAR_5) < 0) {
  FUNC_0(VAR_4);
  FUNC_0(VAR_9);
  return ((void*)0);
 }
 FUNC_0(VAR_9);

 *VAR_3 = VAR_6 - VAR_4;

 VAR_2->state = VAR_1;

 return VAR_4;
}
