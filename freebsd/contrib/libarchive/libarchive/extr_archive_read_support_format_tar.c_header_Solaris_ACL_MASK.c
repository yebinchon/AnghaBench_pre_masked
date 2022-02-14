
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s; } ;
struct TYPE_3__ {char* s; } ;
struct tar {int * sconv_acl; TYPE_2__ localname; TYPE_1__ acl_text; } ;
struct archive_read {int archive; } ;
struct archive_entry_header_ustar {int size; } ;
struct archive_entry {int dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (int *,scalar_t__,char*,...) ;
 int * FUNC_3 (int *,char*,int) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct archive_read*,struct tar*,TYPE_1__*,void const*,size_t*) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (struct archive_read*,struct tar*,struct archive_entry*,size_t*) ;

__attribute__((used)) static int
FUNC_8(struct archive_read *VAR_8, struct tar *VAR_9,
    struct archive_entry *VAR_10, const void *VAR_11, size_t *VAR_12)
{
 const struct archive_entry_header_ustar *VAR_13;
 size_t VAR_14;
 int VAR_15, VAR_16;
 int64_t VAR_17;
 char *VAR_18, *VAR_19;





 VAR_13 = (const struct archive_entry_header_ustar *)VAR_11;
 VAR_14 = (size_t)FUNC_6(VAR_13->size, sizeof(VAR_13->size));
 VAR_15 = FUNC_5(VAR_8, VAR_9, &(VAR_9->acl_text), VAR_11, VAR_12);
 if (VAR_15 != VAR_4)
  return (VAR_15);


 VAR_15 = FUNC_7(VAR_8, VAR_9, VAR_10, VAR_12);
 if ((VAR_15 != VAR_4) && (VAR_15 != VAR_5))
  return (VAR_15);







 VAR_19 = VAR_18 = VAR_9->acl_text.s;
 VAR_17 = 0;
 while (*VAR_19 != '\0' && VAR_19 < VAR_18 + VAR_14) {
  if (*VAR_19 < '0' || *VAR_19 > '7') {
   FUNC_2(&VAR_8->archive, VAR_2,
       "Malformed Solaris ACL attribute (invalid digit)");
   return(VAR_5);
  }
  VAR_17 <<= 3;
  VAR_17 += *VAR_19 - '0';
  if (VAR_17 > 077777777) {
   FUNC_2(&VAR_8->archive, VAR_2,
       "Malformed Solaris ACL attribute (count too large)");
   return (VAR_5);
  }
  VAR_19++;
 }
 switch ((int)VAR_17 & ~0777777) {
 case 01000000:

  VAR_16 = VAR_0;
  break;
 case 03000000:

  VAR_16 = VAR_1;
  break;
 default:
  FUNC_2(&VAR_8->archive, VAR_2,
      "Malformed Solaris ACL attribute (unsupported type %o)",
      (int)VAR_17);
  return (VAR_5);
 }
 VAR_19++;

 if (VAR_19 >= VAR_18 + VAR_14) {
  FUNC_2(&VAR_8->archive, VAR_2,
      "Malformed Solaris ACL attribute (body overflow)");
  return(VAR_5);
 }


 VAR_14 -= (VAR_19 - VAR_18);
 VAR_18 = VAR_19;

 while (*VAR_19 != '\0' && VAR_19 < VAR_18 + VAR_14)
  VAR_19++;

 if (VAR_9->sconv_acl == ((void*)0)) {
  VAR_9->sconv_acl = FUNC_3(
      &(VAR_8->archive), "UTF-8", 1);
  if (VAR_9->sconv_acl == ((void*)0))
   return (VAR_3);
 }
 FUNC_4(&(VAR_9->localname), VAR_18, VAR_19 - VAR_18);
 VAR_15 = FUNC_0(FUNC_1(VAR_10),
     VAR_9->localname.s, VAR_16, VAR_9->sconv_acl);
 if (VAR_15 != VAR_4) {
  if (VAR_7 == VAR_6) {
   FUNC_2(&VAR_8->archive, VAR_6,
       "Can't allocate memory for ACL");
  } else
   FUNC_2(&VAR_8->archive, VAR_2,
       "Malformed Solaris ACL attribute (unparsable)");
 }
 return (VAR_15);
}
