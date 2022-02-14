
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct coff_symbol {int dummy; } ;
struct coff_ofile {int dummy; } ;
struct TYPE_8__ {int filename; } ;
typedef TYPE_1__ bfd ;
typedef int asymbol ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int **) ;
 int FUNC_1 (int ) ;
 long FUNC_2 (TYPE_1__*) ;
 struct coff_ofile* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int ** VAR_4 ;
 struct coff_symbol** VAR_5 ;
 scalar_t__ FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (long) ;

struct coff_ofile *
FUNC_8 (bfd *VAR_6)
{
  long VAR_7;
  struct coff_ofile *VAR_8;
  VAR_0 = VAR_6;
  VAR_7 = FUNC_2 (VAR_0);

  if (VAR_7 < 0)
    FUNC_1 (VAR_0->filename);

  VAR_4 = (asymbol **) FUNC_7 (VAR_7);
  VAR_3 = FUNC_0 (VAR_0, VAR_4);
  if (VAR_3 < 0)
    FUNC_1 (VAR_0->filename);
  VAR_2 = FUNC_5 (VAR_0);
  VAR_1 = FUNC_4 (VAR_0);;
  VAR_5 = (struct coff_symbol **) (FUNC_6 (sizeof (struct coff_symbol *), VAR_1));

  VAR_8 = FUNC_3 ();
  return VAR_8;
}
