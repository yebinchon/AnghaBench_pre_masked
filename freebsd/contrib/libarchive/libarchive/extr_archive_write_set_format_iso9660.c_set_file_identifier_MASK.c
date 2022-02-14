
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdd {scalar_t__ vdd_type; int rootent; } ;
struct isoent {size_t ext_off; size_t ext_len; int identifier; } ;
struct archive_write {int archive; } ;
struct archive_string {scalar_t__ length; char* s; } ;
typedef int identifier ;
typedef enum vdc { ____Placeholder_vdc } vdc ;
typedef enum char_type { ____Placeholder_char_type } char_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,char*,char const*,char const*) ;
 struct isoent* FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (struct archive_write*,unsigned char*,int,int,char*,int) ;
 int FUNC_4 (struct archive_write*,unsigned char*,int,int,char*,int) ;

__attribute__((used)) static int
FUNC_5(unsigned char *VAR_5, int VAR_6, int VAR_7, enum vdc VAR_8,
    struct archive_write *VAR_9, struct vdd *VAR_10, struct archive_string *VAR_11,
    const char *VAR_12, int VAR_13, enum char_type VAR_14)
{
 char VAR_15[256];
 struct isoent *VAR_16;
 const char *VAR_17;
 size_t VAR_18;
 int VAR_19;

 if (VAR_11->length > 0 && VAR_13 && VAR_11->s[0] != '_') {
  if (VAR_14 == VAR_2)
   VAR_19 = FUNC_3(VAR_9, VAR_5, VAR_6, VAR_7, VAR_11->s, VAR_8);
  else
   VAR_19 = FUNC_4(VAR_9, VAR_5, VAR_6, VAR_7, VAR_11->s, VAR_8);
 } else if (VAR_11->length > 0) {
  VAR_17 = VAR_11->s;
  if (VAR_13)
   VAR_17++;
  VAR_16 = FUNC_1(VAR_10->rootent, VAR_17);
  if (VAR_16 == ((void*)0)) {
   FUNC_0(&VAR_9->archive, VAR_0,
       "Not Found %s `%s'.",
       VAR_12, VAR_17);
   return (VAR_1);
  }
  VAR_18 = VAR_16->ext_off + VAR_16->ext_len;
  if (VAR_10->vdd_type == VAR_4) {
   if (VAR_18 > sizeof(VAR_15)-2)
    VAR_18 = sizeof(VAR_15)-2;
  } else {
   if (VAR_18 > sizeof(VAR_15)-1)
    VAR_18 = sizeof(VAR_15)-1;
  }
  FUNC_2(VAR_15, VAR_16->identifier, VAR_18);
  VAR_15[VAR_18] = '\0';
  if (VAR_10->vdd_type == VAR_4) {
   VAR_15[VAR_18+1] = 0;
   VAR_8 = VAR_3;
  }
  if (VAR_14 == VAR_2)
   VAR_19 = FUNC_3(VAR_9, VAR_5, VAR_6, VAR_7,
       VAR_15, VAR_8);
  else
   VAR_19 = FUNC_4(VAR_9, VAR_5, VAR_6, VAR_7,
       VAR_15, VAR_8);
 } else {
  if (VAR_14 == VAR_2)
   VAR_19 = FUNC_3(VAR_9, VAR_5, VAR_6, VAR_7, ((void*)0), VAR_8);
  else
   VAR_19 = FUNC_4(VAR_9, VAR_5, VAR_6, VAR_7, ((void*)0), VAR_8);
 }
 return (VAR_19);
}
