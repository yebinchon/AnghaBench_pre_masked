
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** str_bufs; int str_nbufs; char* str_ptr; int str_bufsz; } ;
typedef TYPE_1__ dt_strtab_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 char** FUNC_2 (char**,int) ;

__attribute__((used)) static int
FUNC_3(dt_strtab_t *VAR_0)
{
 char *VAR_1, **VAR_2;

 if ((VAR_1 = FUNC_1(VAR_0->str_bufsz)) == ((void*)0))
  return (-1);

 VAR_2 = FUNC_2(VAR_0->str_bufs, (VAR_0->str_nbufs + 1) * sizeof (char *));

 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_1);
  return (-1);
 }

 VAR_0->str_nbufs++;
 VAR_0->str_bufs = VAR_2;
 VAR_0->str_ptr = VAR_1;
 VAR_0->str_bufs[VAR_0->str_nbufs - 1] = VAR_0->str_ptr;

 return (0);
}
