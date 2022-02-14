
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {int dummy; } ;
typedef scalar_t__ debug_type ;
typedef int bfd_vma ;
typedef int bfd_signed_vma ;
typedef int bfd_boolean ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (void*,int) ;
 scalar_t__ FUNC_4 (void*,int) ;
 scalar_t__ FUNC_5 (void*,int,int ) ;
 scalar_t__ FUNC_6 (void*,scalar_t__,int,int) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (char const**,int*) ;
 scalar_t__ FUNC_9 (void*,struct stab_handle*,char const*,char const**,scalar_t__**) ;
 int FUNC_10 (char const**,int*) ;
 scalar_t__ FUNC_11 (void*,struct stab_handle*,int*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 int FUNC_13 (char const*,int ) ;

__attribute__((used)) static debug_type
FUNC_14 (void *VAR_6, struct stab_handle *VAR_7, const char *VAR_8, const char **VAR_9, const int *VAR_10)
{
  const char *VAR_11;
  int VAR_12[2];
  bfd_boolean VAR_13;
  debug_type VAR_14;
  const char *VAR_15, *VAR_16;
  bfd_signed_vma VAR_17, VAR_18;
  bfd_boolean VAR_19, VAR_20;

  VAR_11 = *VAR_9;

  VAR_14 = VAR_0;



  if (! FUNC_10 (VAR_9, VAR_12))
    return VAR_0;

  VAR_13 = (VAR_12[0] == VAR_10[0]
     && VAR_12[1] == VAR_10[1]);

  if (**VAR_9 == '=')
    {
      *VAR_9 = VAR_11;
      VAR_14 = FUNC_9 (VAR_6, VAR_7, (const char *) ((void*)0),
        VAR_9, (debug_type **) ((void*)0));
      if (VAR_14 == VAR_0)
 return VAR_0;
    }

  if (**VAR_9 == ';')
    ++*VAR_9;



  VAR_15 = *VAR_9;
  VAR_17 = FUNC_8 (VAR_9, &VAR_19);
  if (**VAR_9 != ';')
    {
      FUNC_2 (VAR_11);
      return VAR_0;
    }
  ++*VAR_9;

  VAR_16 = *VAR_9;
  VAR_18 = FUNC_8 (VAR_9, &VAR_20);
  if (**VAR_9 != ';')
    {
      FUNC_2 (VAR_11);
      return VAR_0;
    }
  ++*VAR_9;

  if (VAR_19 || VAR_20)
    {





      if (VAR_14 == VAR_0)
 {
   if (FUNC_0 (VAR_15, "01000000000000000000000;")
       && FUNC_0 (VAR_16, "0777777777777777777777;"))
     return FUNC_5 (VAR_6, 8, VAR_1);
   if (! VAR_19
       && VAR_17 == 0
       && FUNC_0 (VAR_16, "01777777777777777777777;"))
     return FUNC_5 (VAR_6, 8, VAR_4);
 }

      FUNC_13 (VAR_11, FUNC_1("numeric overflow"));
    }

  if (VAR_14 == VAR_0)
    {


      if (VAR_13 && VAR_17 == 0 && VAR_18 == 0)
 return FUNC_7 (VAR_6);



      if (VAR_13 && VAR_18 == 0 && VAR_17 > 0)
 return FUNC_3 (VAR_6, VAR_17);



      if (VAR_18 == 0 && VAR_17 > 0)
 return FUNC_4 (VAR_6, VAR_17);


      if (VAR_17 == 0 && VAR_18 == -1)
 {




   if (VAR_8 != ((void*)0))
     {
       if (FUNC_12 (VAR_8, "long long int") == 0)
  return FUNC_5 (VAR_6, 8, VAR_1);
       else if (FUNC_12 (VAR_8, "long long unsigned int") == 0)
  return FUNC_5 (VAR_6, 8, VAR_4);
     }

   return FUNC_5 (VAR_6, 4, VAR_4);
 }


      if (VAR_13 && VAR_17 == 0 && VAR_18 == 127)
 return FUNC_5 (VAR_6, 1, VAR_1);



      if (VAR_17 == 0)
 {
   if (VAR_18 < 0)
     return FUNC_5 (VAR_6, - VAR_18, VAR_4);
   else if (VAR_18 == 0xff)
     return FUNC_5 (VAR_6, 1, VAR_4);
   else if (VAR_18 == 0xffff)
     return FUNC_5 (VAR_6, 2, VAR_4);
   else if (VAR_18 == (bfd_signed_vma) 0xffffffff)
     return FUNC_5 (VAR_6, 4, VAR_4);




 }
      else if (VAR_18 == 0
        && VAR_17 < 0
        && (VAR_13 || VAR_17 == -8))
 return FUNC_5 (VAR_6, - VAR_17, VAR_4);
      else if (VAR_17 == - VAR_18 - 1 || VAR_17 == VAR_18 + 1)
 {
   if (VAR_18 == 0x7f)
     return FUNC_5 (VAR_6, 1, VAR_1);
   else if (VAR_18 == 0x7fff)
     return FUNC_5 (VAR_6, 2, VAR_1);
   else if (VAR_18 == 0x7fffffff)
     return FUNC_5 (VAR_6, 4, VAR_1);




 }
    }




  if (VAR_13)
    {
      FUNC_2 (VAR_11);
      return VAR_0;
    }

  VAR_14 = FUNC_11 (VAR_6, VAR_7, VAR_12);
  if (VAR_14 == VAR_0)
    {


      FUNC_13 (VAR_11, FUNC_1("missing index type"));
      VAR_14 = FUNC_5 (VAR_6, 4, VAR_1);
    }

  return FUNC_6 (VAR_6, VAR_14, VAR_17, VAR_18);
}
