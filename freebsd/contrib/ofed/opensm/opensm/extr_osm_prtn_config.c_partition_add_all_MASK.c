
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct part_conf {int indx0; TYPE_2__* p_subn; int p_log; } ;
typedef int osm_prtn_t ;
typedef scalar_t__ membership_t ;
struct TYPE_3__ {scalar_t__ allow_both_pkeys; } ;
struct TYPE_4__ {TYPE_1__ opt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct part_conf*,int *,unsigned int,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int *,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct part_conf *VAR_5, osm_prtn_t * VAR_6,
        unsigned VAR_7, membership_t VAR_8)
{
 FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, 0);

 if (VAR_8 != VAR_3 &&
     FUNC_1(VAR_5->p_log, VAR_5->p_subn, VAR_6, VAR_7, VAR_4, VAR_5->indx0) != VAR_2)
  return -1;
 if ((VAR_8 == VAR_3 ||
      (VAR_8 == VAR_0 && VAR_5->p_subn->opt.allow_both_pkeys)) &&
     FUNC_1(VAR_5->p_log, VAR_5->p_subn, VAR_6, VAR_7, VAR_1, VAR_5->indx0) != VAR_2)
  return -1;
 return 0;
}
