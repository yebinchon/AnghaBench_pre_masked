
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bfd_link_info {int dummy; } ;
typedef int file_ptr ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_7__ {int external_ext_size; } ;
struct TYPE_10__ {TYPE_2__ debug_swap; } ;
struct TYPE_8__ {int iextMax; scalar_t__ issExtMax; scalar_t__ cbSsExtOffset; scalar_t__ cbExtOffset; } ;
struct TYPE_6__ {TYPE_3__ symbolic_header; } ;
struct TYPE_9__ {TYPE_1__ debug_info; } ;
typedef TYPE_3__ HDRR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 TYPE_5__* FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct bfd_link_info*,void*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd *VAR_3, struct bfd_link_info *VAR_4)
{
  HDRR *VAR_5;
  bfd_size_type VAR_6;
  void * VAR_7 = ((void*)0);
  bfd_size_type VAR_8;
  char *VAR_9 = ((void*)0);
  bfd_boolean VAR_10;

  if (! FUNC_7 (VAR_3))
    return VAR_0;


  if (FUNC_1 (VAR_3) == 0)
    return VAR_2;

  VAR_5 = &FUNC_5 (VAR_3)->debug_info.symbolic_header;


  VAR_6 = FUNC_4 (VAR_3)->debug_swap.external_ext_size;
  VAR_8 = VAR_5->iextMax * VAR_6;
  VAR_7 = FUNC_2 (VAR_8);
  if (VAR_7 == ((void*)0) && VAR_8 != 0)
    goto error_return;

  if (FUNC_3 (VAR_3, (file_ptr) VAR_5->cbExtOffset, VAR_1) != 0
      || FUNC_0 (VAR_7, VAR_8, VAR_3) != VAR_8)
    goto error_return;

  VAR_9 = FUNC_2 ((bfd_size_type) VAR_5->issExtMax);
  if (VAR_9 == ((void*)0) && VAR_5->issExtMax != 0)
    goto error_return;

  if (FUNC_3 (VAR_3, (file_ptr) VAR_5->cbSsExtOffset, VAR_1) != 0
      || (FUNC_0 (VAR_9, (bfd_size_type) VAR_5->issExtMax, VAR_3)
   != (bfd_size_type) VAR_5->issExtMax))
    goto error_return;

  VAR_10 = FUNC_6 (VAR_3, VAR_4, VAR_7, VAR_9);

  if (VAR_9 != ((void*)0))
    FUNC_8 (VAR_9);
  if (VAR_7 != ((void*)0))
    FUNC_8 (VAR_7);
  return VAR_10;

 error_return:
  if (VAR_9 != ((void*)0))
    FUNC_8 (VAR_9);
  if (VAR_7 != ((void*)0))
    FUNC_8 (VAR_7);
  return VAR_0;
}
