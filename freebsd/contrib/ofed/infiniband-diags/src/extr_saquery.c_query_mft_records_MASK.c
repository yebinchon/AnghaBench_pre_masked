
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct sa_handle {int dummy; } ;
struct query_params {int dummy; } ;
struct query_cmd {int dummy; } ;
typedef int mftr ;
typedef int ib_net64_t ;
struct TYPE_4__ {int lid; int position_block_num; } ;
typedef TYPE_1__ ib_mft_record_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (struct sa_handle*,int ,int ,int ,TYPE_1__*,int,int ,struct query_params*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct sa_handle*,char*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_5(const struct query_cmd *VAR_7, struct sa_handle * VAR_8,
        struct query_params *VAR_9, int VAR_10, char *VAR_11[])
{
 ib_mft_record_t VAR_12;
 ib_net64_t VAR_13 = 0;
 int VAR_14 = 0, VAR_15 = -1, VAR_16 = -1;
 uint16_t VAR_17 = 0;

 if (VAR_10 > 0)
  FUNC_4(VAR_8, VAR_11[0], &VAR_14, &VAR_16, &VAR_15);

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 FUNC_0(VAR_14, 16, 0, VAR_12.lid, VAR_4, VAR_3);
 FUNC_0(VAR_15, 16, -1, VAR_12.position_block_num, VAR_4, VAR_0);
 VAR_12.position_block_num &= FUNC_1(VAR_1);
 FUNC_0(VAR_16, 8, -1, VAR_17, VAR_4, VAR_5);
 VAR_12.position_block_num |= FUNC_1(VAR_17 << 12);

 return FUNC_2(VAR_8, VAR_2, 0, VAR_13,
     &VAR_12, sizeof(VAR_12), VAR_6, VAR_9);
}
