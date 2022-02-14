
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shared_bitmap_info {int hashcode; int * pt_vars; } ;
typedef TYPE_1__* shared_bitmap_info_t ;
typedef int * bitmap ;
struct TYPE_2__ {int * pt_vars; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void** FUNC_1 (int ,struct shared_bitmap_info*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static bitmap
FUNC_2 (bitmap VAR_2)
{
  void **VAR_3;
  struct shared_bitmap_info VAR_4;

  VAR_4.pt_vars = VAR_2;
  VAR_4.hashcode = FUNC_0 (VAR_2);

  VAR_3 = FUNC_1 (VAR_1, &VAR_4,
       VAR_4.hashcode, VAR_0);
  if (!VAR_3)
    return ((void*)0);
  else
    return ((shared_bitmap_info_t) *VAR_3)->pt_vars;
}
