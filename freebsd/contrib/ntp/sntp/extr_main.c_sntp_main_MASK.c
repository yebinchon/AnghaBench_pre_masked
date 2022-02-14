
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct event_config {int dummy; } ;
struct TYPE_4__ {int tv_usec; } ;
struct TYPE_3__ {scalar_t__ tv_usec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (int ) ;
 char** FUNC_4 (int ) ;
 int VAR_24 ;
 int FUNC_5 (int,char*) ;
 int VAR_25 ;
 int * VAR_26 ;
 int VAR_27 ;
 int FUNC_6 (int ,int *) ;
 int * VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (struct event_config*) ;
 int FUNC_10 (struct event_config*) ;
 struct event_config* FUNC_11 () ;
 int FUNC_12 (struct event_config*,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 TYPE_2__ VAR_30 ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (char const*,int) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ FUNC_22 () ;
 int VAR_33 ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 () ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int ,int) ;
 int FUNC_27 (int ,char*,char const*) ;
 int FUNC_28 (int *,int,char**) ;
 int VAR_34 ;
 int FUNC_29 (int ) ;
 int FUNC_30 () ;
 int FUNC_31 (char*,char*) ;
 char* VAR_35 ;
 int VAR_36 ;
 TYPE_1__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_32 (char*) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;

int
FUNC_33 (
 int VAR_45,
 char **VAR_46,
 const char *VAR_47
 )
{
 int VAR_48;
 int VAR_49;
 int VAR_50;
 struct event_config * VAR_51;


 FUNC_32(VAR_46[0]);

 if (!FUNC_24())
  FUNC_17(VAR_8);

 FUNC_21();
 FUNC_20();

 VAR_50 = FUNC_28(&VAR_38, VAR_45, VAR_46);
 VAR_45 -= VAR_50;
 VAR_46 += VAR_50;


 VAR_29 = VAR_20;

 FUNC_5(2, ("init_lib() done, %s%s\n",
    (VAR_31)
        ? "ipv4_works "
        : "",
    (VAR_32)
        ? "ipv6_works "
        : ""));
 VAR_34 = VAR_19;
 VAR_42 = VAR_21 / 1e3;
 VAR_30.tv_usec = FUNC_25(0, VAR_18 * 1000);
 VAR_30.tv_usec = FUNC_26(VAR_30.tv_usec, 999999);

 if (FUNC_1(VAR_16))
  FUNC_29(FUNC_2(VAR_16));

 FUNC_27(VAR_17, "%s", VAR_47);

 if (0 == VAR_45 && !FUNC_1(VAR_2) && !FUNC_1(VAR_3)) {
  FUNC_31("%s: Must supply at least one of -b hostname, -c hostname, or hostname.\n",
         VAR_35);
  FUNC_17(VAR_9);
 }
 VAR_36 = VAR_22;
 VAR_37.tv_sec = VAR_36;
 VAR_37.tv_usec = 0;


 if (FUNC_22() != VAR_13) {
  VAR_27 = VAR_0;
  FUNC_5(1, ("No ipv6 support available, forcing ipv4\n"));
 } else {

  if (FUNC_1(VAR_11))
   VAR_27 = VAR_0;
  else if (FUNC_1(VAR_12))
   VAR_27 = VAR_1;
 }
 FUNC_23(FUNC_2(VAR_15), VAR_10);


 FUNC_6(FUNC_2(VAR_14), &VAR_33);







 FUNC_14(&VAR_40);
 if (VAR_29 > 0)
  FUNC_13();






 VAR_51 = FUNC_11();
 if (((void*)0) == VAR_51) {
  FUNC_31("%s: event_config_new() failed!\n", VAR_35);
  return -1;
 }

 FUNC_12(VAR_51, VAR_7);



 VAR_28 = FUNC_9(VAR_51);
 FUNC_10(VAR_51);
 if (((void*)0) == VAR_28) {
  FUNC_31("%s: event_base_new() failed!\n", VAR_35);
  return -1;
 }


 VAR_44 = VAR_25;
 VAR_26 = &VAR_39;

 FUNC_30();

 if (FUNC_1(VAR_2)) {
  int VAR_52 = FUNC_3( VAR_2 );
  const char ** VAR_53 = FUNC_4( VAR_2 );

  while (VAR_52-- > 0) {
   FUNC_19(*VAR_53, VAR_4);
   VAR_53++;
  }
 }

 if (FUNC_1(VAR_3)) {
  int VAR_54 = FUNC_3( VAR_3 );
  const char ** VAR_55 = FUNC_4( VAR_3 );

  while (VAR_54-- > 0) {
   FUNC_19(*VAR_55, VAR_6 | VAR_5);
   VAR_55++;
  }
 }

 for (VAR_48 = 0; VAR_48 < VAR_45; ++VAR_48)
  FUNC_19(VAR_46[VAR_48], VAR_6);

 FUNC_18(VAR_28, &VAR_41);
 FUNC_7(VAR_28);
 FUNC_8(VAR_28);

 if (!VAR_43 &&
     (FUNC_0(VAR_24) || FUNC_0(VAR_23)))
  VAR_49 = 1;
 else
  VAR_49 = 0;

 return VAR_49;
}
