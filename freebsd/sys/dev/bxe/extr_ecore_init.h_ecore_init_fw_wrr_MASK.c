
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct cmng_vnic {TYPE_1__* vnic_min_rate; } ;
struct TYPE_4__ {size_t fair_threshold; } ;
struct cmng_struct_per_port {TYPE_2__ fair_vars; } ;
struct cmng_init_input {scalar_t__* cos_min_rate; } ;
struct cmng_init {struct cmng_struct_per_port port; struct cmng_vnic vnic; } ;
struct TYPE_3__ {size_t* cos_credit_delta; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_0(const struct cmng_init_input *VAR_4,
         uint32_t VAR_5, struct cmng_init *VAR_6)
{
 uint32_t VAR_7, VAR_8;
 uint32_t VAR_9 = 0;
 struct cmng_vnic *VAR_10 = &VAR_6->vnic;
 struct cmng_struct_per_port *VAR_11 = &VAR_6->port;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_9 += VAR_4->cos_min_rate[VAR_8];

 if (VAR_9 > 0) {

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {




   uint32_t *VAR_12 = VAR_10->vnic_min_rate[VAR_7].cos_credit_delta;
   for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {





    VAR_12[VAR_8] =
        ((uint32_t)VAR_4->cos_min_rate[VAR_8] * 100 *
        (VAR_3 / (8 * 100 * VAR_9)));
     if (VAR_12[VAR_8] < VAR_11->fair_vars.fair_threshold
      + VAR_2) {
     VAR_12[VAR_8] =
         VAR_11->fair_vars.fair_threshold +
         VAR_2;
    }
   }
  }
 }
}
