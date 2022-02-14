
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {scalar_t__ nesting; int fun_offset; int symbols_size; } ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char const*,float,char*) ;
 char* FUNC_3 (struct stab_write_handle*) ;
 int FUNC_4 (struct stab_write_handle*,int ,int ,int ,char*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (void *VAR_3, const char *VAR_4, bfd_boolean VAR_5)
{
  struct stab_write_handle *VAR_6 = (struct stab_write_handle *) VAR_3;
  char *VAR_7, *VAR_8;

  FUNC_0 (VAR_6->nesting == 0 && VAR_6->fun_offset == -1);

  VAR_7 = FUNC_3 (VAR_6);

  VAR_8 = (char *) FUNC_6 (FUNC_5 (VAR_4) + FUNC_5 (VAR_7) + 3);
  FUNC_2 (VAR_8, "%s:%c%s", VAR_4,
    VAR_5 ? 'F' : 'f',
    VAR_7);


  VAR_6->fun_offset = VAR_6->symbols_size;

  if (! FUNC_4 (VAR_6, VAR_1, 0, 0, VAR_8))
    return VAR_0;

  FUNC_1 (VAR_8);

  return VAR_2;
}
