
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ s64 ;
typedef int pgoff_t ;
struct TYPE_5__ {scalar_t__ nr_clusters; int lcnbmp_lock; TYPE_1__* lcnbmp_ino; } ;
typedef TYPE_2__ ntfs_volume ;
struct TYPE_4__ {struct address_space* i_mapping; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct page*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct page*) ;
 struct page* FUNC_7 (struct address_space*,int,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static s64 FUNC_9(ntfs_volume *VAR_3)
{
 s64 VAR_4 = VAR_3->nr_clusters;
 u32 *VAR_5;
 struct address_space *VAR_6 = VAR_3->lcnbmp_ino->i_mapping;
 struct page *VAR_7;
 pgoff_t VAR_8, VAR_9;

 FUNC_5("Entering.");

 FUNC_1(&VAR_3->lcnbmp_lock);





 VAR_9 = (((VAR_3->nr_clusters + 7) >> 3) + VAR_2 - 1) >>
   VAR_1;

 FUNC_5("Reading $Bitmap, max_index = 0x%lx, max_size = 0x%lx.",
   VAR_9, VAR_2 / 4);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  unsigned int VAR_10;




  VAR_7 = FUNC_7(VAR_6, VAR_8, ((void*)0));

  if (FUNC_0(VAR_7)) {
   FUNC_5("read_mapping_page() error. Skipping "
     "page (index 0x%lx).", VAR_8);
   VAR_4 -= VAR_2 * 8;
   continue;
  }
  VAR_5 = (u32*)FUNC_3(VAR_7, VAR_0);







    for (VAR_10 = 0; VAR_10 < VAR_2 / 4; VAR_10++)
   VAR_4 -= (s64)FUNC_2(VAR_5[VAR_10]);
  FUNC_4(VAR_5, VAR_0);
  FUNC_6(VAR_7);
 }
 FUNC_5("Finished reading $Bitmap, last index = 0x%lx.", VAR_8 - 1);




 if (VAR_3->nr_clusters & 63)
  VAR_4 += 64 - (VAR_3->nr_clusters & 63);
 FUNC_8(&VAR_3->lcnbmp_lock);

 if (VAR_4 < 0)
  VAR_4 = 0;
 FUNC_5("Exiting.");
 return VAR_4;
}
