
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dccp_ackvec {int av_records; scalar_t__ av_vec_len; int av_time; scalar_t__ av_buf_nonce; scalar_t__ av_buf_ackno; scalar_t__ av_buf_head; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct dccp_ackvec* FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,int ) ;

struct dccp_ackvec *FUNC_3(const gfp_t VAR_3)
{
 struct dccp_ackvec *VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (VAR_4 != ((void*)0)) {
  VAR_4->av_buf_head = VAR_0 - 1;
  VAR_4->av_buf_ackno = VAR_1 + 1;
  VAR_4->av_buf_nonce = 0;
  VAR_4->av_time = FUNC_2(0, 0);
  VAR_4->av_vec_len = 0;
  FUNC_0(&VAR_4->av_records);
 }

 return VAR_4;
}
