
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_10__ {TYPE_5__* p_subn; } ;
typedef TYPE_2__ osm_sa_t ;
typedef int ib_net64_t ;
struct TYPE_12__ {int* raw; } ;
struct TYPE_11__ {int scope_state; TYPE_4__ mgid; } ;
typedef TYPE_3__ ib_member_rec_t ;
typedef TYPE_4__ ib_gid_t ;
struct TYPE_9__ {int subnet_prefix; } ;
struct TYPE_13__ {TYPE_1__ opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int *) ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static unsigned FUNC_3(osm_sa_t * VAR_2, ib_net64_t VAR_3,
          ib_member_rec_t * VAR_4)
{
 static uint32_t VAR_5;
 ib_gid_t *VAR_6 = &VAR_4->mgid;
 uint8_t VAR_7;
 unsigned VAR_8;


 if (VAR_3 & VAR_0)
  FUNC_0(VAR_4->scope_state, &VAR_7, ((void*)0));
 else

  VAR_7 = VAR_1;

 VAR_6->raw[0] = 0xff;
 VAR_6->raw[1] = 0x10 | VAR_7;
 VAR_6->raw[2] = 0xa0;
 VAR_6->raw[3] = 0x1b;

 FUNC_1(&VAR_6->raw[4], &VAR_2->p_subn->opt.subnet_prefix, sizeof(uint64_t));

 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++) {
  FUNC_1(&VAR_6->raw[10], &VAR_5, 4);
  VAR_5++;
  if (!FUNC_2(VAR_2->p_subn, VAR_6))
   return 1;
 }

 return 0;
}
