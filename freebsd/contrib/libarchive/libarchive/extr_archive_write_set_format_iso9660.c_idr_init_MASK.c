
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdd {scalar_t__ vdd_type; } ;
struct TYPE_2__ {int iso_level; } ;
struct iso9660 {TYPE_1__ opt; } ;
struct idr {int char_map; scalar_t__ pool_size; int * idrent_pool; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct iso9660 *VAR_3, struct vdd *VAR_4, struct idr *VAR_5)
{

 VAR_5->idrent_pool = ((void*)0);
 VAR_5->pool_size = 0;
 if (VAR_4->vdd_type != VAR_0) {
  if (VAR_3->opt.iso_level <= 3) {
   FUNC_1(VAR_5->char_map, VAR_2,
       sizeof(VAR_5->char_map));
  } else {
   FUNC_1(VAR_5->char_map, VAR_1,
       sizeof(VAR_5->char_map));
   FUNC_0(VAR_5->char_map);
  }
 }
}
