
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* ctl_prefix; int ctl_hash; int ctl_len; } ;
typedef TYPE_1__ ctf_lookup_t ;
typedef scalar_t__ ctf_id_t ;
struct TYPE_10__ {scalar_t__ h_type; } ;
typedef TYPE_2__ ctf_helem_t ;
struct TYPE_11__ {scalar_t__* ctf_ptrtab; int ctf_flags; struct TYPE_11__* ctf_parent; TYPE_1__* ctf_lookups; } ;
typedef TYPE_3__ ctf_file_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (int ,TYPE_3__*,char const*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_5 (char const*,size_t) ;
 scalar_t__ FUNC_6 (char const) ;
 char* FUNC_7 (char const*,char) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char*,size_t) ;
 char* FUNC_10 (char const*,char const*) ;

ctf_id_t
FUNC_11(ctf_file_t *VAR_5, const char *VAR_6)
{
 static const char VAR_7[] = " \t\n\r\v\f*";

 const ctf_lookup_t *VAR_8;
 const ctf_helem_t *VAR_9;
 const char *VAR_10, *VAR_11, *VAR_12;
 ctf_id_t VAR_13 = 0;
 ctf_id_t VAR_14, VAR_15;

 if (VAR_6 == ((void*)0))
  return (FUNC_3(VAR_5, VAR_3));

 for (VAR_10 = VAR_6, VAR_12 = VAR_6 + FUNC_8(VAR_6); *VAR_10 != '\0'; VAR_10 = VAR_11) {
  while (FUNC_6(*VAR_10))
   VAR_10++;

  if (VAR_10 == VAR_12)
   break;

  if ((VAR_11 = FUNC_10(VAR_10 + 1, VAR_7)) == ((void*)0))
   VAR_11 = VAR_12;

  if (*VAR_10 == '*') {
   VAR_14 = VAR_5->ctf_ptrtab[FUNC_1(VAR_13)];
   if (VAR_14 == 0) {
    VAR_14 = FUNC_4(VAR_5, VAR_13);
    if (VAR_14 == VAR_0 || (VAR_14 = VAR_5->ctf_ptrtab[
        FUNC_1(VAR_14)]) == 0) {
     (void) FUNC_3(VAR_5, VAR_1);
     goto err;
    }
   }

   VAR_13 = FUNC_0(VAR_14,
       (VAR_5->ctf_flags & VAR_4));

   VAR_11 = VAR_10 + 1;
   continue;
  }

  if (FUNC_5(VAR_10, (size_t)(VAR_11 - VAR_10)))
   continue;

  for (VAR_8 = VAR_5->ctf_lookups; VAR_8->ctl_prefix != ((void*)0); VAR_8++) {
   if (VAR_8->ctl_prefix[0] == '\0' ||
       FUNC_9(VAR_10, VAR_8->ctl_prefix, (size_t)(VAR_11 - VAR_10)) == 0) {
    for (VAR_10 += VAR_8->ctl_len; FUNC_6(*VAR_10); VAR_10++)
     continue;

    if ((VAR_11 = FUNC_7(VAR_10, '*')) == ((void*)0))
     VAR_11 = VAR_12;

    while (FUNC_6(VAR_11[-1]))
     VAR_11--;

    if ((VAR_9 = FUNC_2(VAR_8->ctl_hash, VAR_5, VAR_10,
        (size_t)(VAR_11 - VAR_10))) == ((void*)0)) {
     (void) FUNC_3(VAR_5, VAR_1);
     goto err;
    }

    VAR_13 = VAR_9->h_type;
    break;
   }
  }

  if (VAR_8->ctl_prefix == ((void*)0)) {
   (void) FUNC_3(VAR_5, VAR_1);
   goto err;
  }
 }

 if (*VAR_10 != '\0' || VAR_13 == 0)
  return (FUNC_3(VAR_5, VAR_2));

 return (VAR_13);

err:
 if (VAR_5->ctf_parent != ((void*)0) &&
     (VAR_15 = FUNC_11(VAR_5->ctf_parent, VAR_6)) != VAR_0)
  return (VAR_15);

 return (VAR_0);
}
