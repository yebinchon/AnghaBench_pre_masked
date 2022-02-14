
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent_path {int * ep_data; } ;
struct buf {int b_bufsize; int b_data; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct ext4_extent_path *VAR_0, struct buf *VAR_1)
{

 FUNC_0(VAR_0->ep_data != ((void*)0),
     ("ext4_ext_fill_path_buf: bad ep_data"));

 FUNC_1(VAR_1->b_data, VAR_0->ep_data, VAR_1->b_bufsize);
}
