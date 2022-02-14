
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int dummy; } ;
struct vesagtf_params {int J; int K; int C; int M; int min_vsbp; int hsync_pct; int vsync_rqd; int min_porch; int margin_ppt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,struct vesagtf_params*,int ,struct videomode*) ;

void
FUNC_1(unsigned VAR_9, unsigned VAR_10, unsigned VAR_11, struct videomode *VAR_12)
{
 struct vesagtf_params VAR_13;

 VAR_13.margin_ppt = VAR_5;
 VAR_13.min_porch = VAR_6;
 VAR_13.vsync_rqd = VAR_8;
 VAR_13.hsync_pct = VAR_1;
 VAR_13.min_vsbp = VAR_7;
 VAR_13.M = VAR_4;
 VAR_13.C = VAR_0;
 VAR_13.K = VAR_3;
 VAR_13.J = VAR_2;

 FUNC_0(VAR_9, VAR_10, VAR_11, &VAR_13, 0, VAR_12);
}
