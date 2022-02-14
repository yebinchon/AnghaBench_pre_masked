
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_acl_entry {int type; int tag; int id; int permset; struct archive_acl_entry* next; } ;
struct archive_acl {int acl_types; struct archive_acl_entry* acl_head; int * acl_text; int * acl_text_w; } ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct archive_acl_entry *
FUNC_2(struct archive_acl *VAR_5,
    int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct archive_acl_entry *VAR_10, *VAR_11;




 if (VAR_6 & VAR_3) {
  if (VAR_5->acl_types & ~VAR_3) {
   return (((void*)0));
  }
  if (VAR_7 &
      ~(VAR_1
   | VAR_0)) {
   return (((void*)0));
  }
 } else if (VAR_6 & VAR_4) {
  if (VAR_5->acl_types & ~VAR_4) {
   return (((void*)0));
  }
  if (VAR_7 & ~VAR_2) {
   return (((void*)0));
  }
 } else {
  return (((void*)0));
 }


 switch (VAR_8) {
 case 129:
 case 128:
 case 133:
 case 132:

  break;
 case 131:
 case 130:

  if (VAR_6 & ~VAR_4) {
   return (((void*)0));
  }
  break;
 case 134:

  if (VAR_6 & ~VAR_3) {
   return (((void*)0));
  }
  break;
 default:

  return (((void*)0));
 }

 FUNC_1(VAR_5->acl_text_w);
 VAR_5->acl_text_w = ((void*)0);
 FUNC_1(VAR_5->acl_text);
 VAR_5->acl_text = ((void*)0);







 VAR_10 = VAR_5->acl_head;
 VAR_11 = ((void*)0);
 while (VAR_10 != ((void*)0)) {
  if (((VAR_6 & VAR_3) == 0) &&
      VAR_10->type == VAR_6 && VAR_10->tag == VAR_8 && VAR_10->id == VAR_9) {
   if (VAR_9 != -1 || (VAR_8 != 129 &&
       VAR_8 != 133)) {
    VAR_10->permset = VAR_7;
    return (VAR_10);
   }
  }
  VAR_11 = VAR_10;
  VAR_10 = VAR_10->next;
 }


 VAR_10 = (struct archive_acl_entry *)FUNC_0(1, sizeof(*VAR_10));
 if (VAR_10 == ((void*)0))
  return (((void*)0));
 if (VAR_11 == ((void*)0))
  VAR_5->acl_head = VAR_10;
 else
  VAR_11->next = VAR_10;
 VAR_10->type = VAR_6;
 VAR_10->tag = VAR_8;
 VAR_10->id = VAR_9;
 VAR_10->permset = VAR_7;
 VAR_5->acl_types |= VAR_6;
 return (VAR_10);
}
