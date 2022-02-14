
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_acl {int acl_state; int mode; TYPE_1__* acl_p; TYPE_1__* acl_head; } ;
struct archive {int dummy; } ;
struct TYPE_2__ {int type; int permset; int tag; int id; struct TYPE_2__* next; int name; } ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct archive*,int *,char const**) ;
 scalar_t__ VAR_6 ;

int
FUNC_1(struct archive *VAR_7, struct archive_acl *VAR_8, int VAR_9,
    int *VAR_10, int *VAR_11, int *VAR_12, int *VAR_13, const char **VAR_14)
{
 *VAR_14 = ((void*)0);
 *VAR_13 = -1;






 if (VAR_8->acl_state == 0)
  return (VAR_4);


 if ((VAR_9 & VAR_0) != 0) {
  switch (VAR_8->acl_state) {
  case 128:
   *VAR_11 = (VAR_8->mode >> 6) & 7;
   *VAR_10 = VAR_0;
   *VAR_12 = 128;
   VAR_8->acl_state = 130;
   return (VAR_3);
  case 130:
   *VAR_11 = (VAR_8->mode >> 3) & 7;
   *VAR_10 = VAR_0;
   *VAR_12 = 130;
   VAR_8->acl_state = 129;
   return (VAR_3);
  case 129:
   *VAR_11 = VAR_8->mode & 7;
   *VAR_10 = VAR_0;
   *VAR_12 = 129;
   VAR_8->acl_state = -1;
   VAR_8->acl_p = VAR_8->acl_head;
   return (VAR_3);
  default:
   break;
  }
 }

 while (VAR_8->acl_p != ((void*)0) && (VAR_8->acl_p->type & VAR_9) == 0)
  VAR_8->acl_p = VAR_8->acl_p->next;
 if (VAR_8->acl_p == ((void*)0)) {
  VAR_8->acl_state = 0;
  *VAR_10 = 0;
  *VAR_11 = 0;
  *VAR_12 = 0;
  *VAR_13 = -1;
  *VAR_14 = ((void*)0);
  return (VAR_1);
 }
 *VAR_10 = VAR_8->acl_p->type;
 *VAR_11 = VAR_8->acl_p->permset;
 *VAR_12 = VAR_8->acl_p->tag;
 *VAR_13 = VAR_8->acl_p->id;
 if (FUNC_0(VAR_7, &VAR_8->acl_p->name, VAR_14) != 0) {
  if (VAR_6 == VAR_5)
   return (VAR_2);
  *VAR_14 = ((void*)0);
 }
 VAR_8->acl_p = VAR_8->acl_p->next;
 return (VAR_3);
}
