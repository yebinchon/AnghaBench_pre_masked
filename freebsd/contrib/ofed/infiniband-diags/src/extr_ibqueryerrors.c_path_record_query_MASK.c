
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct sa_query_result {scalar_t__ status; } ;
struct sa_handle {int dummy; } ;
typedef int pr ;
struct TYPE_7__ {int num_path; int dgid; int sgid; } ;
typedef TYPE_1__ ib_path_rec_t ;
typedef int ib_net64_t ;
struct TYPE_8__ {int raw; } ;
typedef TYPE_2__ ib_gid_t ;


 int FUNC_0 (TYPE_2__,int ,int ,int ) ;
 int FUNC_1 (int,int,int,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct sa_query_result*) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (struct sa_handle*) ;
 int FUNC_8 (struct sa_query_result*) ;
 struct sa_handle* FUNC_9 () ;
 int FUNC_10 (struct sa_handle*,int ,int ,int ,int ,int ,TYPE_1__*,int,struct sa_query_result*) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_13 ;
 char* FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(ib_gid_t VAR_14,uint64_t VAR_15)
{
     ib_path_rec_t VAR_16;
     ib_net64_t VAR_17 = 0;
     uint8_t VAR_18 = 0;
     struct sa_handle * VAR_19;

     if (!(VAR_19 = FUNC_9()))
 return -1;

     VAR_12 = VAR_0;
     FUNC_6(&VAR_16, 0, sizeof(VAR_16));

     FUNC_0(VAR_14, VAR_16.sgid, VAR_8, VAR_10);
     if(VAR_15) {
      FUNC_5(VAR_14.raw, VAR_3, &VAR_15);
      FUNC_0(VAR_14, VAR_16.dgid, VAR_8, VAR_1);
     }

     FUNC_1(1, 8, -1, VAR_16.num_path, VAR_8, VAR_7);
     FUNC_1(1, 8, -1, VAR_18, VAR_8, VAR_9);
     VAR_16.num_path |= VAR_18 << 7;
     struct sa_query_result VAR_20;
     int VAR_21 = FUNC_10(VAR_19, VAR_4,
                        (uint16_t)VAR_5,0,FUNC_2(VAR_17),VAR_11,
                        &VAR_16, sizeof(VAR_16), &VAR_20);
     if (VAR_21) {
             FUNC_7(VAR_19);
             FUNC_3(VAR_13, "Query SA failed: %s; sa call path_query failed\n", FUNC_12(VAR_21));
             return VAR_21;
     }
     if (VAR_20.status != VAR_6) {
             FUNC_11(VAR_20.status);
             VAR_21 = VAR_2;
             goto Exit;
     }

     FUNC_4(&VAR_20);
Exit:
     FUNC_7(VAR_19);
     FUNC_8(&VAR_20);
     return VAR_21;
}
