
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,int *,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,int *,int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (bfd *VAR_2, void *VAR_3, bfd_boolean *VAR_4)
{
  asection *VAR_5;
  bfd_size_type VAR_6;
  bfd_byte *VAR_7;




  VAR_5 = FUNC_0 (VAR_2, ".debug");
  if (VAR_5 == ((void*)0))
    return VAR_1;

  VAR_6 = FUNC_2 (VAR_2, VAR_5);
  VAR_7 = (bfd_byte *) FUNC_5 (VAR_6);
  if (! FUNC_1 (VAR_2, VAR_5, VAR_7, 0, VAR_6))
    return VAR_0;

  if (! FUNC_4 (VAR_3, VAR_2, VAR_7, VAR_6))
    return VAR_0;

  FUNC_3 (VAR_7);

  *VAR_4 = VAR_1;

  return VAR_1;
}
