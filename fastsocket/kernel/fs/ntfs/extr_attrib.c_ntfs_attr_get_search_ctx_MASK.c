
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ntfs_inode ;
typedef int ntfs_attr_search_ctx ;
typedef int MFT_RECORD ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int *) ;

ntfs_attr_search_ctx *FUNC_2(ntfs_inode *VAR_2, MFT_RECORD *VAR_3)
{
 ntfs_attr_search_ctx *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 if (VAR_4)
  FUNC_1(VAR_4, VAR_2, VAR_3);
 return VAR_4;
}
