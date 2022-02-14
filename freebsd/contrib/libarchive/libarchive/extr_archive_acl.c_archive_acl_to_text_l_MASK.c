
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {int dummy; } ;
struct archive_acl_entry {int type; scalar_t__ tag; int id; int permset; int name; struct archive_acl_entry* next; } ;
struct archive_acl {int mode; struct archive_acl_entry* acl_head; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char**,char const*,int,scalar_t__,int,char const*,int,int) ;
 int FUNC_2 (struct archive_acl*,int,int,int ,int *,struct archive_string_conv*) ;
 int FUNC_3 (struct archive_acl*,int) ;
 int FUNC_4 (int *,char const**,size_t*,struct archive_string_conv*) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 size_t FUNC_7 (char*) ;

char *
FUNC_8(struct archive_acl *VAR_11, ssize_t *VAR_12, int VAR_13,
    struct archive_string_conv *VAR_14)
{
 int VAR_15;
 ssize_t VAR_16;
 size_t VAR_17;
 const char *VAR_18;
 const char *VAR_19;
 char VAR_20;
 struct archive_acl_entry *VAR_21;
 int VAR_22, VAR_23, VAR_24;
 char *VAR_25, *VAR_26;

 VAR_24 = FUNC_3(VAR_11, VAR_13);


 if (VAR_24 == 0)
  return (((void*)0));

 if (VAR_24 == VAR_7)
  VAR_13 |= VAR_3;

 VAR_16 = FUNC_2(VAR_11, VAR_24, VAR_13, 0, ((void*)0), VAR_14);

 if (VAR_16 == 0)
  return (((void*)0));

 if (VAR_13 & VAR_4)
  VAR_20 = ',';
 else
  VAR_20 = '\n';


 VAR_25 = VAR_26 = (char *)FUNC_6(VAR_16 * sizeof(char));
 if (VAR_25 == ((void*)0)) {
  if (VAR_10 == VAR_9)
   FUNC_0(1, "No memory");
  return (((void*)0));
 }
 VAR_15 = 0;

 if ((VAR_24 & VAR_5) != 0) {
  FUNC_1(&VAR_25, ((void*)0), VAR_5,
      VAR_8, VAR_13, ((void*)0),
      VAR_11->mode & 0700, -1);
  *VAR_25++ = VAR_20;
  FUNC_1(&VAR_25, ((void*)0), VAR_5,
      VAR_0, VAR_13, ((void*)0),
      VAR_11->mode & 0070, -1);
  *VAR_25++ = VAR_20;
  FUNC_1(&VAR_25, ((void*)0), VAR_5,
      VAR_1, VAR_13, ((void*)0),
      VAR_11->mode & 0007, -1);
  VAR_15 += 3;
 }

 for (VAR_21 = VAR_11->acl_head; VAR_21 != ((void*)0); VAR_21 = VAR_21->next) {
  if ((VAR_21->type & VAR_24) == 0)
   continue;




  if ((VAR_21->type == VAR_5)
      && (VAR_21->tag == VAR_8
      || VAR_21->tag == VAR_0
      || VAR_21->tag == VAR_1))
   continue;
  if (VAR_21->type == VAR_6 &&
      (VAR_13 & VAR_3) != 0)
   VAR_19 = "default:";
  else
   VAR_19 = ((void*)0);
  VAR_23 = FUNC_4(
      &VAR_21->name, &VAR_18, &VAR_17, VAR_14);
  if (VAR_23 != 0) {
   FUNC_5(VAR_26);
   return (((void*)0));
  }
  if (VAR_15 > 0)
   *VAR_25++ = VAR_20;
  if (VAR_18 == ((void*)0) ||
      (VAR_13 & VAR_2)) {
   VAR_22 = VAR_21->id;
  } else {
   VAR_22 = -1;
  }
  FUNC_1(&VAR_25, VAR_19, VAR_21->type, VAR_21->tag, VAR_13, VAR_18,
      VAR_21->permset, VAR_22);
  VAR_15++;
 }


 *VAR_25++ = '\0';

 VAR_17 = FUNC_7(VAR_26);

 if ((ssize_t)VAR_17 > (VAR_16 - 1))
  FUNC_0(1, "Buffer overrun");

 if (VAR_12 != ((void*)0))
  *VAR_12 = VAR_17;

 return (VAR_26);
}
