
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {unsigned long zone_start_pfn; unsigned long spanned_pages; unsigned long compact_cached_migrate_pfn; unsigned long compact_cached_free_pfn; } ;
struct compact_control {unsigned long migrate_pfn; unsigned long free_pfn; scalar_t__ sync; unsigned long nr_migratepages; scalar_t__ nr_freepages; int freepages; int migratepages; scalar_t__ contended; int order; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct zone*) ;
 int FUNC_2 (struct zone*,struct compact_control*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct zone*,int ) ;
 int FUNC_4 (struct zone*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 (struct zone*,struct compact_control*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,unsigned long,int,int ) ;
 int FUNC_11 () ;
 int VAR_7 ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (struct compact_control*) ;

__attribute__((used)) static int FUNC_15(struct zone *VAR_8, struct compact_control *VAR_9)
{
 int VAR_10;
 unsigned long VAR_11 = VAR_8->zone_start_pfn;
 unsigned long VAR_12 = VAR_8->zone_start_pfn + VAR_8->spanned_pages;

 VAR_10 = FUNC_4(VAR_8, VAR_9->order);
 switch (VAR_10) {
 case 129:
 case 128:

  return VAR_10;
 case 130:

  ;
 }
 if ((FUNC_3(VAR_8, VAR_9->order)) && !FUNC_7())
  FUNC_1(VAR_8);






 VAR_9->migrate_pfn = VAR_8->compact_cached_migrate_pfn;
 VAR_9->free_pfn = VAR_8->compact_cached_free_pfn;
 if (VAR_9->free_pfn < VAR_11 || VAR_9->free_pfn > VAR_12) {
  VAR_9->free_pfn = VAR_12 & ~(VAR_7-1);
  VAR_8->compact_cached_free_pfn = VAR_9->free_pfn;
 }
 if (VAR_9->migrate_pfn < VAR_11 || VAR_9->migrate_pfn > VAR_12) {
  VAR_9->migrate_pfn = VAR_11;
  VAR_8->compact_cached_migrate_pfn = VAR_9->migrate_pfn;
 }

 FUNC_11();

 while ((VAR_10 = FUNC_2(VAR_8, VAR_9)) == 130) {
  unsigned long VAR_13, VAR_14;

  if (!FUNC_8(VAR_8, VAR_9)) {
   if (VAR_9->contended && VAR_9->sync != VAR_4) {
    FUNC_12(&VAR_9->migratepages);
    VAR_9->nr_migratepages = 0;
    VAR_10 = 129;
    break;
   }
   continue;
  }

  VAR_13 = VAR_9->nr_migratepages;
  FUNC_10(&VAR_9->migratepages, VAR_6,
    (unsigned long)VAR_9, 0,
    VAR_9->sync ? VAR_5 : VAR_3);
  FUNC_14(VAR_9);
  VAR_14 = VAR_9->nr_migratepages;

  FUNC_5(VAR_0);
  FUNC_6(VAR_2, VAR_13 - VAR_14);
  if (VAR_14)
   FUNC_6(VAR_1, VAR_14);


  if (!FUNC_9(&VAR_9->migratepages)) {
   FUNC_12(&VAR_9->migratepages);
   VAR_9->nr_migratepages = 0;
  }

 }


 VAR_9->nr_freepages -= FUNC_13(&VAR_9->freepages);
 FUNC_0(VAR_9->nr_freepages != 0);

 return VAR_10;
}
