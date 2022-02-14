
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct internal_exec {int dummy; } ;
typedef int bfd_boolean ;
struct TYPE_9__ {scalar_t__ xvec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_10__ {TYPE_1__* hdr; } ;
struct TYPE_8__ {scalar_t__ c_len; int c_aouthdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_6__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_4, bfd *VAR_5)
{
  if (VAR_4->xvec != VAR_5->xvec)
    {
      FUNC_0 (VAR_3);
      return VAR_0;
    }


  if ((FUNC_1 (VAR_4)->hdr)->c_len == VAR_1)
    return VAR_2;

  return FUNC_3 ((char *) &((FUNC_1 (VAR_4)->hdr)->c_aouthdr),
   (char *) FUNC_2 (VAR_5),
   sizeof (struct internal_exec)) == 0;
}
