
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ link_up; int speed; int duplex; int msg; } ;
union nic_mbx {TYPE_2__ link_status; } ;
typedef size_t uint8_t ;
struct nicpf {size_t num_vf_en; scalar_t__* link; int check_link; int * speed; int * duplex; int * mbx_lock; int node; int * vf_lmac_map; TYPE_1__* vf_info; } ;
struct bgx_link_status {scalar_t__ link_up; int speed; int duplex; } ;
struct TYPE_3__ {int vf_enabled; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,size_t,size_t,struct bgx_link_status*) ;
 int FUNC_3 (int *,int,void (*) (void*),struct nicpf*) ;
 int VAR_1 ;
 int FUNC_4 (struct nicpf*,size_t,union nic_mbx*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 union nic_mbx VAR_3 = {};
 struct nicpf *VAR_4;
 struct bgx_link_status VAR_5;
 uint8_t VAR_6, VAR_7, VAR_8;

 VAR_4 = (struct nicpf *)VAR_2;

 VAR_3.link_status.msg = VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_vf_en; VAR_6++) {

  if (!VAR_4->vf_info[VAR_6].vf_enabled)
   continue;


  VAR_7 = FUNC_0(VAR_4->vf_lmac_map[VAR_6]);
  VAR_8 = FUNC_1(VAR_4->vf_lmac_map[VAR_6]);

  FUNC_2(VAR_4->node, VAR_7, VAR_8, &VAR_5);


  if (VAR_4->link[VAR_6] == VAR_5.link_up)
   continue;

  if (!VAR_4->mbx_lock[VAR_6]) {
   VAR_4->link[VAR_6] = VAR_5.link_up;
   VAR_4->duplex[VAR_6] = VAR_5.duplex;
   VAR_4->speed[VAR_6] = VAR_5.speed;


   VAR_3.link_status.link_up = VAR_5.link_up;
   VAR_3.link_status.duplex = VAR_5.duplex;
   VAR_3.link_status.speed = VAR_5.speed;
   FUNC_4(VAR_4, VAR_6, &VAR_3);
  }
 }
 FUNC_3(&VAR_4->check_link, VAR_1 * 2, FUNC_5, VAR_4);
}
