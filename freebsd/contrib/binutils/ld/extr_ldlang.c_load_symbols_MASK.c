
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int lang_statement_list_type ;
struct TYPE_15__ {int loaded; char* the_bfd; int sysrooted; int as_needed; int add_needed; int whole_archive; int dynamic; int filename; } ;
typedef TYPE_2__ lang_input_statement_type ;
typedef scalar_t__ bfd_error_type ;
typedef int bfd_boolean ;
typedef char bfd ;
struct TYPE_16__ {TYPE_1__* callbacks; } ;
struct TYPE_14__ {int (* add_archive_element ) (TYPE_3__*,char*,char*) ;} ;
struct TYPE_13__ {int dynamic_link; } ;


 void* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_2 (char*,int const) ;
 int FUNC_3 (char*,int,char***) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,TYPE_3__*) ;

 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 TYPE_11__ VAR_6 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,TYPE_2__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_17 (TYPE_3__*,char*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_18 () ;

bfd_boolean
FUNC_19 (lang_input_statement_type *VAR_15,
       lang_statement_list_type *VAR_16)
{
  char **VAR_17;

  if (VAR_15->loaded)
    return VAR_1;

  FUNC_15 (VAR_15);

  if (! FUNC_2 (VAR_15->the_bfd, 129)
      && ! FUNC_3 (VAR_15->the_bfd, 128, &VAR_17))
    {
      bfd_error_type VAR_18;
      lang_statement_list_type *VAR_19;
      bfd_boolean VAR_20 = VAR_1;
      bfd_boolean VAR_21;
      bfd_boolean VAR_22, VAR_23;

      VAR_18 = FUNC_5 ();


      if (FUNC_13 (VAR_15))
 return VAR_1;

      if (VAR_18 == VAR_4)
 {
   char **VAR_24;

   FUNC_10 (FUNC_0("%B: file not recognized: %E\n"), VAR_15->the_bfd);
   FUNC_10 (FUNC_0("%B: matching formats:"), VAR_15->the_bfd);
   for (VAR_24 = VAR_17; *VAR_24 != ((void*)0); VAR_24++)
     FUNC_10 (" %s", *VAR_24);
   FUNC_10 ("%F\n");
 }
      else if (VAR_18 != VAR_5
        || VAR_16 == ((void*)0))
   FUNC_10 (FUNC_0("%F%B: file not recognized: %E\n"), VAR_15->the_bfd);
      else
 VAR_20 = VAR_0;

      FUNC_4 (VAR_15->the_bfd);
      VAR_15->the_bfd = ((void*)0);


      FUNC_14 (VAR_15->filename);

      VAR_19 = VAR_12;
      VAR_12 = VAR_16;
      VAR_21 = VAR_9;
      VAR_9 = VAR_15->sysrooted;
      VAR_22 = VAR_3;
      VAR_3 = VAR_15->as_needed;
      VAR_23 = VAR_2;
      VAR_2 = VAR_15->add_needed;

      VAR_8 = VAR_1;
      VAR_11 = VAR_7;


      VAR_6.dynamic_link = VAR_15->dynamic;
      FUNC_18 ();
      VAR_8 = VAR_0;

      VAR_9 = VAR_21;
      VAR_3 = VAR_22;
      VAR_2 = VAR_23;
      VAR_12 = VAR_19;

      return ! VAR_20;
    }

  if (FUNC_12 (VAR_15))
    return VAR_1;





  switch (FUNC_6 (VAR_15->the_bfd))
    {
    default:
      break;

    case 128:
      FUNC_16 (VAR_15);
      if (VAR_14 || VAR_13)
 FUNC_11 ("%I\n", VAR_15);
      break;

    case 129:
      FUNC_9 (VAR_15->the_bfd);

      if (VAR_15->whole_archive)
 {
   bfd *VAR_25 = ((void*)0);
   bfd_boolean VAR_26 = VAR_1;

   for (;;)
     {
       VAR_25 = FUNC_8 (VAR_15->the_bfd, VAR_25);

       if (VAR_25 == ((void*)0))
  break;

       if (! FUNC_2 (VAR_25, 128))
  {
    FUNC_10 (FUNC_0("%F%B: member %B in archive is not an object\n"),
    VAR_15->the_bfd, VAR_25);
    VAR_26 = VAR_0;
  }

       if (! ((*VAR_10.callbacks->add_archive_element)
       (&VAR_10, VAR_25, "--whole-archive")))
  FUNC_1 ();

       if (! FUNC_7 (VAR_25, &VAR_10))
  {
    FUNC_10 (FUNC_0("%F%B: could not read symbols: %E\n"), VAR_25);
    VAR_26 = VAR_0;
  }
     }

   VAR_15->loaded = VAR_26;
   return VAR_26;
 }
      break;
    }

  if (FUNC_7 (VAR_15->the_bfd, &VAR_10))
    VAR_15->loaded = VAR_1;
  else
    FUNC_10 (FUNC_0("%F%B: could not read symbols: %E\n"), VAR_15->the_bfd);

  return VAR_15->loaded;
}
