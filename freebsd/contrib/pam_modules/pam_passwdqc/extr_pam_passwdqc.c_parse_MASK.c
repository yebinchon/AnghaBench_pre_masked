
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* min; unsigned long max; unsigned long passphrase_words; unsigned long match_length; int similar_deny; unsigned long random_bits; } ;
struct TYPE_5__ {int flags; unsigned long retry; TYPE_1__ qc; } ;
typedef TYPE_2__ params_t ;
typedef int pam_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int ,int ,...) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char*,int) ;
 unsigned long FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_5(params_t *VAR_16, pam_handle_t *VAR_17,
    int VAR_18, const char **VAR_19)
{
 const char *VAR_20;
 char *VAR_21;
 int VAR_22;
 unsigned long VAR_23;

 while (VAR_18) {
  if (!FUNC_3(*VAR_19, "min=", 4)) {
   VAR_20 = *VAR_19 + 4;
   for (VAR_22 = 0; VAR_22 < 5; VAR_22++) {
    if (!FUNC_3(VAR_20, "disabled", 8)) {
     VAR_23 = VAR_10;
     VAR_20 += 8;
    } else {
     VAR_23 = FUNC_4(VAR_20, &VAR_21, 10);
     VAR_20 = VAR_21;
    }
    if (VAR_22 < 4 && *VAR_20++ != ',') break;
    if (VAR_23 > VAR_10) break;
    if (VAR_22 && (int)VAR_23 > VAR_16->qc.min[VAR_22 - 1]) break;
    VAR_16->qc.min[VAR_22] = VAR_23;
   }
   if (*VAR_20) break;
  } else
  if (!FUNC_3(*VAR_19, "max=", 4)) {
   VAR_23 = FUNC_4(*VAR_19 + 4, &VAR_21, 10);
   if (*VAR_21 || VAR_23 < 8 || VAR_23 > VAR_10) break;
   VAR_16->qc.max = VAR_23;
  } else
  if (!FUNC_3(*VAR_19, "passphrase=", 11)) {
   VAR_23 = FUNC_4(*VAR_19 + 11, &VAR_21, 10);
   if (*VAR_21 || VAR_23 > VAR_10) break;
   VAR_16->qc.passphrase_words = VAR_23;
  } else
  if (!FUNC_3(*VAR_19, "match=", 6)) {
   VAR_23 = FUNC_4(*VAR_19 + 6, &VAR_21, 10);
   if (*VAR_21 || VAR_23 > VAR_10) break;
   VAR_16->qc.match_length = VAR_23;
  } else
  if (!FUNC_3(*VAR_19, "similar=", 8)) {
   if (!FUNC_2(*VAR_19 + 8, "permit"))
    VAR_16->qc.similar_deny = 0;
   else
   if (!FUNC_2(*VAR_19 + 8, "deny"))
    VAR_16->qc.similar_deny = 1;
   else
    break;
  } else
  if (!FUNC_3(*VAR_19, "random=", 7)) {
   VAR_23 = FUNC_4(*VAR_19 + 7, &VAR_21, 10);
   if (!FUNC_2(VAR_21, ",only")) {
    VAR_21 += 5;
    VAR_16->qc.min[4] = VAR_10;
   }
   if (*VAR_21 || VAR_23 > VAR_10) break;
   VAR_16->qc.random_bits = VAR_23;
  } else
  if (!FUNC_3(*VAR_19, "enforce=", 8)) {
   VAR_16->flags &= ~VAR_5;
   if (!FUNC_2(*VAR_19 + 8, "users"))
    VAR_16->flags |= VAR_6;
   else
   if (!FUNC_2(*VAR_19 + 8, "everyone"))
    VAR_16->flags |= VAR_4;
   else
   if (FUNC_2(*VAR_19 + 8, "none"))
    break;
  } else
  if (!FUNC_2(*VAR_19, "non-unix")) {
   if (VAR_16->flags & VAR_3) break;
   VAR_16->flags |= VAR_7;
  } else
  if (!FUNC_3(*VAR_19, "retry=", 6)) {
   VAR_23 = FUNC_4(*VAR_19 + 6, &VAR_21, 10);
   if (*VAR_21 || VAR_23 > VAR_10) break;
   VAR_16->retry = VAR_23;
  } else
  if (!FUNC_3(*VAR_19, "ask_oldauthtok", 14)) {
   VAR_16->flags &= ~VAR_0;
   if (VAR_16->flags & VAR_9) break;
   if (!FUNC_2(*VAR_19 + 14, "=update"))
    VAR_16->flags |= VAR_2;
   else
   if (!(*VAR_19)[14])
    VAR_16->flags |= VAR_1;
   else
    break;
  } else
  if (!FUNC_2(*VAR_19, "check_oldauthtok")) {
   if (VAR_16->flags & VAR_7) break;
   VAR_16->flags |= VAR_3;
  } else
  if (!FUNC_2(*VAR_19, "use_first_pass")) {
   if (VAR_16->flags & VAR_0) break;
   VAR_16->flags |= VAR_9 | VAR_8;
  } else
  if (!FUNC_2(*VAR_19, "use_authtok")) {
   VAR_16->flags |= VAR_8;
  } else
   break;
  VAR_18--; VAR_19++;
 }

 if (VAR_18) {
  if (FUNC_0() != 0) {
   FUNC_1(VAR_17, VAR_14, VAR_12);
  } else {
   FUNC_1(VAR_17, VAR_14, VAR_11, *VAR_19);
  }
  return VAR_13;
 }

 return VAR_15;
}
