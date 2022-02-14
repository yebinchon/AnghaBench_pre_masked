
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext4_extent_path {scalar_t__ index_count; TYPE_1__* ep_header; int * ep_index; } ;
struct TYPE_2__ {scalar_t__ eh_ecount; } ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int inline
FUNC_2(struct ext4_extent_path *VAR_0)
{

 FUNC_1(VAR_0->ep_index != ((void*)0),
     ("ext4_ext_more_to_rm: bad index from path"));

 if (VAR_0->ep_index < FUNC_0(VAR_0->ep_header))
  return (0);

 if (VAR_0->ep_header->eh_ecount == VAR_0->index_count)
  return (0);

 return (1);
}
