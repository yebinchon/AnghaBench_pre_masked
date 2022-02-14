
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ svn_checksum_kind_t ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_checksum_kind_t VAR_4)
{
  if (VAR_4 >= VAR_3 && VAR_4 <= VAR_2)
    return VAR_1;
  else
    return FUNC_0(VAR_0, ((void*)0), ((void*)0));
}
