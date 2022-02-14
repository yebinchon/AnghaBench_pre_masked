
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asection ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int *,char const*) ;
 int * FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static asection *
FUNC_4 (bfd *VAR_6, bfd_boolean VAR_7)
{
  static const char VAR_8[] = ".rel.dyn";
  asection *VAR_9;

  VAR_9 = FUNC_1 (VAR_6, VAR_8);
  if (VAR_9 == ((void*)0) && VAR_7)
    {
      VAR_9 = FUNC_2 (VAR_6, VAR_8,
                                            (VAR_0
                                             | VAR_4
                                             | VAR_1
                                             | VAR_2
                                             | VAR_3
                                             | VAR_5));
      if (VAR_9 == ((void*)0)
   || ! FUNC_3 (VAR_6, VAR_9,
       FUNC_0 (VAR_6)))
 return ((void*)0);
    }
  return VAR_9;
}
