
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct m_ext2fs {int dummy; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct ext2fs_htree_sort_entry {int h_size; int h_offset; int h_hash; } ;
struct ext2fs_direct_tail {int dummy; } ;
struct ext2fs_direct_2 {int e2d_reclen; scalar_t__ e2d_namlen; scalar_t__ e2d_ino; int e2d_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct m_ext2fs*,int ) ;
 int FUNC_3 (char*,int,struct ext2fs_direct_2*,struct ext2fs_direct_2*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,scalar_t__,int*,int ,int*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,void*,int) ;
 int FUNC_7 (struct ext2fs_htree_sort_entry*,int,int,int ) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_2, char *VAR_3, char *VAR_4,
    uint32_t VAR_5, uint32_t *VAR_6, uint8_t VAR_7,
    uint32_t *VAR_8, struct ext2fs_direct_2 *VAR_9)
{
 struct m_ext2fs *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0, VAR_13 = 0;
 int VAR_14, VAR_15;
 uint32_t VAR_16;
 uint16_t VAR_17 = 0;
 uint32_t VAR_18;
 struct ext2fs_direct_2 *VAR_19, *VAR_20;
 char *VAR_21;
 struct ext2fs_htree_sort_entry *VAR_22;

 VAR_10 = VAR_2->i_e2fs;
 VAR_19 = (struct ext2fs_direct_2 *)VAR_3;
 VAR_21 = VAR_4;
 VAR_22 = (struct ext2fs_htree_sort_entry *)
     ((char *)VAR_4 + VAR_5);

 if (FUNC_2(VAR_10, VAR_0))
  VAR_13 = sizeof(struct ext2fs_direct_tail);




 FUNC_4(VAR_9->e2d_name, VAR_9->e2d_namlen, VAR_6,
     VAR_7, &VAR_18, ((void*)0));




 while ((char *)VAR_19 < VAR_3 + VAR_5 - VAR_13) {
  if (VAR_19->e2d_ino && VAR_19->e2d_namlen) {
   VAR_11++;
   VAR_22--;
   VAR_22->h_size = VAR_19->e2d_reclen;
   VAR_22->h_offset = (char *)VAR_19 - VAR_3;
   FUNC_4(VAR_19->e2d_name, VAR_19->e2d_namlen,
       VAR_6, VAR_7,
       &VAR_22->h_hash, ((void*)0));
  }
  VAR_19 = (struct ext2fs_direct_2 *)
      ((char *)VAR_19 + VAR_19->e2d_reclen);
 }




 FUNC_7(VAR_22, VAR_11, sizeof(struct ext2fs_htree_sort_entry),
     VAR_1);




 for (VAR_14 = VAR_11 - 1; VAR_14 >= 0; VAR_14--) {
  if (VAR_22[VAR_14].h_size + VAR_12 > VAR_5 / 2)
   break;
  VAR_12 += VAR_22[VAR_14].h_size;
 }

 *VAR_8 = VAR_22[VAR_14 + 1].h_hash;




 if (*VAR_8 == VAR_22[VAR_14].h_hash)
  *VAR_8 += 1;




 for (VAR_15 = VAR_14 + 1; VAR_15 < VAR_11; VAR_15++) {
  VAR_19 = (struct ext2fs_direct_2 *)((char *)VAR_3 +
      VAR_22[VAR_15].h_offset);
  VAR_17 = FUNC_1(VAR_19->e2d_namlen);
  FUNC_6(VAR_21, VAR_19, VAR_17);
  ((struct ext2fs_direct_2 *)VAR_21)->e2d_reclen = VAR_17;

  VAR_19->e2d_ino = 0;
  VAR_21 += VAR_17;
 }
 VAR_21 -= VAR_17;


 VAR_20 = (struct ext2fs_direct_2 *)VAR_3;
 VAR_17 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_5 - VAR_13; ) {
  VAR_19 = (struct ext2fs_direct_2 *)(VAR_3 + VAR_16);
  VAR_16 += VAR_19->e2d_reclen;
  if (VAR_19->e2d_ino) {
   VAR_20 = (struct ext2fs_direct_2 *)
       ((char *)VAR_20 + VAR_17);
   VAR_17 = FUNC_1(VAR_19->e2d_namlen);
   FUNC_6((void *)VAR_20, (void *)VAR_19, VAR_17);
   VAR_20->e2d_reclen = VAR_17;
  }
 }

 if (VAR_18 >= *VAR_8) {

  FUNC_3(VAR_4, VAR_5,
      (struct ext2fs_direct_2 *)VAR_21, VAR_9, VAR_13);


  VAR_20->e2d_reclen = VAR_3 + VAR_5 - (char *)VAR_20 - VAR_13;
 } else {

  FUNC_3(VAR_3, VAR_5, VAR_20, VAR_9, VAR_13);


  ((struct ext2fs_direct_2 *)VAR_21)->e2d_reclen =
      VAR_4 + VAR_5 - VAR_21 - VAR_13;
 }

 if (VAR_13) {
  FUNC_5(FUNC_0(VAR_3, VAR_5));
  FUNC_5(FUNC_0(VAR_4, VAR_5));
 }

 return (0);
}
