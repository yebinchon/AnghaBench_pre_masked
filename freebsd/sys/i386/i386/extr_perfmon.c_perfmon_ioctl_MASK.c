
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_long ;
struct thread {int dummy; } ;
struct pmc_tstamp {int pmct_rate; int pmct_value; } ;
struct pmc_data {int pmcd_value; int pmcd_num; } ;
struct pmc {int pmc_num; int pmc_val; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_5, u_long VAR_6, caddr_t VAR_7, int VAR_8, struct thread *VAR_9)
{
 struct pmc *VAR_10;
 struct pmc_data *VAR_11;
 struct pmc_tstamp *VAR_12;
 uint64_t VAR_13;
 int *VAR_14;
 int VAR_15;

 switch(VAR_6) {
 case 131:
  if (!(VAR_8 & VAR_2))
   return VAR_1;
  VAR_10 = (struct pmc *)VAR_7;

  VAR_15 = FUNC_4(VAR_10->pmc_num, VAR_10->pmc_val);
  if (!VAR_15) {
   VAR_4 |= (1 << VAR_10->pmc_num);
  }
  break;

 case 134:
  VAR_10 = (struct pmc *)VAR_7;
  VAR_15 = FUNC_1(VAR_10->pmc_num, &VAR_10->pmc_val);
  break;

 case 130:
  if (!(VAR_8 & VAR_2))
   return VAR_1;

  VAR_14 = (int *)VAR_7;
  VAR_15 = FUNC_5(*VAR_14);
  break;

 case 129:
  if (!(VAR_8 & VAR_2))
   return VAR_1;

  VAR_14 = (int *)VAR_7;
  VAR_15 = FUNC_6(*VAR_14);
  break;

 case 132:
  if (!(VAR_8 & VAR_2))
   return VAR_1;

  VAR_14 = (int *)VAR_7;
  VAR_15 = FUNC_3(*VAR_14);
  break;

 case 133:
  VAR_11 = (struct pmc_data *)VAR_7;
  VAR_15 = FUNC_2(VAR_11->pmcd_num, &VAR_11->pmcd_value);
  break;

 case 128:
  VAR_13 = FUNC_0(&VAR_3);
  if (VAR_13 == 0) {
   VAR_15 = VAR_0;
   break;
  }
  VAR_12 = (struct pmc_tstamp *)VAR_7;

  VAR_12->pmct_rate = VAR_13 / 1000000;
  VAR_12->pmct_value = FUNC_7();
  VAR_15 = 0;
  break;
 default:
  VAR_15 = VAR_0;
 }

 return VAR_15;
}
