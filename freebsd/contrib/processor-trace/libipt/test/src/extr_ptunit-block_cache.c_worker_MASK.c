
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_block_cache {int dummy; } ;
struct pt_bcache_entry {int ninsn; int displacement; int isize; int qualifier; int mode; } ;
typedef int exp ;
typedef int bce ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pt_bcache_entry*,int,int) ;
 int FUNC_1 (struct pt_block_cache*,scalar_t__,struct pt_bcache_entry) ;
 int FUNC_2 (struct pt_bcache_entry*,struct pt_block_cache*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct pt_bcache_entry) ;
 int FUNC_4 (struct pt_bcache_entry) ;
 scalar_t__ FUNC_5 (struct pt_bcache_entry) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(void *VAR_6)
{
 struct pt_bcache_entry VAR_7;
 struct pt_block_cache *VAR_8;
 uint64_t VAR_9, VAR_10;

 VAR_8 = VAR_6;
 if (!VAR_8)
  return -VAR_3;

 FUNC_0(&VAR_7, 0x00, sizeof(VAR_7));
 VAR_7.ninsn = 5;
 VAR_7.displacement = 28;
 VAR_7.mode = VAR_5;
 VAR_7.qualifier = VAR_2;
 VAR_7.isize = 3;

 for (VAR_10 = 0; VAR_10 < VAR_1; ++VAR_10) {
  for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
   struct pt_bcache_entry VAR_11;
   int VAR_12;

   FUNC_0(&VAR_11, 0xff, sizeof(VAR_11));

   VAR_12 = FUNC_2(&VAR_11, VAR_8, VAR_10);
   if (VAR_12 < 0)
    return VAR_12;

   if (!FUNC_4(VAR_11)) {
    VAR_12 = FUNC_1(VAR_8, VAR_10, VAR_7);
    if (VAR_12 < 0)
     return VAR_12;
   }

   VAR_12 = FUNC_2(&VAR_11, VAR_8, VAR_10);
   if (VAR_12 < 0)
    return VAR_12;

   if (!FUNC_4(VAR_11))
    return -VAR_4;

   if (VAR_11.ninsn != VAR_7.ninsn)
    return -VAR_4;

   if (VAR_11.displacement != VAR_7.displacement)
    return -VAR_4;

   if (FUNC_3(VAR_11) != FUNC_3(VAR_7))
    return -VAR_4;

   if (FUNC_5(VAR_11) != FUNC_5(VAR_7))
    return -VAR_4;

   if (VAR_11.isize != VAR_7.isize)
    return -VAR_4;
  }
 }

 return 0;
}
