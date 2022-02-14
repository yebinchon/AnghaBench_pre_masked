
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_handle {int dummy; } ;
struct query_params {int dummy; } ;
struct query_cmd {int dummy; } ;
typedef int ir ;
typedef int ib_net64_t ;
typedef int ib_inform_info_record_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sa_handle*,int ,int ,int ,int *,int,int ,struct query_params*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static int FUNC_3(const struct query_cmd *VAR_3,
        struct sa_handle * VAR_4, struct query_params *VAR_5,
        int VAR_6, char *VAR_7[])
{
       int VAR_8 = 0;
       ib_inform_info_record_t VAR_9;
       ib_net64_t VAR_10 = 0;
       FUNC_1(&VAR_9, 0, sizeof(VAR_9));

       if (VAR_6 > 0) {
           VAR_10 = VAR_0;
           if((VAR_8 = FUNC_2(VAR_7[0], &VAR_9)) < 1)
                 return VAR_8;
       }

       return FUNC_0(VAR_4, VAR_1, 0, VAR_10,
           &VAR_9, sizeof(VAR_9), VAR_2, VAR_5);

}
