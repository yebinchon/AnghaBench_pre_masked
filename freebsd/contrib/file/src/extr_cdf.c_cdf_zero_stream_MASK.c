
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sst_tab; scalar_t__ sst_ss; scalar_t__ sst_dirlen; scalar_t__ sst_len; } ;
typedef TYPE_1__ cdf_stream_t ;


 int FUNC_0 (int *) ;

int
FUNC_1(cdf_stream_t *VAR_0)
{
 VAR_0->sst_len = 0;
 VAR_0->sst_dirlen = 0;
 VAR_0->sst_ss = 0;
 FUNC_0(VAR_0->sst_tab);
 VAR_0->sst_tab = ((void*)0);
 return -1;
}
