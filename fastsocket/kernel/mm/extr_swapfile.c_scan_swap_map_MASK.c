
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int flags; unsigned long cluster_next; int cluster_nr; int pages; int inuse_pages; long lowest_alloc; long max; unsigned long highest_alloc; unsigned long lowest_bit; unsigned long highest_bit; char* swap_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct swap_info_struct*,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (struct swap_info_struct*,unsigned long,unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 () ;
 int VAR_10 ;
 int FUNC_9 (int*,int ,int ,int ) ;
 int FUNC_10 (int*,int ) ;

__attribute__((used)) static inline unsigned long FUNC_11(struct swap_info_struct *VAR_11,
       unsigned char VAR_12)
{
 unsigned long VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15 = 0;
 int VAR_16 = VAR_0;
 int VAR_17 = 0;
 VAR_11->flags += VAR_5;
 VAR_14 = VAR_13 = VAR_11->cluster_next;

 if (FUNC_7(!VAR_11->cluster_nr--)) {
  if (VAR_11->pages - VAR_11->inuse_pages < VAR_1) {
   VAR_11->cluster_nr = VAR_1 - 1;
   goto checks;
  }
  if (VAR_11->flags & VAR_3) {







   if (VAR_11->lowest_alloc)
    goto checks;
   VAR_11->lowest_alloc = VAR_11->max;
   VAR_11->highest_alloc = 0;
  }
  FUNC_6(&VAR_9);
  if (!(VAR_11->flags & VAR_6))
   VAR_14 = VAR_13 = VAR_11->lowest_bit;
  VAR_15 = VAR_13 + VAR_1 - 1;


  for (; VAR_15 <= VAR_11->highest_bit; VAR_13++) {
   if (VAR_11->swap_map[VAR_13])
    VAR_15 = VAR_13 + VAR_1;
   else if (VAR_13 == VAR_15) {
    FUNC_5(&VAR_9);
    VAR_13 -= VAR_1 - 1;
    VAR_11->cluster_next = VAR_13;
    VAR_11->cluster_nr = VAR_1 - 1;
    VAR_17 = 1;
    goto checks;
   }
   if (FUNC_7(--VAR_16 < 0)) {
    FUNC_1();
    VAR_16 = VAR_0;
   }
  }

  VAR_13 = VAR_11->lowest_bit;
  VAR_15 = VAR_13 + VAR_1 - 1;


  for (; VAR_15 < VAR_14; VAR_13++) {
   if (VAR_11->swap_map[VAR_13])
    VAR_15 = VAR_13 + VAR_1;
   else if (VAR_13 == VAR_15) {
    FUNC_5(&VAR_9);
    VAR_13 -= VAR_1 - 1;
    VAR_11->cluster_next = VAR_13;
    VAR_11->cluster_nr = VAR_1 - 1;
    VAR_17 = 1;
    goto checks;
   }
   if (FUNC_7(--VAR_16 < 0)) {
    FUNC_1();
    VAR_16 = VAR_0;
   }
  }

  VAR_13 = VAR_14;
  FUNC_5(&VAR_9);
  VAR_11->cluster_nr = VAR_1 - 1;
  VAR_11->lowest_alloc = 0;
 }

checks:
 if (!(VAR_11->flags & VAR_7))
  goto no_page;
 if (!VAR_11->highest_bit)
  goto no_page;
 if (VAR_13 > VAR_11->highest_bit)
  VAR_14 = VAR_13 = VAR_11->lowest_bit;


 if (FUNC_8() && VAR_11->swap_map[VAR_13] == VAR_2) {
  int VAR_18;
  FUNC_6(&VAR_9);
  VAR_18 = FUNC_0(VAR_11, VAR_13);
  FUNC_5(&VAR_9);

  if (VAR_18)
   goto checks;
  goto scan;
 }

 if (VAR_11->swap_map[VAR_13])
  goto scan;

 if (VAR_13 == VAR_11->lowest_bit)
  VAR_11->lowest_bit++;
 if (VAR_13 == VAR_11->highest_bit)
  VAR_11->highest_bit--;
 VAR_11->inuse_pages++;
 if (VAR_11->inuse_pages == VAR_11->pages) {
  VAR_11->lowest_bit = VAR_11->max;
  VAR_11->highest_bit = 0;
 }
 VAR_11->swap_map[VAR_13] = VAR_12;
 VAR_11->cluster_next = VAR_13 + 1;
 VAR_11->flags -= VAR_5;

 if (VAR_11->lowest_alloc) {




  if (VAR_17) {







   if (VAR_13 < VAR_11->highest_alloc &&
       VAR_11->lowest_alloc <= VAR_15)
    VAR_15 = VAR_11->lowest_alloc - 1;
   VAR_11->flags |= VAR_4;
   FUNC_6(&VAR_9);

   if (VAR_13 < VAR_15)
    FUNC_2(VAR_11, VAR_13,
     VAR_15 - VAR_13 + 1);

   FUNC_5(&VAR_9);
   VAR_11->lowest_alloc = 0;
   VAR_11->flags &= ~VAR_4;

   FUNC_4();
   FUNC_10(&VAR_11->flags, FUNC_3(VAR_4));

  } else if (VAR_11->flags & VAR_4) {






   FUNC_6(&VAR_9);
   FUNC_9(&VAR_11->flags, FUNC_3(VAR_4),
    VAR_10, VAR_8);
   FUNC_5(&VAR_9);
  } else {





   if (VAR_13 < VAR_11->lowest_alloc)
    VAR_11->lowest_alloc = VAR_13;
   if (VAR_13 > VAR_11->highest_alloc)
    VAR_11->highest_alloc = VAR_13;
  }
 }
 return VAR_13;

scan:
 FUNC_6(&VAR_9);
 while (++VAR_13 <= VAR_11->highest_bit) {
  if (!VAR_11->swap_map[VAR_13]) {
   FUNC_5(&VAR_9);
   goto checks;
  }
  if (FUNC_8() && VAR_11->swap_map[VAR_13] == VAR_2) {
   FUNC_5(&VAR_9);
   goto checks;
  }
  if (FUNC_7(--VAR_16 < 0)) {
   FUNC_1();
   VAR_16 = VAR_0;
  }
 }
 VAR_13 = VAR_11->lowest_bit;
 while (++VAR_13 < VAR_14) {
  if (!VAR_11->swap_map[VAR_13]) {
   FUNC_5(&VAR_9);
   goto checks;
  }
  if (FUNC_8() && VAR_11->swap_map[VAR_13] == VAR_2) {
   FUNC_5(&VAR_9);
   goto checks;
  }
  if (FUNC_7(--VAR_16 < 0)) {
   FUNC_1();
   VAR_16 = VAR_0;
  }
 }
 FUNC_5(&VAR_9);

no_page:
 VAR_11->flags -= VAR_5;
 return 0;
}
