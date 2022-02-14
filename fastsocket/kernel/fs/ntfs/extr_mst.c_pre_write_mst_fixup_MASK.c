
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int le16 ;
struct TYPE_3__ {int usa_count; int usa_ofs; int magic; } ;
typedef TYPE_1__ NTFS_RECORD ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(NTFS_RECORD *VAR_3, const u32 VAR_4)
{
 le16 *VAR_5, *VAR_6;
 u16 VAR_7, VAR_8, VAR_9;
 le16 VAR_10;


 if (!VAR_3 || FUNC_3(VAR_3->magic) ||
   FUNC_4(VAR_3->magic))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_3->usa_ofs);

 VAR_8 = FUNC_1(VAR_3->usa_count) - 1;

 if ( VAR_4 & (VAR_1 - 1) ||
      VAR_7 & 1 ||
      VAR_7 + (VAR_8 * 2) > VAR_4 ||
      (VAR_4 >> VAR_2) != VAR_8)
  return -VAR_0;

 VAR_5 = (le16*)((u8*)VAR_3 + VAR_7);




 VAR_9 = FUNC_2(VAR_5) + 1;
 if (VAR_9 == 0xffff || !VAR_9)
  VAR_9 = 1;
 VAR_10 = FUNC_0(VAR_9);
 *VAR_5 = VAR_10;

 VAR_6 = (le16*)VAR_3 + VAR_1/sizeof(le16) - 1;

 while (VAR_8--) {




  *(++VAR_5) = *VAR_6;

  *VAR_6 = VAR_10;

  VAR_6 += VAR_1/sizeof(le16);
 }
 return 0;
}
