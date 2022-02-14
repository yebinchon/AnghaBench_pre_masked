
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * sst_tab; } ;
typedef TYPE_1__ cdf_stream_t ;
typedef int cdf_secid_t ;
typedef int cdf_sat_t ;
typedef int cdf_info_t ;
struct TYPE_12__ {size_t h_min_size_standard_stream; } ;
typedef TYPE_2__ cdf_header_t ;


 int FUNC_0 (int const*,TYPE_2__ const*,int const*,int ,size_t,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__ const*,int const*,TYPE_1__ const*,int ,size_t,TYPE_1__*) ;

int
FUNC_2(const cdf_info_t *VAR_0, const cdf_header_t *VAR_1,
    const cdf_sat_t *VAR_2, const cdf_sat_t *VAR_3, const cdf_stream_t *VAR_4,
    cdf_secid_t VAR_5, size_t VAR_6, cdf_stream_t *VAR_7)
{

 if (VAR_6 < VAR_1->h_min_size_standard_stream && VAR_4->sst_tab != ((void*)0))
  return FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_6, VAR_7);
}
