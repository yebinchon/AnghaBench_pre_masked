
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_handle {char* filename; char* pending_lineno_filename; scalar_t__ pending_lineno_addr; int lineno_name_indx; int name_indx; char* lineno_filename; int pending_lineno; int linenos; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee_handle*,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct ieee_handle*,int) ;
 int FUNC_4 (struct ieee_handle*,int,scalar_t__) ;
 int FUNC_5 (struct ieee_handle*,int) ;
 int FUNC_6 (struct ieee_handle*,char*) ;
 int FUNC_7 (struct ieee_handle*,int) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (void *VAR_6, const char *VAR_7, unsigned long VAR_8, bfd_vma VAR_9)
{
  struct ieee_handle *VAR_10 = (struct ieee_handle *) VAR_6;

  FUNC_0 (VAR_10->filename != ((void*)0));





  if (VAR_10->pending_lineno_filename != ((void*)0)
      && VAR_9 != VAR_10->pending_lineno_addr)
    {

      if (! FUNC_1 (&VAR_10->linenos))
 {
   if (! FUNC_2 (VAR_10, &VAR_10->linenos))
     return VAR_0;
 }
      else
 {
   VAR_10->lineno_name_indx = VAR_10->name_indx;
   ++VAR_10->name_indx;
   if (! FUNC_2 (VAR_10, &VAR_10->linenos)
       || ! FUNC_5 (VAR_10, (int) VAR_3)
       || ! FUNC_5 (VAR_10, 5)
       || ! FUNC_7 (VAR_10, 0)
       || ! FUNC_6 (VAR_10, VAR_10->filename)
       || ! FUNC_5 (VAR_10, (int) VAR_5)
       || ! FUNC_7 (VAR_10, VAR_10->lineno_name_indx)
       || ! FUNC_6 (VAR_10, ""))
     return VAR_0;
   VAR_10->lineno_filename = VAR_10->filename;
 }

      if (FUNC_8 (VAR_10->pending_lineno_filename, VAR_10->lineno_filename) != 0)
 {
   if (FUNC_8 (VAR_10->filename, VAR_10->lineno_filename) != 0)
     {


       if (! FUNC_5 (VAR_10, (int) VAR_4))
  return VAR_0;
       if (FUNC_8 (VAR_10->filename, VAR_10->pending_lineno_filename) == 0)
  {


    VAR_10->lineno_name_indx = VAR_10->name_indx;
    ++VAR_10->name_indx;
    if (! FUNC_5 (VAR_10, (int) VAR_5)
        || ! FUNC_7 (VAR_10, VAR_10->lineno_name_indx)
        || ! FUNC_6 (VAR_10, ""))
      return VAR_0;
  }
     }
   if (FUNC_8 (VAR_10->filename, VAR_10->pending_lineno_filename) != 0)
     {


       VAR_10->lineno_name_indx = VAR_10->name_indx;
       ++VAR_10->name_indx;
       if (! FUNC_5 (VAR_10, (int) VAR_3)
    || ! FUNC_5 (VAR_10, 5)
    || ! FUNC_7 (VAR_10, 0)
    || ! FUNC_6 (VAR_10, VAR_10->pending_lineno_filename)
    || ! FUNC_5 (VAR_10, (int) VAR_5)
    || ! FUNC_7 (VAR_10, VAR_10->lineno_name_indx)
    || ! FUNC_6 (VAR_10, ""))
  return VAR_0;
     }
   VAR_10->lineno_filename = VAR_10->pending_lineno_filename;
 }

      if (! FUNC_3 (VAR_10, (int) VAR_2)
   || ! FUNC_7 (VAR_10, VAR_10->lineno_name_indx)
   || ! FUNC_7 (VAR_10, 0)
   || ! FUNC_7 (VAR_10, 7)
   || ! FUNC_7 (VAR_10, VAR_10->pending_lineno)
   || ! FUNC_7 (VAR_10, 0)
   || ! FUNC_4 (VAR_10, VAR_10->lineno_name_indx,
          VAR_10->pending_lineno_addr))
 return VAR_0;
    }

  VAR_10->pending_lineno_filename = VAR_7;
  VAR_10->pending_lineno = VAR_8;
  VAR_10->pending_lineno_addr = VAR_9;

  return VAR_1;
}
