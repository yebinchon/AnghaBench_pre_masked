
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * sst_tab; } ;
typedef TYPE_1__ cdf_stream_t ;
typedef int cdf_sat_t ;
typedef int cdf_info_t ;
typedef int cdf_header_t ;
struct TYPE_10__ {scalar_t__ d_type; scalar_t__ d_stream_first_sector; int d_size; } ;
typedef TYPE_2__ cdf_directory_t ;
struct TYPE_11__ {size_t dir_len; TYPE_2__* dir_tab; } ;
typedef TYPE_3__ cdf_dir_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int const*,int const*,int const*,scalar_t__,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(const cdf_info_t *VAR_1, const cdf_header_t *VAR_2,
    const cdf_sat_t *VAR_3, const cdf_dir_t *VAR_4, cdf_stream_t *VAR_5,
    const cdf_directory_t **VAR_6)
{
 size_t VAR_7;
 const cdf_directory_t *VAR_8;

 *VAR_6 = ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_4->dir_len; VAR_7++)
  if (VAR_4->dir_tab[VAR_7].d_type == VAR_0)
   break;


 if (VAR_7 == VAR_4->dir_len) {
  FUNC_0(("Cannot find root storage dir\n"));
  goto out;
 }
 VAR_8 = &VAR_4->dir_tab[VAR_7];
 *VAR_6 = VAR_8;


 if (VAR_8->d_stream_first_sector < 0) {
  FUNC_0(("No first secror in dir\n"));
  goto out;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3,
     VAR_8->d_stream_first_sector, VAR_8->d_size, VAR_5);
out:
 VAR_5->sst_tab = ((void*)0);
 (void)FUNC_2(VAR_5);
 return 0;
}
