
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ec_type; } ;
struct inode {TYPE_1__ i_ext_cache; } ;
struct ext4_extent_path {scalar_t__ ep_depth; struct ext4_extent* ep_ext; struct ext4_extent_header* ep_header; } ;
struct ext4_extent_header {scalar_t__ eh_ecount; scalar_t__ eh_max; } ;
struct ext4_extent {scalar_t__ e_len; scalar_t__ e_blk; int e_start_hi; int e_start_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ext4_extent* FUNC_0 (struct ext4_extent_header*) ;
 struct ext4_extent* FUNC_1 (struct ext4_extent_header*) ;
 struct ext4_extent* FUNC_2 (struct ext4_extent_header*) ;
 int FUNC_3 (int,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct ext4_extent*,struct ext4_extent*) ;
 int FUNC_5 (struct inode*,struct ext4_extent_path*) ;
 int FUNC_6 (struct inode*,struct ext4_extent_path*,struct ext4_extent*) ;
 int FUNC_7 (struct inode*,struct ext4_extent_path*) ;
 int FUNC_8 (struct ext4_extent_path*) ;
 int FUNC_9 (struct inode*,int,struct ext4_extent_path**) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,struct ext4_extent_path*) ;
 int FUNC_12 (struct ext4_extent_path*,int ) ;
 int FUNC_13 (struct ext4_extent*,struct ext4_extent*,int) ;

__attribute__((used)) static int
FUNC_14(struct inode *VAR_5, struct ext4_extent_path *VAR_6,
    struct ext4_extent *VAR_7)
{
 struct ext4_extent_header * VAR_8;
 struct ext4_extent *VAR_9, *VAR_10, *VAR_11;
 struct ext4_extent_path *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_13 = FUNC_10(VAR_5);
 VAR_9 = VAR_6[VAR_13].ep_ext;
 VAR_12 = ((void*)0);

 if (VAR_7->e_len == 0 || VAR_6[VAR_13].ep_header == ((void*)0))
  return (VAR_0);


 if (VAR_9 && FUNC_4(VAR_9, VAR_7)) {
  VAR_9->e_len = VAR_9->e_len + VAR_7->e_len;
  VAR_8 = VAR_6[VAR_13].ep_header;
  VAR_11 = VAR_9;
  goto merge;
 }

repeat:
 VAR_13 = FUNC_10(VAR_5);
 VAR_8 = VAR_6[VAR_13].ep_header;
 if (VAR_8->eh_ecount < VAR_8->eh_max)
  goto has_space;


 VAR_10 = FUNC_1(VAR_8);
 VAR_16 = FUNC_11(VAR_5, VAR_6);
 if (VAR_7->e_blk > VAR_10->e_blk && VAR_16 != VAR_3) {
  FUNC_3(VAR_12 == ((void*)0),
      ("ext4_ext_insert_extent: bad path"));

  VAR_15 = FUNC_9(VAR_5, VAR_16, &VAR_12);
  if (VAR_15)
   goto cleanup;

  if (VAR_12->ep_depth != VAR_6->ep_depth) {
   VAR_15 = VAR_1;
   goto cleanup;
  }

  VAR_8 = VAR_12[VAR_13].ep_header;
  if (VAR_8->eh_ecount < VAR_8->eh_max) {
   VAR_6 = VAR_12;
   goto repeat;
  }
 }





 VAR_15 = FUNC_6(VAR_5, VAR_6, VAR_7);
 if (VAR_15)
  goto cleanup;

 VAR_13 = FUNC_10(VAR_5);
 VAR_8 = VAR_6[VAR_13].ep_header;

has_space:
 VAR_11 = VAR_6[VAR_13].ep_ext;
 if (!VAR_11) {

  VAR_6[VAR_13].ep_ext = FUNC_0(VAR_8);
 } else if (VAR_7->e_blk > VAR_11->e_blk) {
  if (VAR_11 != FUNC_1(VAR_8)) {
   VAR_14 = FUNC_2(VAR_8) - VAR_11;
   VAR_14 = (VAR_14 - 1) * sizeof(struct ext4_extent);
   VAR_14 = VAR_14 < 0 ? 0 : VAR_14;
   FUNC_13(VAR_11 + 2, VAR_11 + 1, VAR_14);
  }
  VAR_6[VAR_13].ep_ext = VAR_11 + 1;
 } else {
  VAR_14 = (FUNC_2(VAR_8) - VAR_11) * sizeof(struct ext4_extent);
  VAR_14 = VAR_14 < 0 ? 0 : VAR_14;
  FUNC_13(VAR_11 + 1, VAR_11, VAR_14);
  VAR_6[VAR_13].ep_ext = VAR_11;
 }

 VAR_8->eh_ecount = VAR_8->eh_ecount + 1;
 VAR_11 = VAR_6[VAR_13].ep_ext;
 VAR_11->e_blk = VAR_7->e_blk;
 VAR_11->e_start_lo = VAR_7->e_start_lo;
 VAR_11->e_start_hi = VAR_7->e_start_hi;
 VAR_11->e_len = VAR_7->e_len;

merge:

 while (VAR_11 < FUNC_1(VAR_8)) {
  if (!FUNC_4(VAR_11, VAR_11 + 1))
   break;


  VAR_11->e_len = VAR_11->e_len + VAR_11[1].e_len;
  if (VAR_11 + 1 < FUNC_1(VAR_8)) {
   VAR_14 = (FUNC_1(VAR_8) - VAR_11 - 1) *
       sizeof(struct ext4_extent);
   FUNC_13(VAR_11 + 1, VAR_11 + 2, VAR_14);
  }

  VAR_8->eh_ecount = VAR_8->eh_ecount - 1;
  FUNC_3(VAR_8->eh_ecount != 0,
      ("ext4_ext_insert_extent: bad ecount"));
 }





 VAR_15 = FUNC_5(VAR_5, VAR_6);
 if (VAR_15)
  goto cleanup;

 FUNC_7(VAR_5, VAR_6 + VAR_13);

cleanup:
 if (VAR_12) {
  FUNC_8(VAR_12);
  FUNC_12(VAR_12, VAR_4);
 }

 VAR_5->i_ext_cache.ec_type = VAR_2;
 return (VAR_15);
}
