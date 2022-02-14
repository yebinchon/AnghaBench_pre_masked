
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {long long compr_type; scalar_t__ xattr_names; scalar_t__ xattr_cnt; scalar_t__ data_len; scalar_t__ xattr; } ;
struct ubifs_info {scalar_t__ max_inode_sz; } ;
struct inode {scalar_t__ i_size; int i_mode; int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ubifs_info*,struct inode const*) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (long long) ;
 int FUNC_3 (char*,long long) ;
 struct ubifs_inode* FUNC_4 (struct inode const*) ;
 int FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_5, const struct inode *VAR_6)
{
 int VAR_7;
 const struct ubifs_inode *VAR_8 = FUNC_4(VAR_6);

 if (VAR_6->i_size > VAR_5->max_inode_sz) {
  FUNC_3("inode is too large (%lld)",
     (long long)VAR_6->i_size);
  return 1;
 }

 if (VAR_8->compr_type < 0 || VAR_8->compr_type >= VAR_2) {
  FUNC_3("unknown compression type %d", VAR_8->compr_type);
  return 2;
 }

 if (VAR_8->xattr_names + VAR_8->xattr_cnt > VAR_4)
  return 3;

 if (VAR_8->data_len < 0 || VAR_8->data_len > VAR_3)
  return 4;

 if (VAR_8->xattr && (VAR_6->i_mode & VAR_0) != VAR_1)
  return 5;

 if (!FUNC_2(VAR_8->compr_type)) {
  FUNC_5("inode %lu uses '%s' compression, but it was not "
      "compiled in", VAR_6->i_ino,
      FUNC_1(VAR_8->compr_type));
 }

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 return VAR_7;
}
