
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct pcap_dag {int dummy; } ;
struct TYPE_5__ {int tstamp_precision_count; int * tstamp_precision_list; int activate_op; } ;
typedef TYPE_1__ pcap_t ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ,int ,char*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 char* FUNC_5 (char const*,char) ;
 long FUNC_6 (char const*,char**,int) ;

pcap_t *FUNC_7(const char *VAR_7, char *VAR_8, int *VAR_9)
{
 const char *VAR_10;
 char *VAR_11;
 long VAR_12;
 pcap_t *VAR_13;
 long VAR_14 = 0;


 VAR_10 = FUNC_5(VAR_7, '/');
 if (VAR_10 == ((void*)0))
  VAR_10 = VAR_7;

 if (FUNC_4(VAR_10, "dag", 3) != 0) {

  *VAR_9 = 0;
  return ((void*)0);
 }

 VAR_10 += 3;
 VAR_12 = FUNC_6(VAR_10, &VAR_11, 10);
 if (*VAR_11 == ':') {

  VAR_14 = FUNC_6(++VAR_11, &VAR_11, 10);
 }

 if (VAR_11 == VAR_10 || *VAR_11 != '\0') {

  *VAR_9 = 0;
  return ((void*)0);
 }

 if (VAR_12 < 0 || VAR_12 >= VAR_0) {

  *VAR_9 = 0;
  return ((void*)0);
 }

 if (VAR_14 <0 || VAR_14 >= VAR_1) {

  *VAR_9 = 0;
  return ((void*)0);
 }


 *VAR_9 = 1;

 VAR_13 = FUNC_2(VAR_8, sizeof (struct pcap_dag));
 if (VAR_13 == ((void*)0))
  return ((void*)0);

 VAR_13->activate_op = VAR_5;
 VAR_13->tstamp_precision_count = 2;
 VAR_13->tstamp_precision_list = FUNC_0(2 * sizeof(u_int));
 if (VAR_13->tstamp_precision_list == ((void*)0)) {
  FUNC_3(VAR_8, VAR_2,
      VAR_6, "malloc");
  FUNC_1(VAR_13);
  return ((void*)0);
 }
 VAR_13->tstamp_precision_list[0] = VAR_3;
 VAR_13->tstamp_precision_list[1] = VAR_4;
 return VAR_13;
}
