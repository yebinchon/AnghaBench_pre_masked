
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_fileident_bh {int dummy; } ;
struct long_ad {int dummy; } ;
struct inode {int i_sb; } ;
struct fileIdentDesc {int icb; int fileCharacteristics; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct inode*,struct fileIdentDesc*,struct fileIdentDesc*,struct udf_fileident_bh*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct fileIdentDesc *VAR_3,
       struct udf_fileident_bh *VAR_4,
       struct fileIdentDesc *VAR_5)
{
 VAR_5->fileCharacteristics |= VAR_0;

 if (FUNC_0(VAR_2->i_sb, VAR_1))
  FUNC_1(&(VAR_5->icb), 0x00, sizeof(struct long_ad));

 return FUNC_2(VAR_2, VAR_5, VAR_3, VAR_4, ((void*)0), ((void*)0));
}
