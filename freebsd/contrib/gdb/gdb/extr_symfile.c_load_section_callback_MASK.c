
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct load_section_data {scalar_t__ load_offset; int data_count; int write_count; int total_size; } ;
struct cleanup {int dummy; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd ;
typedef int asection ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,int ,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (struct cleanup*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (char*,...) ;
 struct cleanup* FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 char const* FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (char const*,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,char*,int) ;
 int FUNC_13 (scalar_t__,char*,scalar_t__,int*) ;
 scalar_t__ FUNC_14 (char const*,scalar_t__) ;
 int FUNC_15 (int ,int ,char*,char const*,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char* FUNC_16 (int) ;

__attribute__((used)) static void
FUNC_17 (bfd *VAR_6, asection *VAR_7, void *VAR_8)
{
  struct load_section_data *VAR_9 = VAR_8;

  if (FUNC_1 (VAR_6, VAR_7) & VAR_0)
    {
      bfd_size_type VAR_10 = FUNC_3 (VAR_7);
      if (VAR_10 > 0)
 {
   char *VAR_11;
   struct cleanup *VAR_12;
   CORE_ADDR VAR_13 = FUNC_4 (VAR_6, VAR_7) + VAR_9->load_offset;
   bfd_size_type VAR_14;
   int VAR_15;
   const char *VAR_16 = FUNC_2 (VAR_6, VAR_7);
   bfd_size_type VAR_17;

   if (VAR_1 > 0 && VAR_10 > VAR_1)
     VAR_14 = VAR_1;
   else
     VAR_14 = VAR_10;

   VAR_11 = FUNC_16 (VAR_10);
   VAR_12 = FUNC_7 (VAR_5, VAR_11);



   FUNC_15 (VAR_3, 0, "Loading section %s, size 0x%s lma 0x%s\n",
     VAR_16, FUNC_10 (VAR_10), FUNC_10 (VAR_13));

   FUNC_0 (VAR_6, VAR_7, VAR_11, 0, VAR_10);

   VAR_17 = 0;
   do
     {
       int VAR_18;
       bfd_size_type VAR_19 = VAR_10 - VAR_17;

       if (VAR_19 >= VAR_14)
  VAR_19 = VAR_14;
       VAR_18 = FUNC_13 (VAR_13, VAR_11,
       VAR_19, &VAR_15);
       if (VAR_15)
  break;
       if (VAR_4)
  {
    char *VAR_20 = FUNC_16 (VAR_18);
    struct cleanup *VAR_21 =
      FUNC_7 (VAR_5, VAR_20);

    if (FUNC_12 (VAR_13, VAR_20, VAR_18) != 0)
      FUNC_6 ("Download verify read failed at 0x%s",
      FUNC_9 (VAR_13));
    if (FUNC_8 (VAR_11, VAR_20, VAR_18) != 0)
      FUNC_6 ("Download verify compare failed at 0x%s",
      FUNC_9 (VAR_13));
    FUNC_5 (VAR_21);
  }
       VAR_9->data_count += VAR_18;
       VAR_13 += VAR_18;
       VAR_11 += VAR_18;
       VAR_9->write_count += 1;
       VAR_17 += VAR_18;
       if (VAR_2
    || (&FUNC_14 != ((void*)0)
        && FUNC_14 (VAR_16, VAR_17)))
  FUNC_6 ("Canceled the download");

       if (&FUNC_11 != ((void*)0))
  FUNC_11 (VAR_16, VAR_17, VAR_10,
        VAR_9->data_count, VAR_9->total_size);
     }
   while (VAR_17 < VAR_10);

   if (VAR_15 != 0)
     FUNC_6 ("Memory access error while loading section %s.", VAR_16);

   FUNC_5 (VAR_12);
 }
    }
}
