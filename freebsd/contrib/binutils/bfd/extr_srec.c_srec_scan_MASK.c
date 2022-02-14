
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int flagword ;
typedef int file_ptr ;
typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef char bfd_byte ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_14__ {int start_address; } ;
typedef TYPE_1__ bfd ;
struct TYPE_15__ {int vma; int size; int lma; int filepos; } ;
typedef TYPE_2__ asection ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_4 (TYPE_1__*,int) ;
 unsigned int FUNC_5 (char*,int,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_2__* FUNC_7 (TYPE_1__*,char*,int) ;
 char* FUNC_8 (int) ;
 char* FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int ) ;
 int FUNC_14 (TYPE_1__*,unsigned int,int,scalar_t__) ;
 int FUNC_15 (TYPE_1__*,scalar_t__*) ;
 int FUNC_16 (TYPE_1__*,char*,int) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_19 (bfd *VAR_7)
{
  int VAR_8;
  unsigned int VAR_9 = 1;
  bfd_boolean VAR_10 = VAR_1;
  bfd_byte *VAR_11 = ((void*)0);
  size_t VAR_12 = 0;
  asection *VAR_13 = ((void*)0);
  char *VAR_14 = ((void*)0);

  if (FUNC_10 (VAR_7, (file_ptr) 0, VAR_5) != 0)
    goto error_return;

  while ((VAR_8 = FUNC_15 (VAR_7, &VAR_10)) != VAR_0)
    {


      if (VAR_8 != 'S' && VAR_8 != '\r' && VAR_8 != '\n')
 VAR_13 = ((void*)0);

      switch (VAR_8)
 {
 default:
   FUNC_14 (VAR_7, VAR_9, VAR_8, VAR_10);
   goto error_return;

 case '\n':
   ++VAR_9;
   break;

 case '\r':
   break;

 case '$':

   while ((VAR_8 = FUNC_15 (VAR_7, &VAR_10)) != '\n'
   && VAR_8 != VAR_0)
     ;
   if (VAR_8 == VAR_0)
     {
       FUNC_14 (VAR_7, VAR_9, VAR_8, VAR_10);
       goto error_return;
     }

   ++VAR_9;
   break;

 case ' ':
   do
     {
       bfd_size_type VAR_15;
       char *VAR_16, *VAR_17;
       bfd_vma VAR_18;


       while ((VAR_8 = FUNC_15 (VAR_7, &VAR_10)) != VAR_0
       && (VAR_8 == ' ' || VAR_8 == '\t'))
  ;

       if (VAR_8 == '\n' || VAR_8 == '\r')
  break;

       if (VAR_8 == VAR_0)
  {
    FUNC_14 (VAR_7, VAR_9, VAR_8, VAR_10);
    goto error_return;
  }

       VAR_15 = 10;
       VAR_14 = FUNC_8 (VAR_15 + 1);
       if (VAR_14 == ((void*)0))
  goto error_return;

       VAR_16 = VAR_14;

       *VAR_16++ = VAR_8;
       while ((VAR_8 = FUNC_15 (VAR_7, &VAR_10)) != VAR_0
       && ! FUNC_2 (VAR_8))
  {
    if ((bfd_size_type) (VAR_16 - VAR_14) >= VAR_15)
      {
        char *VAR_19;

        VAR_15 *= 2;
        VAR_19 = FUNC_9 (VAR_14, VAR_15 + 1);
        if (VAR_19 == ((void*)0))
   goto error_return;
        VAR_16 = VAR_19 + (VAR_16 - VAR_14);
        VAR_14 = VAR_19;
      }

    *VAR_16++ = VAR_8;
  }

       if (VAR_8 == VAR_0)
  {
    FUNC_14 (VAR_7, VAR_9, VAR_8, VAR_10);
    goto error_return;
  }

       *VAR_16++ = '\0';
       VAR_17 = FUNC_4 (VAR_7, (bfd_size_type) (VAR_16 - VAR_14));
       if (VAR_17 == ((void*)0))
  goto error_return;
       FUNC_17 (VAR_17, VAR_14);
       FUNC_12 (VAR_14);
       VAR_14 = ((void*)0);

       while ((VAR_8 = FUNC_15 (VAR_7, &VAR_10)) != VAR_0
       && (VAR_8 == ' ' || VAR_8 == '\t'))
  ;
       if (VAR_8 == VAR_0)
  {
    FUNC_14 (VAR_7, VAR_9, VAR_8, VAR_10);
    goto error_return;
  }


       if (VAR_8 == '$')
  {
    VAR_8 = FUNC_15 (VAR_7, &VAR_10);
    if (VAR_8 == VAR_0)
      {
        FUNC_14 (VAR_7, VAR_9, VAR_8, VAR_10);
        goto error_return;
      }
  }

       VAR_18 = 0;
       while (FUNC_1 (VAR_8))
  {
    VAR_18 <<= 4;
    VAR_18 += FUNC_3 (VAR_8);
    VAR_8 = FUNC_15 (VAR_7, &VAR_10);
  }

       if (! FUNC_16 (VAR_7, VAR_17, VAR_18))
  goto error_return;
     }
   while (VAR_8 == ' ' || VAR_8 == '\t')
     ;

   if (VAR_8 == '\n')
     ++VAR_9;
   else if (VAR_8 != '\r')
     {
       FUNC_14 (VAR_7, VAR_9, VAR_8, VAR_10);
       goto error_return;
     }

   break;

 case 'S':
   {
     file_ptr VAR_20;
     char VAR_21[3];
     unsigned int VAR_22;
     bfd_vma VAR_23;
     bfd_byte *VAR_24;



     VAR_20 = FUNC_11 (VAR_7) - 1;

     if (FUNC_5 (VAR_21, (bfd_size_type) 3, VAR_7) != 3)
       goto error_return;

     if (! FUNC_1 (VAR_21[1]) || ! FUNC_1 (VAR_21[2]))
       {
  if (! FUNC_1 (VAR_21[1]))
    VAR_8 = VAR_21[1];
  else
    VAR_8 = VAR_21[2];
  FUNC_14 (VAR_7, VAR_9, VAR_8, VAR_10);
  goto error_return;
       }

     VAR_22 = FUNC_0 (VAR_21 + 1);
     if (VAR_22 * 2 > VAR_12)
       {
  if (VAR_11 != ((void*)0))
    FUNC_12 (VAR_11);
  VAR_11 = FUNC_8 ((bfd_size_type) VAR_22 * 2);
  if (VAR_11 == ((void*)0))
    goto error_return;
  VAR_12 = VAR_22 * 2;
       }

     if (FUNC_5 (VAR_11, (bfd_size_type) VAR_22 * 2, VAR_7) != VAR_22 * 2)
       goto error_return;


     --VAR_22;

     VAR_23 = 0;
     VAR_24 = VAR_11;
     switch (VAR_21[0])
       {
       case '0':
       case '5':


  VAR_13 = ((void*)0);
  break;

       case '3':
  VAR_23 = FUNC_0 (VAR_24);
  VAR_24 += 2;
  --VAR_22;

       case '2':
  VAR_23 = (VAR_23 << 8) | FUNC_0 (VAR_24);
  VAR_24 += 2;
  --VAR_22;

       case '1':
  VAR_23 = (VAR_23 << 8) | FUNC_0 (VAR_24);
  VAR_24 += 2;
  VAR_23 = (VAR_23 << 8) | FUNC_0 (VAR_24);
  VAR_24 += 2;
  VAR_22 -= 2;

  if (VAR_13 != ((void*)0)
      && VAR_13->vma + VAR_13->size == VAR_23)
    {


      VAR_13->size += VAR_22;
    }
  else
    {
      char VAR_25[20];
      char *VAR_26;
      bfd_size_type VAR_27;
      flagword VAR_28;

      FUNC_13 (VAR_25, ".sec%d", FUNC_6 (VAR_7) + 1);
      VAR_27 = FUNC_18 (VAR_25) + 1;
      VAR_26 = FUNC_4 (VAR_7, VAR_27);
      FUNC_17 (VAR_26, VAR_25);
      VAR_28 = VAR_3 | VAR_4 | VAR_2;
      VAR_13 = FUNC_7 (VAR_7, VAR_26, VAR_28);
      if (VAR_13 == ((void*)0))
        goto error_return;
      VAR_13->vma = VAR_23;
      VAR_13->lma = VAR_23;
      VAR_13->size = VAR_22;
      VAR_13->filepos = VAR_20;
    }
  break;

       case '7':
  VAR_23 = FUNC_0 (VAR_24);
  VAR_24 += 2;

       case '8':
  VAR_23 = (VAR_23 << 8) | FUNC_0 (VAR_24);
  VAR_24 += 2;

       case '9':
  VAR_23 = (VAR_23 << 8) | FUNC_0 (VAR_24);
  VAR_24 += 2;
  VAR_23 = (VAR_23 << 8) | FUNC_0 (VAR_24);
  VAR_24 += 2;


  VAR_7->start_address = VAR_23;

  if (VAR_11 != ((void*)0))
    FUNC_12 (VAR_11);

  return VAR_6;
       }
   }
   break;
 }
    }

  if (VAR_10)
    goto error_return;

  if (VAR_11 != ((void*)0))
    FUNC_12 (VAR_11);

  return VAR_6;

 error_return:
  if (VAR_14 != ((void*)0))
    FUNC_12 (VAR_14);
  if (VAR_11 != ((void*)0))
    FUNC_12 (VAR_11);
  return VAR_1;
}
