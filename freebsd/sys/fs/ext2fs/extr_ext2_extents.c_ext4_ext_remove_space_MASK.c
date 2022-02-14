
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct inode {scalar_t__ i_db; } ;
struct ext4_extent_path {int ep_depth; scalar_t__ index_count; struct ext4_extent_header* ep_header; struct ext4_extent_path* ep_data; scalar_t__ ep_index; } ;
struct ext4_extent_header {scalar_t__ eh_ecount; } ;
struct buf {int dummy; } ;
typedef int off_t ;
struct TYPE_2__ {int eh_max; scalar_t__ eh_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ext4_extent_header*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (struct inode*,struct ext4_extent_header*) ;
 int FUNC_3 (struct inode*,struct ext4_extent_path*) ;
 int FUNC_4 (struct ext4_extent_path*) ;
 int FUNC_5 (struct ext4_extent_path*,struct buf*,int ) ;
 TYPE_1__* FUNC_6 (struct inode*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (struct ext4_extent_path*) ;
 int FUNC_10 (struct inode*,struct ext4_extent_path*) ;
 int FUNC_11 (struct inode*,struct ext4_extent_path*,int ) ;
 int FUNC_12 (struct inode*) ;
 struct buf* FUNC_13 (struct inode*,int ,int,int ) ;
 int FUNC_14 (struct ext4_extent_path*,int ) ;
 struct ext4_extent_path* FUNC_15 (int,int ,int) ;
 int FUNC_16 (struct ext4_extent_path*,int ,int) ;

int
FUNC_17(struct inode *VAR_5, off_t VAR_6, int VAR_7,
    struct ucred *VAR_8, struct thread *VAR_9)
{
 struct buf *VAR_10;
 struct ext4_extent_header *VAR_11;
 struct ext4_extent_path *VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = (struct ext4_extent_header *)VAR_5->i_db;
 VAR_13 = FUNC_8(VAR_5);

 VAR_15 = FUNC_2(VAR_5, VAR_11);
 if(VAR_15)
  return (VAR_15);

 VAR_12 = FUNC_15(sizeof(struct ext4_extent_path) * (VAR_13 + 1),
     VAR_2, VAR_3 | VAR_4);
 if (!VAR_12)
  return (VAR_1);

 VAR_12[0].ep_header = VAR_11;
 VAR_12[0].ep_depth = VAR_13;
 VAR_14 = 0;
 while (VAR_15 == 0 && VAR_14 >= 0) {
  if (VAR_14 == VAR_13) {

   VAR_15 = FUNC_11(VAR_5, VAR_12, VAR_6);
   if (VAR_15)
    break;
   FUNC_14(VAR_12[VAR_14].ep_data, VAR_2);
   VAR_12[VAR_14].ep_data = ((void*)0);
   VAR_14--;
   continue;
  }


  if (!VAR_12[VAR_14].ep_header)
   VAR_12[VAR_14].ep_header =
       (struct ext4_extent_header *)VAR_12[VAR_14].ep_data;

  if (!VAR_12[VAR_14].ep_index) {

   VAR_12[VAR_14].ep_index = FUNC_0(VAR_12[VAR_14].ep_header);
   VAR_12[VAR_14].index_count = VAR_12[VAR_14].ep_header->eh_ecount + 1;
  } else {

   VAR_12[VAR_14].ep_index--;
  }

  if (FUNC_9(VAR_12 + VAR_14)) {
   FUNC_16(VAR_12 + VAR_14 + 1, 0, sizeof(*VAR_12));
   VAR_10 = FUNC_13(VAR_5,
       FUNC_7(VAR_12[VAR_14].ep_index),
       VAR_12[0].ep_depth - (VAR_14 + 1), 0);
   if (!VAR_10) {
    VAR_15 = VAR_0;
    break;
   }

   FUNC_5(&VAR_12[VAR_14+1], VAR_10,
       FUNC_7(VAR_12[VAR_14].ep_index));
   FUNC_1(VAR_10);
   VAR_12[VAR_14].index_count = VAR_12[VAR_14].ep_header->eh_ecount;
   VAR_14++;
  } else {
   if (VAR_12[VAR_14].ep_header->eh_ecount == 0 && VAR_14 > 0) {

    VAR_15 = FUNC_10(VAR_5, VAR_12 + VAR_14);
   }
   FUNC_14(VAR_12[VAR_14].ep_data, VAR_2);
   VAR_12[VAR_14].ep_data = ((void*)0);
   VAR_14--;
  }
 }

 if (VAR_12->ep_header->eh_ecount == 0) {



   FUNC_6(VAR_5)->eh_depth = 0;
   FUNC_6(VAR_5)->eh_max = FUNC_12(VAR_5);
   FUNC_3(VAR_5, VAR_12);
 }

 FUNC_4(VAR_12);
 FUNC_14(VAR_12, VAR_2);

 return (VAR_15);
}
