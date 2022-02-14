
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct work_stuff {int constructor; int destructor; int numk; char** ktypevec; } ;
struct TYPE_17__ {int b; } ;
typedef TYPE_1__ string ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (struct work_stuff*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const**) ;
 int FUNC_5 (char const**) ;
 int FUNC_6 (struct work_stuff*,char const**,TYPE_1__*,TYPE_1__*,int,int ) ;
 int FUNC_7 (struct work_stuff*,char const**,TYPE_1__*) ;
 int FUNC_8 (struct work_stuff*,char const**,TYPE_1__*,int) ;
 int FUNC_9 (struct work_stuff*) ;
 int FUNC_10 (struct work_stuff*,int ,int ,int) ;
 int FUNC_11 (struct work_stuff*,int ,int ) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 int FUNC_13 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_18 (struct work_stuff *VAR_1, const char **VAR_2,
                    string *VAR_3, int VAR_4, int VAR_5)
{
  int VAR_6 = 0;
  int VAR_7 = 1;
  char VAR_8[2];
  string VAR_9;
  string VAR_10;
  int VAR_11 = FUNC_9 (VAR_1);



  VAR_4 = (VAR_4
  && ((VAR_1->constructor & 1) || (VAR_1->destructor & 1)));

  FUNC_16 (&VAR_9);
  FUNC_16 (&VAR_10);

  if ((*VAR_2)[0] == 'K')
    {

      int VAR_12;
      (*VAR_2)++;
      VAR_12 = FUNC_5 (VAR_2);
      if (VAR_12 == -1 || VAR_12 >= VAR_1 -> numk)
        VAR_7 = 0;
      else
        FUNC_12 (&VAR_9, VAR_1 -> ktypevec[VAR_12]);
    }
  else
    switch ((*VAR_2)[1])
    {
    case '_':



      (*VAR_2)++;
      VAR_6 = FUNC_5 (VAR_2);
      if (VAR_6 == -1)
 VAR_7 = 0;
      break;

    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':

      VAR_8[0] = (*VAR_2)[1];
      VAR_8[1] = '\0';
      VAR_6 = FUNC_3 (VAR_8);




      if ((*VAR_2)[2] == '_')
 {
   (*VAR_2)++;
 }
      (*VAR_2) += 2;
      break;

    case '0':
    default:
      VAR_7 = 0;
    }

  if (!VAR_7)
    return VAR_7;




  while (VAR_6-- > 0)
    {
      int VAR_13 = 1;
      FUNC_14 (&VAR_10);

      if (*VAR_2[0] == '_')
 (*VAR_2)++;

      if (*VAR_2[0] == 't')
 {






   VAR_7 = FUNC_6(VAR_1, VAR_2, &VAR_9,
          &VAR_10, 1, 0);
   if (!VAR_7)
     break;
 }
      else if (*VAR_2[0] == 'K')
 {
          int VAR_14;
          (*VAR_2)++;
          VAR_14 = FUNC_5 (VAR_2);
          if (VAR_14 == -1 || VAR_14 >= VAR_1->numk)
            VAR_7 = 0;
          else
            FUNC_12 (&VAR_9, VAR_1->ktypevec[VAR_14]);
          VAR_13 = 0;

   if (!VAR_7) break;
 }
      else
 {
   if (VAR_0)
            {
       int VAR_15;



       VAR_15 = FUNC_4 (VAR_2);
       if (VAR_15 == -1)
  {
    VAR_7 = 0;
    break;
  }
        FUNC_8(VAR_1, VAR_2, &VAR_9, VAR_15);
            }
          else
            {
              FUNC_15 (&VAR_10);
              VAR_7 = FUNC_7 (VAR_1, VAR_2, &VAR_10);
              if (!VAR_7)
                break;
              FUNC_13 (&VAR_9, &VAR_10);
            }
 }

      if (VAR_13)
 FUNC_11 (VAR_1, VAR_9.b, FUNC_0 (&VAR_9));

      if (VAR_6 > 0)
 FUNC_12 (&VAR_9, FUNC_1 (VAR_1));
    }

  FUNC_10 (VAR_1, VAR_9.b, FUNC_0 (&VAR_9), VAR_11);






  if (VAR_4)
    {
      FUNC_12 (&VAR_9, FUNC_1 (VAR_1));
      if (VAR_1 -> destructor & 1)
 FUNC_12 (&VAR_9, "~");
      FUNC_13 (&VAR_9, &VAR_10);
    }




  if (VAR_5)
    FUNC_13 (VAR_3, &VAR_9);
  else
    {
      if (!FUNC_2 (VAR_3))
 FUNC_12 (&VAR_9, FUNC_1 (VAR_1));
      FUNC_17 (VAR_3, &VAR_9);
    }

  FUNC_15 (&VAR_10);
  FUNC_15 (&VAR_9);
  return (VAR_7);
}
