
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int kind; scalar_t__ digest; } ;
typedef TYPE_1__ svn_checksum_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (unsigned char*,int ,int ) ;
 int FUNC_3 (int ) ;

svn_error_t *
FUNC_4(svn_checksum_t *VAR_1)
{
  FUNC_1(FUNC_3(VAR_1->kind));

  FUNC_2((unsigned char *) VAR_1->digest, 0, FUNC_0(VAR_1->kind));
  return VAR_0;
}
