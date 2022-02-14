
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ext4_extent_path {int ep_blk; int * ep_data; } ;
struct buf {int b_bufsize; int b_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct ext4_extent_path *VAR_3,
    struct buf *VAR_4, uint64_t VAR_5)
{

 FUNC_0(VAR_3->ep_data == ((void*)0),
     ("ext4_ext_fill_path_bdata: bad ep_data"));

 VAR_3->ep_data = FUNC_1(VAR_4->b_bufsize, VAR_1, VAR_2);
 if (!VAR_3->ep_data)
  return (VAR_0);

 FUNC_2(VAR_3->ep_data, VAR_4->b_data, VAR_4->b_bufsize);
 VAR_3->ep_blk = VAR_5;

 return (0);
}
