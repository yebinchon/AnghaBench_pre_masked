
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_filehdr {scalar_t__ f_opthdr; unsigned int f_nscns; } ;
struct internal_aouthdr {int dummy; } ;
typedef int bfd_target ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd ;


 void* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (void*,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct internal_filehdr*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,void*,void*) ;
 int FUNC_6 (int *,void*,struct internal_filehdr*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *,void*) ;
 int FUNC_9 (int ) ;
 int const* FUNC_10 (int *,unsigned int,struct internal_filehdr*,struct internal_aouthdr*) ;

const bfd_target *
FUNC_11 (bfd *VAR_2)
{
  bfd_size_type VAR_3;
  bfd_size_type VAR_4;
  unsigned int VAR_5;
  void * VAR_6;
  struct internal_filehdr VAR_7;
  struct internal_aouthdr VAR_8;


  VAR_3 = FUNC_4 (VAR_2);
  VAR_4 = FUNC_2 (VAR_2);

  VAR_6 = FUNC_0 (VAR_2, VAR_3);
  if (VAR_6 == ((void*)0))
    return ((void*)0);
  if (FUNC_1 (VAR_6, VAR_3, VAR_2) != VAR_3)
    {
      if (FUNC_7 () != VAR_0)
 FUNC_9 (VAR_1);
      FUNC_8 (VAR_2, VAR_6);
      return ((void*)0);
    }
  FUNC_6 (VAR_2, VAR_6, &VAR_7);
  FUNC_8 (VAR_2, VAR_6);
  if (! FUNC_3 (VAR_2, &VAR_7)
      || VAR_7.f_opthdr > VAR_4)
    {
      FUNC_9 (VAR_1);
      return ((void*)0);
    }
  VAR_5 = VAR_7.f_nscns;

  if (VAR_7.f_opthdr)
    {
      void * VAR_9;

      VAR_9 = FUNC_0 (VAR_2, VAR_4);
      if (VAR_9 == ((void*)0))
 return ((void*)0);
      if (FUNC_1 (VAR_9, (bfd_size_type) VAR_7.f_opthdr, VAR_2)
   != VAR_7.f_opthdr)
 {
   FUNC_8 (VAR_2, VAR_9);
   return ((void*)0);
 }
      FUNC_5 (VAR_2, VAR_9, (void *) &VAR_8);
      FUNC_8 (VAR_2, VAR_9);
    }

  return FUNC_10 (VAR_2, VAR_5, &VAR_7,
        (VAR_7.f_opthdr != 0
         ? &VAR_8
         : (struct internal_aouthdr *) ((void*)0)));
}
