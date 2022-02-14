
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_5__ {int mode; } ;
typedef TYPE_1__ pps_params_t ;
struct TYPE_6__ {scalar_t__ assert_sequence; scalar_t__ clear_sequence; int clear_timestamp; int assert_timestamp; } ;
typedef TYPE_2__ pps_info_t ;
typedef int pps_handle_t ;


 int FUNC_0 (int *,int *,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ,int ,TYPE_2__*,struct timespec*) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int) ;

int
FUNC_9(int VAR_6, char **VAR_7)
{
 int VAR_8;
 pps_info_t VAR_9;
 pps_params_t VAR_10;
 pps_handle_t VAR_11;
 int VAR_12, VAR_13;
 u_int VAR_14, VAR_15;
 double VAR_16 = 0;
 struct timespec VAR_17;

 if (VAR_6 < 2)
  VAR_7[1] = "/dev/cuaa1";
 FUNC_3(VAR_5, 0);
 VAR_8 = FUNC_2(VAR_7[1], VAR_0);
 if (VAR_8 < 0)
  FUNC_1(1, VAR_7[1]);
 VAR_12 = FUNC_4(VAR_8, &VAR_11);
 if (VAR_12 < 0)
  FUNC_1(1, "time_pps_create");

 VAR_12 = FUNC_6(VAR_11, &VAR_13);
 if (VAR_12 < 0)
  FUNC_1(1, "time_pps_getcap");

 VAR_10.mode = VAR_1 | VAR_3;
 VAR_10.mode = VAR_2;


 VAR_12 = FUNC_7(VAR_11, &VAR_10);
 if (VAR_12 < 0)
  FUNC_1(1, "time_pps_setparams");

 while (1) {
  VAR_17.tv_nsec = 0;
  VAR_17.tv_sec = 0;
  VAR_12 = FUNC_5(VAR_11, VAR_4, &VAR_9, &VAR_17);
  if (VAR_12 < 0)
   FUNC_1(1, "time_pps_fetch");
  if (VAR_14 == VAR_9.assert_sequence &&
      VAR_15 == VAR_9.clear_sequence) {
   FUNC_8(10000);
   continue;
  }

  FUNC_0(&VAR_9.assert_timestamp, &VAR_9.clear_timestamp,
   VAR_9.assert_sequence, VAR_9.clear_sequence);
  VAR_14 = VAR_9.assert_sequence;
  VAR_15 = VAR_9.clear_sequence;
 }

 return(0);
}
