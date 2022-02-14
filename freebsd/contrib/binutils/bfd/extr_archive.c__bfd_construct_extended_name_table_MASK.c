
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ar_hdr {scalar_t__* ar_name; } ;
typedef scalar_t__ bfd_size_type ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_10__ {int filename; struct TYPE_10__* archive_next; struct TYPE_10__* archive_head; TYPE_1__* xvec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_9__ {unsigned int ar_max_namelen; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,unsigned int,char*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 struct ar_hdr* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 char* FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (scalar_t__*,char const*,unsigned int) ;
 char* FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (char*,char const*) ;
 unsigned int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,scalar_t__*,unsigned int) ;

bfd_boolean
FUNC_10 (bfd *VAR_3,
        bfd_boolean VAR_4,
        char **VAR_5,
        bfd_size_type *VAR_6)
{
  unsigned int VAR_7 = VAR_3->xvec->ar_max_namelen;
  bfd_size_type VAR_8 = 0;
  bfd *VAR_9;
  char *VAR_10;

  *VAR_6 = 0;


  for (VAR_9 = VAR_3->archive_head;
       VAR_9 != ((void*)0);
       VAR_9 = VAR_9->archive_next)
    {
      const char *VAR_11;
      unsigned int VAR_12;

      VAR_11 = FUNC_6 (VAR_9, VAR_9->filename);
      if (VAR_11 == ((void*)0))
 return VAR_1;

      VAR_12 = FUNC_8 (VAR_11);

      if (VAR_12 > VAR_7
   && (FUNC_3 (VAR_3) & VAR_0) != 0)
 VAR_12 = VAR_7;

      if (VAR_12 > VAR_7)
 {

   VAR_8 += VAR_12 + 1;
   if (VAR_4)
     {

       ++VAR_8;
     }
 }
      else
 {
   struct ar_hdr *VAR_13 = FUNC_2 (VAR_9);
   if (FUNC_9 (VAR_11, VAR_13->ar_name, VAR_12) != 0
       || (VAR_12 < sizeof VAR_13->ar_name
    && VAR_13->ar_name[VAR_12] != FUNC_1 (VAR_9)))
     {


       FUNC_5 (VAR_13->ar_name, VAR_11, VAR_12);
       if (VAR_12 < VAR_7
    || (VAR_12 == VAR_7 && VAR_12 < sizeof VAR_13->ar_name))
  VAR_13->ar_name[VAR_12] = FUNC_1 (VAR_9);
     }
 }
    }

  if (VAR_8 == 0)
    return VAR_2;

  *VAR_5 = FUNC_4 (VAR_3, VAR_8);
  if (*VAR_5 == ((void*)0))
    return VAR_1;

  *VAR_6 = VAR_8;
  VAR_10 = *VAR_5;

  for (VAR_9 = VAR_3->archive_head;
       VAR_9 != ((void*)0);
       VAR_9 = VAR_9->archive_next)
    {
      const char *VAR_14;
      unsigned int VAR_15;

      VAR_14 = FUNC_6 (VAR_9, VAR_9->filename);
      if (VAR_14 == ((void*)0))
 return VAR_1;

      VAR_15 = FUNC_8 (VAR_14);
      if (VAR_15 > VAR_7)
 {



   struct ar_hdr *VAR_16 = FUNC_2 (VAR_9);
   FUNC_7 (VAR_10, VAR_14);
   if (! VAR_4)
     VAR_10[VAR_15] = '\012';
   else
     {
       VAR_10[VAR_15] = '/';
       VAR_10[VAR_15 + 1] = '\012';
     }
   VAR_16->ar_name[0] = FUNC_1 (VAR_9);
          FUNC_0 (VAR_16->ar_name + 1, VAR_7 - 1, "%-ld",
                            VAR_10 - *VAR_5);
   VAR_10 += VAR_15 + 1;
   if (VAR_4)
     ++VAR_10;
 }
    }

  return VAR_2;
}
