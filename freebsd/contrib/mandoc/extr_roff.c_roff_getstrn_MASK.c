
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char const* p; } ;
struct TYPE_6__ {char* p; } ;
struct roffkv {TYPE_2__ val; TYPE_1__ key; struct roffkv* next; } ;
struct roff {struct roffkv* rentab; struct roffkv* strtab; TYPE_4__* man; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;
struct TYPE_10__ {char* name; char const* str; } ;
struct TYPE_8__ {scalar_t__ macroset; } ;
struct TYPE_9__ {TYPE_3__ meta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_5__* VAR_13 ;
 char** VAR_14 ;
 int FUNC_0 (struct roffkv**,char const*,size_t,char*,int ,int ) ;
 scalar_t__ FUNC_1 (char const*,char*,size_t) ;

__attribute__((used)) static const char *
FUNC_2(struct roff *VAR_15, const char *VAR_16, size_t VAR_17,
    int *VAR_18)
{
 const struct roffkv *VAR_19;
 int VAR_20, VAR_21;
 enum roff_tok VAR_22;

 VAR_20 = 0;
 for (VAR_19 = VAR_15->strtab; VAR_19 != ((void*)0); VAR_19 = VAR_19->next) {
  if (FUNC_1(VAR_16, VAR_19->key.p, VAR_17) != 0 ||
      VAR_19->key.p[VAR_17] != '\0' || VAR_19->val.p == ((void*)0))
   continue;
  if (*VAR_18 & VAR_12) {
   *VAR_18 = VAR_12;
   return VAR_19->val.p;
  } else {
   VAR_20 = 1;
   break;
  }
 }
 for (VAR_19 = VAR_15->rentab; VAR_19 != ((void*)0); VAR_19 = VAR_19->next) {
  if (FUNC_1(VAR_16, VAR_19->key.p, VAR_17) != 0 ||
      VAR_19->key.p[VAR_17] != '\0' || VAR_19->val.p == ((void*)0))
   continue;
  if (*VAR_18 & VAR_9) {
   *VAR_18 = VAR_9;
   return VAR_19->val.p;
  } else {
   VAR_20 = 1;
   break;
  }
 }
 for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++) {
  if (FUNC_1(VAR_16, VAR_13[VAR_21].name, VAR_17) != 0 ||
      VAR_13[VAR_21].name[VAR_17] != '\0')
   continue;
  if (*VAR_18 & VAR_8) {
   *VAR_18 = VAR_8;
   return VAR_13[VAR_21].str;
  } else {
   VAR_20 = 1;
   break;
  }
 }
 if (VAR_15->man->meta.macroset != VAR_0) {
  for (VAR_22 = VAR_4; VAR_22 < VAR_5; VAR_22++) {
   if (FUNC_1(VAR_16, VAR_14[VAR_22], VAR_17) != 0 ||
       VAR_14[VAR_22][VAR_17] != '\0')
    continue;
   if (*VAR_18 & VAR_10) {
    *VAR_18 = VAR_10;
    return ((void*)0);
   } else {
    VAR_20 = 1;
    break;
   }
  }
 }
 if (VAR_15->man->meta.macroset != VAR_1) {
  for (VAR_22 = VAR_3; VAR_22 < VAR_2; VAR_22++) {
   if (FUNC_1(VAR_16, VAR_14[VAR_22], VAR_17) != 0 ||
       VAR_14[VAR_22][VAR_17] != '\0')
    continue;
   if (*VAR_18 & VAR_10) {
    *VAR_18 = VAR_10;
    return ((void*)0);
   } else {
    VAR_20 = 1;
    break;
   }
  }
 }

 if (VAR_20 == 0 && *VAR_18 != VAR_7) {
  if (*VAR_18 & VAR_9) {




   *VAR_18 = VAR_11;
   return ((void*)0);
  }



  FUNC_0(&VAR_15->strtab, VAR_16, VAR_17, "", 0, 0);
  FUNC_0(&VAR_15->rentab, VAR_16, VAR_17, ((void*)0), 0, 0);
 }

 *VAR_18 = 0;
 return ((void*)0);
}
