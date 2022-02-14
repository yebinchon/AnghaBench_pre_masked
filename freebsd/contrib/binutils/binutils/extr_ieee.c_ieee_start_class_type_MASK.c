
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_buflist {int dummy; } ;
struct ieee_type_class {unsigned int indx; int pmisccount; char const* vclass; scalar_t__ ownvptr; struct ieee_buflist pmiscbuf; } ;
struct ieee_handle {unsigned int name_indx; TYPE_2__* type_stack; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_3__ {char* name; struct ieee_type_class* classdef; } ;
struct TYPE_4__ {TYPE_1__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee_handle*,struct ieee_buflist*) ;
 int FUNC_2 (struct ieee_handle*,struct ieee_buflist*) ;
 int FUNC_3 (struct ieee_handle*) ;
 int FUNC_4 (void*,char const*,unsigned int,scalar_t__,unsigned int) ;
 int FUNC_5 (struct ieee_handle*,unsigned int,char) ;
 int FUNC_6 (struct ieee_handle*,unsigned int,char const*) ;
 int FUNC_7 (struct ieee_type_class*,int ,int) ;
 int FUNC_8 (char*,char*,unsigned int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (void *VAR_2, const char *VAR_3, unsigned int VAR_4,
         bfd_boolean VAR_5, unsigned int VAR_6,
         bfd_boolean VAR_7, bfd_boolean VAR_8)
{
  struct ieee_handle *VAR_9 = (struct ieee_handle *) VAR_2;
  const char *VAR_10;
  struct ieee_buflist VAR_11;
  unsigned int VAR_12;
  struct ieee_type_class *VAR_13;






  if (VAR_3 == ((void*)0))
    {
      char *VAR_14;

      VAR_14 = (char *) FUNC_9 (20);
      FUNC_8 (VAR_14, "__anon%u", VAR_4);
      VAR_3 = VAR_14;
    }




  VAR_10 = ((void*)0);
  if (VAR_7 && ! VAR_8)
    {
      VAR_10 = VAR_9->type_stack->type.name;
      FUNC_0 (VAR_10 != ((void*)0));


      (void) FUNC_3 (VAR_9);
    }

  if (! FUNC_4 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))
    return VAR_0;

  VAR_12 = VAR_9->name_indx;
  ++VAR_9->name_indx;




  if (! FUNC_2 (VAR_9, &VAR_11)
      || ! FUNC_1 (VAR_9, &VAR_11)
      || ! FUNC_5 (VAR_9, VAR_12, 'T')
      || ! FUNC_5 (VAR_9, VAR_12, VAR_5 ? 'o' : 'u')
      || ! FUNC_6 (VAR_9, VAR_12, VAR_3))
    return VAR_0;

  VAR_13 = (struct ieee_type_class *) FUNC_9 (sizeof *VAR_13);
  FUNC_7 (VAR_13, 0, sizeof *VAR_13);

  VAR_13->indx = VAR_12;
  VAR_13->pmiscbuf = VAR_11;
  VAR_13->pmisccount = 3;
  VAR_13->vclass = VAR_10;
  VAR_13->ownvptr = VAR_8;

  VAR_9->type_stack->type.classdef = VAR_13;

  return VAR_1;
}
