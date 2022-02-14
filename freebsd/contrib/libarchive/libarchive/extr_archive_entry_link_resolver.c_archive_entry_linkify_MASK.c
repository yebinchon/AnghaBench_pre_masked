
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct links_entry {struct archive_entry* entry; int links; int canonical; } ;
struct archive_entry_linkresolver {int strategy; } ;
struct archive_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (struct archive_entry*,int ) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct archive_entry*) ;
 struct links_entry* FUNC_5 (struct archive_entry_linkresolver*,struct archive_entry*) ;
 struct links_entry* FUNC_6 (struct archive_entry_linkresolver*,struct archive_entry*) ;
 struct links_entry* FUNC_7 (struct archive_entry_linkresolver*,int ) ;

void
FUNC_8(struct archive_entry_linkresolver *VAR_4,
    struct archive_entry **VAR_5, struct archive_entry **VAR_6)
{
 struct links_entry *VAR_7;
 struct archive_entry *VAR_8;

 *VAR_6 = ((void*)0);

 if (*VAR_5 == ((void*)0)) {
  VAR_7 = FUNC_7(VAR_4, VAR_3);
  if (VAR_7 != ((void*)0)) {
   *VAR_5 = VAR_7->entry;
   VAR_7->entry = ((void*)0);
  }
  return;
 }


 if (FUNC_2(*VAR_5) == 1)
  return;

 if (FUNC_1(*VAR_5) == VAR_2
     || FUNC_1(*VAR_5) == VAR_0
     || FUNC_1(*VAR_5) == VAR_1)
  return;

 switch (VAR_4->strategy) {
 case 128:
  VAR_7 = FUNC_5(VAR_4, *VAR_5);
  if (VAR_7 != ((void*)0)) {
   FUNC_4(*VAR_5);
   FUNC_0(*VAR_5,
       FUNC_3(VAR_7->canonical));
  } else
   FUNC_6(VAR_4, *VAR_5);
  return;
 case 131:
  VAR_7 = FUNC_5(VAR_4, *VAR_5);
  if (VAR_7 != ((void*)0)) {
   FUNC_0(*VAR_5,
       FUNC_3(VAR_7->canonical));
  } else
   FUNC_6(VAR_4, *VAR_5);
  return;
 case 129:

  return;
 case 130:
  VAR_7 = FUNC_5(VAR_4, *VAR_5);
  if (VAR_7 != ((void*)0)) {




   VAR_8 = *VAR_5;
   *VAR_5 = VAR_7->entry;
   VAR_7->entry = VAR_8;

   FUNC_4(*VAR_5);
   FUNC_0(*VAR_5,
       FUNC_3(VAR_7->canonical));


   if (VAR_7->links == 0) {
    *VAR_6 = VAR_7->entry;
    VAR_7->entry = ((void*)0);
   }
  } else {




   VAR_7 = FUNC_6(VAR_4, *VAR_5);
   if (VAR_7 == ((void*)0))

    return;
   VAR_7->entry = *VAR_5;
   *VAR_5 = ((void*)0);
  }
  return;
 default:
  break;
 }
 return;
}
