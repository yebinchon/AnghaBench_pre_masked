
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_14__ {char* filename; } ;
typedef TYPE_3__ bfd ;
struct TYPE_15__ {int flags; char* name; TYPE_2__* section; scalar_t__ value; } ;
typedef TYPE_4__ asymbol ;
struct TYPE_13__ {scalar_t__ output_offset; TYPE_1__* output_section; } ;
struct TYPE_12__ {scalar_t__ lma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,TYPE_3__*) ;
 TYPE_4__** FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (bfd *VAR_3)
{

  int VAR_4;
  int VAR_5 = FUNC_2 (VAR_3);

  if (VAR_5)
    {
      bfd_size_type VAR_6;
      asymbol **VAR_7 = FUNC_1 (VAR_3);

      VAR_6 = FUNC_5 (VAR_3->filename);
      if (FUNC_0 ("$$ ", (bfd_size_type) 3, VAR_3) != 3
   || FUNC_0 (VAR_3->filename, VAR_6, VAR_3) != VAR_6
   || FUNC_0 ("\r\n", (bfd_size_type) 2, VAR_3) != 2)
 return VAR_1;

      for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
 {
   asymbol *VAR_8 = VAR_7[VAR_4];
   if (! FUNC_3 (VAR_3, VAR_8)
       && (VAR_8->flags & VAR_0) == 0)
     {

       char VAR_9[43], *VAR_10;

       VAR_6 = FUNC_5 (VAR_8->name);
       if (FUNC_0 ("  ", (bfd_size_type) 2, VAR_3) != 2
    || FUNC_0 (VAR_8->name, VAR_6, VAR_3) != VAR_6)
  return VAR_1;

       FUNC_4 (VAR_9 + 2, (VAR_8->value
         + VAR_8->section->output_section->lma
         + VAR_8->section->output_offset));
       VAR_10 = VAR_9 + 2;
       while (VAR_10[0] == '0' && VAR_10[1] != 0)
  VAR_10++;
       VAR_6 = FUNC_5 (VAR_10);
       VAR_10[VAR_6] = '\r';
       VAR_10[VAR_6 + 1] = '\n';
       *--VAR_10 = '$';
       *--VAR_10 = ' ';
       VAR_6 += 4;
       if (FUNC_0 (VAR_10, VAR_6, VAR_3) != VAR_6)
  return VAR_1;
     }
 }
      if (FUNC_0 ("$$ \r\n", (bfd_size_type) 5, VAR_3) != 5)
 return VAR_1;
    }

  return VAR_2;
}
