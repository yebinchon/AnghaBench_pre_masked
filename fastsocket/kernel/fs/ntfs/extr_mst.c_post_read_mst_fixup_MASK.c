
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int usa_count; int magic; int usa_ofs; } ;
typedef TYPE_1__ NTFS_RECORD ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;

int FUNC_1(NTFS_RECORD *VAR_4, const u32 VAR_5)
{
 u16 VAR_6, VAR_7, VAR_8;
 u16 *VAR_9, *VAR_10;


 VAR_6 = FUNC_0(VAR_4->usa_ofs);

 VAR_7 = FUNC_0(VAR_4->usa_count) - 1;

 if ( VAR_5 & (VAR_1 - 1) ||
      VAR_6 & 1 ||
      VAR_6 + (VAR_7 * 2) > VAR_5 ||
      (VAR_5 >> VAR_2) != VAR_7)
  return 0;

 VAR_9 = (u16*)VAR_4 + VAR_6/sizeof(u16);







 VAR_8 = *VAR_9;



 VAR_10 = (u16*)VAR_4 + VAR_1/sizeof(u16) - 1;



 while (VAR_7--) {
  if (*VAR_10 != VAR_8) {





   VAR_4->magic = VAR_3;
   return -VAR_0;
  }
  VAR_10 += VAR_1/sizeof(u16);
 }

 VAR_7 = FUNC_0(VAR_4->usa_count) - 1;
 VAR_10 = (u16*)VAR_4 + VAR_1/sizeof(u16) - 1;

 while (VAR_7--) {




  *VAR_10 = *(++VAR_9);

  VAR_10 += VAR_1/sizeof(u16);
 }
 return 0;
}
