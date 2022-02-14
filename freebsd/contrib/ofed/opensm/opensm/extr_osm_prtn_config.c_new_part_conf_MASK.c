
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mtu; int rate; int sl; } ;
struct part_conf {int indx0; int membership; TYPE_1__ flags; scalar_t__ is_ipoib; int * p_prtn; int * p_subn; int * p_log; } ;
typedef int osm_subn_t ;
typedef int osm_log_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct part_conf*,int ,int) ;

__attribute__((used)) static struct part_conf *FUNC_1(osm_log_t * VAR_5, osm_subn_t * VAR_6)
{
 static struct part_conf VAR_7;
 struct part_conf *VAR_8 = &VAR_7;

 FUNC_0(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->p_log = VAR_5;
 VAR_8->p_subn = VAR_6;
 VAR_8->p_prtn = ((void*)0);
 VAR_8->is_ipoib = 0;
 VAR_8->flags.sl = VAR_4;
 VAR_8->flags.rate = VAR_3;
 VAR_8->flags.mtu = VAR_2;
 VAR_8->membership = VAR_1;
 VAR_8->indx0 = VAR_0;
 return VAR_8;
}
