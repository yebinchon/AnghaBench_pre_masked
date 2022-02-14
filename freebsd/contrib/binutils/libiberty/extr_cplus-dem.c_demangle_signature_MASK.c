
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int static_type; scalar_t__ type_quals; int temp_start; int destructor; int constructor; } ;
typedef int string ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned char) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_2 (struct work_stuff*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (struct work_stuff*,char const**,int *) ;
 int FUNC_5 (struct work_stuff*,char const**,int *) ;
 int FUNC_6 (struct work_stuff*,char const**,int *,int,int ) ;
 int FUNC_7 (struct work_stuff*,char const**,int *,int *,int,int) ;
 int FUNC_8 (struct work_stuff*,char const**,int *) ;
 int FUNC_9 (struct work_stuff*) ;
 char* FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct work_stuff*,char const*,int) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *,int *) ;

__attribute__((used)) static int
FUNC_18 (struct work_stuff *VAR_8,
                    const char **VAR_9, string *VAR_10)
{
  int VAR_11 = 1;
  int VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14 = 0;
  const char *VAR_15 = ((void*)0);
  string VAR_16;
  string VAR_17;

  while (VAR_11 && (**VAR_9 != '\0'))
    {
      switch (**VAR_9)
 {
 case 'Q':
   VAR_15 = *VAR_9;
   VAR_11 = FUNC_6 (VAR_8, VAR_9, VAR_10, 1, 0);
   if (VAR_11)
     FUNC_11 (VAR_8, VAR_15, *VAR_9 - VAR_15);
   if (VAR_1 || VAR_3)
     VAR_13 = 1;
   VAR_15 = ((void*)0);
   break;

        case 'K':
   VAR_15 = *VAR_9;
   VAR_11 = FUNC_6 (VAR_8, VAR_9, VAR_10, 1, 0);
   if (VAR_1 || VAR_3)
     {
       VAR_13 = 1;
     }
   VAR_15 = ((void*)0);
   break;

 case 'S':

   if (VAR_15 == ((void*)0))
     {
       VAR_15 = *VAR_9;
     }
   (*VAR_9)++;
   VAR_8 -> static_type = 1;
   break;

 case 'C':
 case 'V':
 case 'u':
   VAR_8->type_quals |= FUNC_3 (**VAR_9);


   if (VAR_15 == ((void*)0))
     VAR_15 = *VAR_9;
   (*VAR_9)++;
   break;

 case 'L':

   if (VAR_4)
     {
       while (**VAR_9 && (**VAR_9 != '_'))
  (*VAR_9)++;
       if (!**VAR_9)
  VAR_11 = 0;
       else
  (*VAR_9)++;
     }
   else
     VAR_11 = 0;
   break;

 case '0': case '1': case '2': case '3': case '4':
 case '5': case '6': case '7': case '8': case '9':
   if (VAR_15 == ((void*)0))
     {
       VAR_15 = *VAR_9;
     }
          VAR_8->temp_start = -1;
   VAR_11 = FUNC_5 (VAR_8, VAR_9, VAR_10);
   if (VAR_11)
     {
       FUNC_11 (VAR_8, VAR_15, *VAR_9 - VAR_15);
     }
   if (VAR_1 || VAR_3 || VAR_2)
     {


              if (**VAR_9 != 'F')
                 VAR_13 = 1;
     }
   VAR_15 = ((void*)0);
   break;

 case 'B':
   {
     string VAR_18;
     VAR_11 = FUNC_8 (VAR_8, VAR_9, &VAR_18);
     if (VAR_11)
       {
  FUNC_12 (&VAR_18, FUNC_2 (VAR_8));
  FUNC_17 (VAR_10, &VAR_18);
  FUNC_14 (&VAR_18);
       }
     VAR_15 = ((void*)0);
     VAR_13 = 1;
   }
   break;

 case 'F':






   VAR_15 = ((void*)0);
   VAR_12 = 1;
   (*VAR_9)++;






   if (VAR_5 || VAR_0 || VAR_4 || VAR_2)
     {
       FUNC_9 (VAR_8);
     }
   VAR_11 = FUNC_4 (VAR_8, VAR_9, VAR_10);



   if (VAR_11 && (VAR_1 || VAR_2) && **VAR_9 == '_')
     {
       ++(*VAR_9);

              VAR_11 = FUNC_8 (VAR_8, VAR_9, &VAR_17);
              FUNC_14 (&VAR_17);
            }

   break;

 case 't':

   FUNC_15(&VAR_16);
   FUNC_15(&VAR_17);
   if (VAR_15 == ((void*)0))
     {
       VAR_15 = *VAR_9;
     }
   VAR_11 = FUNC_7 (VAR_8, VAR_9, &VAR_17,
           &VAR_16, 1, 1);
   if (VAR_11)
     {
       FUNC_11 (VAR_8, VAR_15, *VAR_9 - VAR_15);
     }
   FUNC_12 (&VAR_17, FUNC_2 (VAR_8));

   FUNC_17(VAR_10, &VAR_17);
   if (VAR_8 -> destructor & 1)
     {
       FUNC_16 (&VAR_16, "~");
       FUNC_13 (VAR_10, &VAR_16);
       VAR_8->destructor -= 1;
     }
   if ((VAR_8->constructor & 1) || (VAR_8->destructor & 1))
     {
       FUNC_13 (VAR_10, &VAR_16);
       VAR_8->constructor -= 1;
     }
   FUNC_14(&VAR_16);
   FUNC_14(&VAR_17);
   VAR_15 = ((void*)0);
   VAR_13 = 1;
   break;

 case '_':
   if ((VAR_1 || VAR_3) && VAR_14)
     {

       string VAR_19;

       (*VAR_9)++;
       VAR_11 = FUNC_8 (VAR_8, VAR_9, &VAR_19);
       FUNC_0 (&VAR_19);

       FUNC_17 (VAR_10, &VAR_19);
       FUNC_14 (&VAR_19);
       break;
     }
   else
            if (VAR_4)
              {
                (*VAR_9)++;
                while (**VAR_9 && FUNC_1 ((unsigned char)**VAR_9))
                  (*VAR_9)++;
              }
            else
       VAR_11 = 0;
   break;

 case 'H':
   if (VAR_1 || VAR_3)
     {

       VAR_11 = FUNC_7 (VAR_8, VAR_9, VAR_10, 0, 0,
        0);
       if (!(VAR_8->constructor & 1))
  VAR_14 = 1;
       (*VAR_9)++;
       break;
     }
   else

     {;}

 default:
   if (VAR_1 || VAR_3)
     {


       VAR_12 = 1;
       VAR_11 = FUNC_4 (VAR_8, VAR_9, VAR_10);
     }
   else
     {




       VAR_11 = 0;
     }
   break;
 }



      {
 if (VAR_11 && VAR_13)
   {
     VAR_12 = 1;
              if (VAR_5 || VAR_0 || VAR_2)
                {
                  FUNC_9 (VAR_8);
                }
     VAR_11 = FUNC_4 (VAR_8, VAR_9, VAR_10);



     VAR_13 = 0;
   }
      }
    }
  if (VAR_11 && !VAR_12)
    {
      if (VAR_1 || VAR_3)
 {






   VAR_11 = FUNC_4 (VAR_8, VAR_9, VAR_10);
 }
    }
  if (VAR_11 && VAR_6)
    {
      if (VAR_8->static_type)
 FUNC_12 (VAR_10, " static");
      if (VAR_8->type_quals != VAR_7)
 {
   FUNC_0 (VAR_10);
   FUNC_12 (VAR_10, FUNC_10 (VAR_8->type_quals));
 }
    }

  return (VAR_11);
}
