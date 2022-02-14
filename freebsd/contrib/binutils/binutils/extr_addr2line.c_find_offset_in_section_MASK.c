
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_size_type ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int ,scalar_t__,int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_7, asection *VAR_8)
{
  bfd_size_type VAR_9;

  if (VAR_2)
    return;

  if ((FUNC_1 (VAR_7, VAR_8) & VAR_0) == 0)
    return;

  VAR_9 = FUNC_2 (VAR_8);
  if (VAR_5 >= VAR_9)
    return;

  VAR_2 = FUNC_0 (VAR_7, VAR_8, VAR_6, VAR_5,
     &VAR_1, &VAR_3, &VAR_4);
}
