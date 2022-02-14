
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct page {unsigned int index; TYPE_1__* mapping; } ;
struct nilfs_dir_entry {int name_len; int inode; int rec_len; } ;
struct inode {unsigned int i_size; int i_ino; struct super_block* i_sb; } ;
struct TYPE_2__ {struct inode* host; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct super_block*,char*,char*,int ,...) ;
 char* FUNC_7 (struct page*) ;

__attribute__((used)) static void FUNC_8(struct page *VAR_3)
{
 struct inode *VAR_4 = VAR_3->mapping->host;
 struct super_block *VAR_5 = VAR_4->i_sb;
 unsigned VAR_6 = FUNC_5(VAR_4);
 char *VAR_7 = FUNC_7(VAR_3);
 unsigned VAR_8, VAR_9;
 unsigned VAR_10 = VAR_2;
 struct nilfs_dir_entry *VAR_11;
 char *VAR_12;

 if ((VAR_4->i_size >> VAR_1) == VAR_3->index) {
  VAR_10 = VAR_4->i_size & ~VAR_0;
  if (VAR_10 & (VAR_6 - 1))
   goto Ebadsize;
  if (!VAR_10)
   goto out;
 }
 for (VAR_8 = 0; VAR_8 <= VAR_10 - FUNC_0(1); VAR_8 += VAR_9) {
  VAR_11 = (struct nilfs_dir_entry *)(VAR_7 + VAR_8);
  VAR_9 = FUNC_3(VAR_11->rec_len);

  if (VAR_9 < FUNC_0(1))
   goto Eshort;
  if (VAR_9 & 3)
   goto Ealign;
  if (VAR_9 < FUNC_0(VAR_11->name_len))
   goto Enamelen;
  if (((VAR_8 + VAR_9 - 1) ^ VAR_8) & ~(VAR_6-1))
   goto Espan;
 }
 if (VAR_8 != VAR_10)
  goto Eend;
out:
 FUNC_1(VAR_3);
 return;



Ebadsize:
 FUNC_6(VAR_5, "nilfs_check_page",
      "size of directory #%lu is not a multiple of chunk size",
      VAR_4->i_ino
 );
 goto fail;
Eshort:
 VAR_12 = "rec_len is smaller than minimal";
 goto bad_entry;
Ealign:
 VAR_12 = "unaligned directory entry";
 goto bad_entry;
Enamelen:
 VAR_12 = "rec_len is too small for name_len";
 goto bad_entry;
Espan:
 VAR_12 = "directory entry across blocks";
bad_entry:
 FUNC_6(VAR_5, "nilfs_check_page", "bad entry in directory #%lu: %s - "
      "offset=%lu, inode=%lu, rec_len=%d, name_len=%d",
      VAR_4->i_ino, VAR_12, (VAR_3->index<<VAR_1)+VAR_8,
      (unsigned long) FUNC_4(VAR_11->inode),
      VAR_9, VAR_11->name_len);
 goto fail;
Eend:
 VAR_11 = (struct nilfs_dir_entry *)(VAR_7 + VAR_8);
 FUNC_6(VAR_5, "nilfs_check_page",
      "entry in directory #%lu spans the page boundary"
      "offset=%lu, inode=%lu",
      VAR_4->i_ino, (VAR_3->index<<VAR_1)+VAR_8,
      (unsigned long) FUNC_4(VAR_11->inode));
fail:
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
}
