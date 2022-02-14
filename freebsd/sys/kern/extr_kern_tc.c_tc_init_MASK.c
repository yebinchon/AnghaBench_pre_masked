
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_int ;
struct timecounter {int tc_frequency; int tc_counter_mask; int tc_quality; char* tc_name; int (* tc_get_timecount ) (struct timecounter*) ;struct timecounter* tc_next; } ;
struct sysctl_oid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,char*,int,int*,int ,char*) ;
 struct sysctl_oid* FUNC_1 (int *,int ,int ,char*,int ,int ,char*,char*) ;
 int FUNC_2 (int *,int ,int ,char*,int,struct timecounter*,int,int ,char*,char*) ;
 int FUNC_3 (int *,int ,int ,char*,int,int*,int ,char*) ;
 int FUNC_4 (struct sysctl_oid*) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct timecounter*) ;
 int FUNC_8 (struct timecounter*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct timecounter* VAR_11 ;
 struct timecounter* VAR_12 ;

void
FUNC_9(struct timecounter *VAR_13)
{
 u_int VAR_14;
 struct sysctl_oid *VAR_15;

 VAR_14 = VAR_13->tc_frequency / VAR_13->tc_counter_mask;

 VAR_14 *= 11;
 VAR_14 /= 10;
 if (VAR_14 > VAR_7 && VAR_13->tc_quality >= 0) {
  VAR_13->tc_quality = -2000;
  if (VAR_6) {
   FUNC_6("Timecounter \"%s\" frequency %ju Hz",
       VAR_13->tc_name, (uintmax_t)VAR_13->tc_frequency);
   FUNC_6(" -- Insufficient hz, needs at least %u\n", VAR_14);
  }
 } else if (VAR_13->tc_quality >= 0 || VAR_6) {
  FUNC_6("Timecounter \"%s\" frequency %ju Hz quality %d\n",
      VAR_13->tc_name, (uintmax_t)VAR_13->tc_frequency,
      VAR_13->tc_quality);
 }

 VAR_13->tc_next = VAR_12;
 VAR_12 = VAR_13;



 VAR_15 = FUNC_1(((void*)0),
     FUNC_5(VAR_5), VAR_4, VAR_13->tc_name,
     VAR_1, 0, "timecounter description", "timecounter");
 FUNC_3(((void*)0), FUNC_4(VAR_15), VAR_4,
     "mask", VAR_0, &(VAR_13->tc_counter_mask), 0,
     "mask for implemented bits");
 FUNC_2(((void*)0), FUNC_4(VAR_15), VAR_4,
     "counter", VAR_3 | VAR_0, VAR_13, sizeof(*VAR_13),
     VAR_9, "IU", "current timecounter value");
 FUNC_2(((void*)0), FUNC_4(VAR_15), VAR_4,
     "frequency", VAR_2 | VAR_0, VAR_13, sizeof(*VAR_13),
      VAR_8, "QU", "timecounter frequency");
 FUNC_0(((void*)0), FUNC_4(VAR_15), VAR_4,
     "quality", VAR_0, &(VAR_13->tc_quality), 0,
     "goodness of time counter");






 if (VAR_10)
  return;
 if (VAR_13->tc_quality < 0)
  return;
 if (VAR_13->tc_quality < VAR_11->tc_quality)
  return;
 if (VAR_13->tc_quality == VAR_11->tc_quality &&
     VAR_13->tc_frequency < VAR_11->tc_frequency)
  return;
 (void)VAR_13->tc_get_timecount(VAR_13);
 (void)VAR_13->tc_get_timecount(VAR_13);
 VAR_11 = VAR_13;
}
