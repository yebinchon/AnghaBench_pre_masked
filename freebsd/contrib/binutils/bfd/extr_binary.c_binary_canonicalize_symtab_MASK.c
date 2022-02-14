
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int bfd_size_type ;
struct TYPE_12__ {scalar_t__ any; } ;
struct TYPE_14__ {TYPE_1__ tdata; } ;
typedef TYPE_3__ bfd ;
struct TYPE_13__ {int * p; } ;
struct TYPE_15__ {TYPE_2__ udata; TYPE_5__* section; void* flags; scalar_t__ value; void* name; TYPE_3__* the_bfd; } ;
typedef TYPE_4__ asymbol ;
struct TYPE_16__ {scalar_t__ size; } ;
typedef TYPE_5__ asection ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_5__* VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int) ;
 void* FUNC_1 (TYPE_3__*,char*) ;

__attribute__((used)) static long
FUNC_2 (bfd *VAR_3, asymbol **VAR_4)
{
  asection *VAR_5 = (asection *) VAR_3->tdata.any;
  asymbol *VAR_6;
  unsigned int VAR_7;
  bfd_size_type VAR_8 = VAR_0 * sizeof (asymbol);

  VAR_6 = FUNC_0 (VAR_3, VAR_8);
  if (VAR_6 == ((void*)0))
    return 0;


  VAR_6[0].the_bfd = VAR_3;
  VAR_6[0].name = FUNC_1 (VAR_3, "start");
  VAR_6[0].value = 0;
  VAR_6[0].flags = VAR_1;
  VAR_6[0].section = VAR_5;
  VAR_6[0].udata.p = ((void*)0);


  VAR_6[1].the_bfd = VAR_3;
  VAR_6[1].name = FUNC_1 (VAR_3, "end");
  VAR_6[1].value = VAR_5->size;
  VAR_6[1].flags = VAR_1;
  VAR_6[1].section = VAR_5;
  VAR_6[1].udata.p = ((void*)0);


  VAR_6[2].the_bfd = VAR_3;
  VAR_6[2].name = FUNC_1 (VAR_3, "size");
  VAR_6[2].value = VAR_5->size;
  VAR_6[2].flags = VAR_1;
  VAR_6[2].section = VAR_2;
  VAR_6[2].udata.p = ((void*)0);

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
    *VAR_4++ = VAR_6++;
  *VAR_4 = ((void*)0);

  return VAR_0;
}
