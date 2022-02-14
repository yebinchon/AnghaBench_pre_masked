
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int uid_t ;
struct archive_string_conv {int dummy; } ;
struct archive_acl_entry {int type; int tag; int id; int name; struct archive_acl_entry* next; } ;
struct archive_acl {struct archive_acl_entry* acl_head; } ;
struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_1 (struct archive*,int *,int const**) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int const*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct archive_acl *VAR_9, int VAR_10, int VAR_11,
    int VAR_12, struct archive *VAR_13, struct archive_string_conv *VAR_14) {
 struct archive_acl_entry *VAR_15;
 const char *VAR_16;
 const wchar_t *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 ssize_t VAR_22;
 size_t VAR_23;

 VAR_18 = 0;
 VAR_22 = 0;
 for (VAR_15 = VAR_9->acl_head; VAR_15 != ((void*)0); VAR_15 = VAR_15->next) {
  if ((VAR_15->type & VAR_10) == 0)
   continue;




  if ((VAR_15->type == VAR_2)
      && (VAR_15->tag == 128
      || VAR_15->tag == 132
      || VAR_15->tag == 130))
   continue;
  VAR_18++;
  if ((VAR_10 & VAR_3) != 0
      && (VAR_15->type & VAR_3) != 0)
   VAR_22 += 8;
  switch (VAR_15->tag) {
  case 128:
   if (VAR_10 == VAR_5) {
    VAR_22 += 6;
    break;
   }

  case 129:
  case 131:
   VAR_22 += 4;
   break;
  case 132:
   if (VAR_10 == VAR_5) {
    VAR_22 += 6;
    break;
   }

  case 133:
  case 130:
   VAR_22 += 5;
   break;
  case 134:
   VAR_22 += 9;
   break;
  }
  VAR_22 += 1;
  if (VAR_15->tag == 129 ||
      VAR_15->tag == 133) {
   if (VAR_12) {
    VAR_21 = FUNC_1(VAR_13, &VAR_15->name,
        &VAR_17);
    if (VAR_21 == 0 && VAR_17 != ((void*)0))
     VAR_22 += FUNC_2(VAR_17);
    else if (VAR_21 < 0 && VAR_8 == VAR_7)
     return (0);
    else
     VAR_22 += sizeof(uid_t) * 3 + 1;
   } else {
    VAR_21 = FUNC_0(&VAR_15->name, &VAR_16,
        &VAR_23, VAR_14);
    if (VAR_21 != 0)
     return (0);
    if (VAR_23 > 0 && VAR_16 != ((void*)0))
     VAR_22 += VAR_23;
    else
     VAR_22 += sizeof(uid_t) * 3 + 1;
   }
   VAR_22 += 1;
  } else if (VAR_10 != VAR_5)
   VAR_22 += 1;

  if (((VAR_11 & VAR_1) != 0)
      && ((VAR_10 & VAR_6) != 0)
      && (VAR_15->tag == 130
      || VAR_15->tag == 131)) {

   VAR_22 = VAR_22 - 1;
  }

  if (VAR_10 == VAR_5) {

   VAR_22 += 27;
   if ((VAR_15->type & VAR_4) == 0)
    VAR_22 += 1;
  } else
   VAR_22 += 3;

  if ((VAR_15->tag == 129 ||
      VAR_15->tag == 133) &&
      (VAR_11 & VAR_0) != 0) {
   VAR_22 += 1;

   VAR_19 = 1;
   VAR_20 = VAR_15->id;
   while (VAR_20 > 9) {
    VAR_20 = VAR_20 / 10;
    VAR_19++;
   }
   VAR_22 += VAR_19;
  }
  VAR_22 ++;
 }


 if ((VAR_10 & VAR_2) != 0) {
  if ((VAR_11 & VAR_1) != 0) {

   VAR_22 += 31;
  } else {

   VAR_22 += 32;
  }
 } else if (VAR_18 == 0)
  return (0);


 return (VAR_22);
}
