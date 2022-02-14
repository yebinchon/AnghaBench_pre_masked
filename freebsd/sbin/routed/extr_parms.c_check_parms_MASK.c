
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parm {int parm_int_state; scalar_t__ parm_rdisc_pref; scalar_t__ parm_rdisc_int; scalar_t__ parm_d_metric; scalar_t__ parm_adj_inmetric; scalar_t__ parm_adj_outmetric; TYPE_1__* parm_auth; int parm_mask; int parm_net; int parm_name; struct parm* parm_next; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct parm*,struct parm*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct parm* VAR_6 ;
 scalar_t__ FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

const char *
FUNC_5(struct parm *VAR_7)
{
 struct parm *VAR_8, **VAR_9;
 int VAR_10, VAR_11;



 if (VAR_7->parm_int_state & VAR_2)
  VAR_7->parm_int_state |= VAR_3;
 if (VAR_7->parm_int_state & VAR_3)
  VAR_7->parm_int_state |= VAR_2;

 for (VAR_10 = VAR_11 = 0; VAR_10 < VAR_4; VAR_10++) {
  if (VAR_7->parm_auth[VAR_10].type != VAR_5)
   VAR_11++;
 }



 for (VAR_9 = &VAR_6;
      (VAR_8 = *VAR_9) != ((void*)0);
      VAR_9 = &VAR_8->parm_next) {
  if (FUNC_4(VAR_7->parm_name, VAR_8->parm_name))
   continue;
  if (!FUNC_2(FUNC_0(VAR_8->parm_net),
       VAR_7->parm_net, VAR_7->parm_mask)
      && !FUNC_2(FUNC_0(VAR_7->parm_net),
          VAR_8->parm_net, VAR_8->parm_mask))
   continue;

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if (VAR_8->parm_auth[VAR_10].type != VAR_5)
    VAR_11++;
  }
  if (VAR_11 > VAR_4)
   return "too many conflicting passwords";

  if ((0 != (VAR_7->parm_int_state & VAR_1)
       && 0 != (VAR_8->parm_int_state & VAR_1)
       && 0 != ((VAR_7->parm_int_state ^ VAR_8->parm_int_state)
         & VAR_1))
      || (0 != (VAR_7->parm_int_state & VAR_0)
   && 0 != (VAR_8->parm_int_state & VAR_0)
   && 0 != ((VAR_7->parm_int_state ^ VAR_8->parm_int_state)
     & VAR_0))
      || (VAR_7->parm_rdisc_pref != 0
   && VAR_8->parm_rdisc_pref != 0
   && VAR_7->parm_rdisc_pref != VAR_8->parm_rdisc_pref)
      || (VAR_7->parm_rdisc_int != 0
   && VAR_8->parm_rdisc_int != 0
   && VAR_7->parm_rdisc_int != VAR_8->parm_rdisc_int)) {
   return ("conflicting, duplicate router discovery"
    " parameters");

  }

  if (VAR_7->parm_d_metric != 0
       && VAR_8->parm_d_metric != 0
       && VAR_7->parm_d_metric != VAR_8->parm_d_metric) {
   return ("conflicting, duplicate poor man's router"
    " discovery or fake default metric");
  }

  if (VAR_7->parm_adj_inmetric != 0
      && VAR_8->parm_adj_inmetric != 0
      && VAR_7->parm_adj_inmetric != VAR_8->parm_adj_inmetric) {
   return ("conflicting interface input "
    "metric adjustments");
  }

  if (VAR_7->parm_adj_outmetric != 0
      && VAR_8->parm_adj_outmetric != 0
      && VAR_7->parm_adj_outmetric != VAR_8->parm_adj_outmetric) {
   return ("conflicting interface output "
    "metric adjustments");
  }
 }




 VAR_8 = (struct parm*)FUNC_3(sizeof(*VAR_8), "check_parms");
 FUNC_1(VAR_8, VAR_7, sizeof(*VAR_8));
 *VAR_9 = VAR_8;

 return 0;
}
