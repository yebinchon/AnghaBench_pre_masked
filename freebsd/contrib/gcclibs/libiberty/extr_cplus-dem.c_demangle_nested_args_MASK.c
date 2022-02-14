
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int nrepeats; int forgetting_types; int * previous_argument; } ;
typedef int string ;


 int FUNC_0 (struct work_stuff*,char const**,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3 (struct work_stuff *VAR_0, const char **VAR_1,
                      string *VAR_2)
{
  string* VAR_3;
  int VAR_4;
  int VAR_5;





  ++VAR_0->forgetting_types;



  VAR_3 = VAR_0->previous_argument;
  VAR_5 = VAR_0->nrepeats;
  VAR_0->previous_argument = 0;
  VAR_0->nrepeats = 0;


  VAR_4 = FUNC_0 (VAR_0, VAR_1, VAR_2);


  if (VAR_0->previous_argument)
    {
      FUNC_2 (VAR_0->previous_argument);
      FUNC_1 ((char *) VAR_0->previous_argument);
    }
  VAR_0->previous_argument = VAR_3;
  --VAR_0->forgetting_types;
  VAR_0->nrepeats = VAR_5;

  return VAR_4;
}
