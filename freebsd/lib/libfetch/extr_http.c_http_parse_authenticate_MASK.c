
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char http_header_lex_t ;
struct TYPE_4__ {int valid; size_t count; TYPE_2__** challenges; } ;
typedef TYPE_1__ http_auth_challenges_t ;
typedef int http_auth_challenge_t ;
struct TYPE_5__ {scalar_t__ stale; void* algo; void* opaque; void* nonce; void* qop; void* realm; int scheme; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 char FUNC_2 (char const**,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_7, http_auth_challenges_t *VAR_8)
{
 int VAR_9 = -1;
 http_header_lex_t VAR_10;
 char *VAR_11 = FUNC_4(FUNC_7(VAR_7) + 1);
 char *VAR_12 = FUNC_4(FUNC_7(VAR_7) + 1);
 char *VAR_13 = FUNC_4(FUNC_7(VAR_7) + 1);

 if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0) || VAR_13 == ((void*)0)) {
  FUNC_0();
  goto out;
 }


 VAR_8->valid = 1;


 VAR_10 = FUNC_2(&VAR_7, VAR_11);
 if (VAR_10 != VAR_5)
  goto out;


 for (; VAR_8->count < VAR_6; VAR_8->count++) {
  VAR_8->challenges[VAR_8->count] =
   FUNC_4(sizeof(http_auth_challenge_t));
  if (VAR_8->challenges[VAR_8->count] == ((void*)0)) {
   FUNC_0();
   goto out;
  }
  FUNC_3(VAR_8->challenges[VAR_8->count]);
  if (FUNC_5(VAR_11, "basic") == 0) {
   VAR_8->challenges[VAR_8->count]->scheme = VAR_0;
  } else if (FUNC_5(VAR_11, "digest") == 0) {
   VAR_8->challenges[VAR_8->count]->scheme = VAR_1;
  } else {
   VAR_8->challenges[VAR_8->count]->scheme = VAR_2;






  }


  for (;;) {

   VAR_10 = FUNC_2(&VAR_7, VAR_11);
   if (VAR_10 != VAR_5)
    goto out;


   VAR_10 = FUNC_2(&VAR_7, VAR_13);
   if (VAR_10 != '=')
    goto out;


   VAR_10 = FUNC_2(&VAR_7, VAR_12);
   if (VAR_10 != VAR_5 && VAR_10 != VAR_4)
    goto out;

   if (FUNC_5(VAR_11, "realm") == 0) {
    VAR_8->challenges[VAR_8->count]->realm =
        FUNC_6(VAR_12);
   } else if (FUNC_5(VAR_11, "qop") == 0) {
    VAR_8->challenges[VAR_8->count]->qop =
        FUNC_6(VAR_12);
   } else if (FUNC_5(VAR_11, "nonce") == 0) {
    VAR_8->challenges[VAR_8->count]->nonce =
        FUNC_6(VAR_12);
   } else if (FUNC_5(VAR_11, "opaque") == 0) {
    VAR_8->challenges[VAR_8->count]->opaque =
        FUNC_6(VAR_12);
   } else if (FUNC_5(VAR_11, "algorithm") == 0) {
    VAR_8->challenges[VAR_8->count]->algo =
        FUNC_6(VAR_12);
   } else if (FUNC_5(VAR_11, "stale") == 0) {
    VAR_8->challenges[VAR_8->count]->stale =
        FUNC_5(VAR_12, "no");
   } else {

   }


   VAR_10 = FUNC_2(&VAR_7, VAR_11);




   if (VAR_10 == VAR_5)
    break;

   if (VAR_10 == VAR_3) {

    VAR_8->count++;
    VAR_9 = 0;
    goto out;
   }

   if (VAR_10 != ',')
    goto out;

  }
 }






out:
 if (VAR_11)
  FUNC_1(VAR_11);
 if (VAR_12)
  FUNC_1(VAR_12);
 if (VAR_13)
  FUNC_1(VAR_13);
 return (VAR_9);
}
