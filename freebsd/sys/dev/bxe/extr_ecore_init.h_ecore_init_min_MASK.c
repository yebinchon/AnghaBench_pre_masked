
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct cmng_vnic {TYPE_1__* vnic_min_rate; } ;
struct TYPE_4__ {size_t fair_threshold; size_t upper_bound; size_t fairness_timeout; } ;
struct cmng_struct_per_port {TYPE_2__ fair_vars; } ;
struct cmng_init_input {int port_rate; scalar_t__* vnic_min_rate; } ;
struct cmng_init {struct cmng_struct_per_port port; struct cmng_vnic vnic; } ;
struct TYPE_3__ {size_t vn_credit_delta; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline void FUNC_0(const struct cmng_init_input *VAR_6,
      uint32_t VAR_7, struct cmng_init *VAR_8)
{
 uint32_t VAR_9, VAR_10, VAR_11, VAR_12;
 struct cmng_vnic *VAR_13 = &VAR_8->vnic;
 struct cmng_struct_per_port *VAR_14 = &VAR_8->port;


 VAR_10 = VAR_3 / VAR_7;





 VAR_12 = VAR_5 / VAR_6->port_rate;


 VAR_14->fair_vars.fair_threshold = VAR_3;





 VAR_14->fair_vars.upper_bound = VAR_7 * VAR_12 * VAR_1;


 VAR_14->fair_vars.fairness_timeout =
    VAR_10 / VAR_4;


 VAR_11 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  VAR_11 += VAR_6->vnic_min_rate[VAR_9];


 if (VAR_11 > 0) {

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {





   VAR_13->vnic_min_rate[VAR_9].vn_credit_delta =
    ((uint32_t)(VAR_6->vnic_min_rate[VAR_9]) * 100 *
    (VAR_5 / (8 * 100 * VAR_11)));
   if (VAR_13->vnic_min_rate[VAR_9].vn_credit_delta <
       VAR_14->fair_vars.fair_threshold +
       VAR_2) {
    VAR_13->vnic_min_rate[VAR_9].vn_credit_delta =
     VAR_14->fair_vars.fair_threshold +
     VAR_2;
   }
  }
 }
}
