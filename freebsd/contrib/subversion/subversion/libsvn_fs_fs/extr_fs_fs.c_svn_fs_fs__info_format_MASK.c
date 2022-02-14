
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int minor; char* tag; scalar_t__ patch; int major; } ;
typedef TYPE_1__ svn_version_t ;
struct TYPE_8__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int format; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int) ;

svn_error_t *
FUNC_1(int *VAR_2,
                       svn_version_t **VAR_3,
                       svn_fs_t *VAR_4,
                       apr_pool_t *VAR_5,
                       apr_pool_t *VAR_6)
{
  fs_fs_data_t *VAR_7 = VAR_4->fsap_data;
  *VAR_2 = VAR_7->format;
  *VAR_3 = FUNC_0(VAR_5, sizeof(svn_version_t));

  (*VAR_3)->major = VAR_1;
  (*VAR_3)->minor = 1;
  (*VAR_3)->patch = 0;
  (*VAR_3)->tag = "";

  switch (VAR_7->format)
    {
    case 1:
      break;
    case 2:
      (*VAR_3)->minor = 4;
      break;
    case 3:
      (*VAR_3)->minor = 5;
      break;
    case 4:
      (*VAR_3)->minor = 6;
      break;
    case 6:
      (*VAR_3)->minor = 8;
      break;
    case 7:
      (*VAR_3)->minor = 9;
      break;
    case 8:
      (*VAR_3)->minor = 10;
      break;





    }

  return VAR_0;
}
