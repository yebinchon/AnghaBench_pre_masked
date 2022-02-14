
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_5__ {scalar_t__ count; } ;
struct archive_match {TYPE_1__ inclusion_gnames; TYPE_1__ inclusion_unames; TYPE_3__ inclusion_gids; TYPE_3__ inclusion_uids; } ;
struct archive_entry {int dummy; } ;


 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (struct archive_match*,TYPE_1__*,int ) ;
 int FUNC_8 (struct archive_match*,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_9(struct archive_match *VAR_0, struct archive_entry *VAR_1)
{
 int VAR_2;

 if (VAR_0->inclusion_uids.count) {
  if (!FUNC_6(&(VAR_0->inclusion_uids),
      FUNC_3(VAR_1)))
   return (1);
 }

 if (VAR_0->inclusion_gids.count) {
  if (!FUNC_6(&(VAR_0->inclusion_gids),
      FUNC_0(VAR_1)))
   return (1);
 }

 if (VAR_0->inclusion_unames.count) {




  VAR_2 = FUNC_7(VAR_0, &(VAR_0->inclusion_unames),
   FUNC_4(VAR_1));

  if (!VAR_2)
   return (1);
  else if (VAR_2 < 0)
   return (VAR_2);
 }

 if (VAR_0->inclusion_gnames.count) {




  VAR_2 = FUNC_7(VAR_0, &(VAR_0->inclusion_gnames),
   FUNC_1(VAR_1));

  if (!VAR_2)
   return (1);
  else if (VAR_2 < 0)
   return (VAR_2);
 }
 return (0);
}
