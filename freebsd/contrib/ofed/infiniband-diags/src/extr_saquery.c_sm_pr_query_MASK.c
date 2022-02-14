
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sa_query_result {int p_result_madw; } ;
struct sa_handle {int dummy; } ;
typedef int pr ;
typedef int ibmad_gid_t ;
struct TYPE_5__ {int dgid; int dlid; int slid; } ;
typedef TYPE_1__ ib_path_rec_t ;
typedef int ib_net64_t ;


 int FUNC_0 (int,int,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sa_handle*,int ,int ,int ,TYPE_1__*,int,struct sa_query_result*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct sa_query_result*) ;
 TYPE_1__* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sa_handle * VAR_4, ibmad_gid_t *VAR_5, int VAR_6, int VAR_7) {

 ib_path_rec_t VAR_8;
 ib_net64_t VAR_9 = 0;
 struct sa_query_result VAR_10;
 int VAR_11;
 ib_path_rec_t *VAR_12;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 FUNC_0(VAR_6, 16, 0, VAR_8.slid, VAR_2, VAR_3);
 FUNC_0(VAR_7, 16, 0, VAR_8.dlid, VAR_2, VAR_0);

 VAR_11 = FUNC_1(VAR_4, VAR_1, 0, VAR_9, &VAR_8, sizeof(VAR_8), &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_12 = FUNC_5(VAR_10.p_result_madw, 0);
 FUNC_2(VAR_5, &VAR_12->dgid, 16);
 FUNC_4(&VAR_10);
 return VAR_11;
}
