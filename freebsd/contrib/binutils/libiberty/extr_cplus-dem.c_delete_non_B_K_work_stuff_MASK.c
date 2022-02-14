
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int ntmpl_args; int * previous_argument; scalar_t__* tmpl_argvec; scalar_t__ typevec_size; int * typevec; } ;


 int FUNC_0 (struct work_stuff*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (struct work_stuff *VAR_0)
{


  FUNC_0 (VAR_0);
  if (VAR_0 -> typevec != ((void*)0))
    {
      FUNC_1 ((char *) VAR_0 -> typevec);
      VAR_0 -> typevec = ((void*)0);
      VAR_0 -> typevec_size = 0;
    }
  if (VAR_0->tmpl_argvec)
    {
      int VAR_1;

      for (VAR_1 = 0; VAR_1 < VAR_0->ntmpl_args; VAR_1++)
 if (VAR_0->tmpl_argvec[VAR_1])
   FUNC_1 ((char*) VAR_0->tmpl_argvec[VAR_1]);

      FUNC_1 ((char*) VAR_0->tmpl_argvec);
      VAR_0->tmpl_argvec = ((void*)0);
    }
  if (VAR_0->previous_argument)
    {
      FUNC_2 (VAR_0->previous_argument);
      FUNC_1 ((char*) VAR_0->previous_argument);
      VAR_0->previous_argument = ((void*)0);
    }
}
