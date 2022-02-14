
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bfd_in_memory {scalar_t__ buffer; scalar_t__ size; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_4__ {scalar_t__ where; int direction; int format; int flags; void* iostream; scalar_t__ link_next; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfd_in_memory* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,char const*,char const*,int ) ;
 int VAR_5 ;
 int VAR_6 ;

bfd_boolean
FUNC_2 (bfd *VAR_7,
    const char *VAR_8,
    const char *VAR_9,
    bfd_boolean VAR_10)
{
  struct bfd_in_memory *VAR_11;

  VAR_11 = FUNC_0 ((bfd_size_type) sizeof (* VAR_11));
  if (VAR_11 == ((void*)0))
    return VAR_1;

  VAR_11->size = 0;
  VAR_11->buffer = 0;

  VAR_7->link_next = 0;
  VAR_7->format = VAR_3;
  VAR_7->iostream = (void *) VAR_11;
  VAR_7->flags = VAR_0;
  VAR_7->direction = VAR_6;
  VAR_7->where = 0;

  if (! FUNC_1 (VAR_7, VAR_8, VAR_9, VAR_10))
    return VAR_1;


  VAR_7->format = VAR_4;
  VAR_7->direction = VAR_5;
  VAR_7->where = 0;

  return VAR_2;
}
