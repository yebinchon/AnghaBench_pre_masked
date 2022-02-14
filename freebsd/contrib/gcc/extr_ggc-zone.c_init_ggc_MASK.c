
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* page; TYPE_2__* zone; } ;
struct small_page_entry {TYPE_1__ common; struct small_page_entry* next; } ;
struct TYPE_7__ {int pagesize; int page_mask; int quire_size; int dev_zero_fd; scalar_t__ small_page_overhead; int debug_file; int lg_pagesize; TYPE_2__* zones; } ;
struct TYPE_6__ {char* name; struct small_page_entry* free_pages; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_0 (int *,int,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 TYPE_2__ VAR_7 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*,int ) ;
 int VAR_8 ;
 int FUNC_8 (char*,TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct small_page_entry* FUNC_10 (int,scalar_t__) ;

void
FUNC_11 (void)
{




  FUNC_3 (VAR_1 == VAR_4);


  VAR_7.name = "Main zone";
  VAR_2.zones = &VAR_7;


  FUNC_6 (&VAR_8, "RTL zone");
  FUNC_6 (&VAR_11, "Tree zone");
  FUNC_6 (&VAR_10, "Tree identifier zone");

  VAR_2.pagesize = FUNC_4();
  VAR_2.lg_pagesize = FUNC_1 (VAR_2.pagesize);
  VAR_2.page_mask = ~(VAR_2.pagesize - 1);


  FUNC_3 ((VAR_2.pagesize & (VAR_3 - 1)) == 0);


  VAR_2.quire_size = 16 * VAR_2.pagesize / VAR_3;




  VAR_2.small_page_overhead
    = VAR_6 + (VAR_3 / VAR_0 / 8);
  VAR_2.debug_file = VAR_9;
}
