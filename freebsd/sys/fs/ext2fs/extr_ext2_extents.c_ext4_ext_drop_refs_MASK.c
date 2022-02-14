
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent_path {int ep_depth; int * ep_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct ext4_extent_path *VAR_1)
{
 int VAR_2, VAR_3;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->ep_depth;
 for (VAR_3 = 0; VAR_3 <= VAR_2; VAR_3++, VAR_1++)
  if (VAR_1->ep_data) {
   FUNC_0(VAR_1->ep_data, VAR_0);
   VAR_1->ep_data = ((void*)0);
  }
}
