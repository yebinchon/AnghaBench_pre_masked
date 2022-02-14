
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* sec_ptr ;
typedef scalar_t__ file_ptr ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_11__ {int output_has_begun; } ;
typedef TYPE_2__ bfd ;
struct TYPE_10__ {scalar_t__ size; void const* contents; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (void const*,void const*,size_t) ;

bfd_boolean
FUNC_5 (bfd *VAR_7,
     sec_ptr VAR_8,
     const void *VAR_9,
     file_ptr VAR_10,
     bfd_size_type VAR_11)
{
  bfd_size_type VAR_12;

  if (!(FUNC_1 (VAR_7, VAR_8) & VAR_1))
    {
      FUNC_2 (VAR_6);
      return VAR_0;
    }

  VAR_12 = VAR_8->size;
  if ((bfd_size_type) VAR_10 > VAR_12
      || VAR_11 > VAR_12
      || VAR_10 + VAR_11 > VAR_12
      || VAR_11 != (size_t) VAR_11)
    {
      FUNC_2 (VAR_4);
      return VAR_0;
    }

  if (!FUNC_3 (VAR_7))
    {
      FUNC_2 (VAR_5);
      return VAR_0;
    }


  if (VAR_8->contents
      && VAR_9 != VAR_8->contents + VAR_10)
    FUNC_4 (VAR_8->contents + VAR_10, VAR_9, (size_t) VAR_11);

  if (FUNC_0 (VAR_7, VAR_3,
  (VAR_7, VAR_8, VAR_9, VAR_10, VAR_11)))
    {
      VAR_7->output_has_begun = VAR_2;
      return VAR_2;
    }

  return VAR_0;
}
