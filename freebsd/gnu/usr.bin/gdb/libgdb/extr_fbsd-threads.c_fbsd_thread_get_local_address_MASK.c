
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int td_thrhandle_t ;
struct objfile {int flags; char* name; } ;
typedef int ptid_t ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (void**,int ) ;
 int FUNC_4 (void**,int ,int ) ;
 int FUNC_5 (struct objfile*) ;
 int FUNC_6 (int ,scalar_t__,int *) ;
 int FUNC_7 (int *,void*,int ,void**) ;
 int VAR_3 ;
 int FUNC_8 (int) ;

CORE_ADDR
FUNC_9(ptid_t VAR_4, struct objfile *VAR_5,
                              CORE_ADDR VAR_6)
{
  td_thrhandle_t VAR_7;
  void *VAR_8;
  CORE_ADDR VAR_9;
  void *VAR_10;
  int VAR_11, VAR_12 = (VAR_5->flags & VAR_0);

  if (FUNC_1 (VAR_4))
    {
      if (!&FUNC_7)
        FUNC_2 ("Cannot find thread-local interface in thread_db library.");


      VAR_9 = FUNC_5 (VAR_5);


      if (!VAR_9)
        {
          if (VAR_12)
            FUNC_2 ("Cannot find shared library `%s' link_map in dynamic"
                   " linker's module list", VAR_5->name);
          else
            FUNC_2 ("Cannot find executable file `%s' link_map in dynamic"
                   " linker's module list", VAR_5->name);
        }

      VAR_11 = FUNC_6 (VAR_3, FUNC_0(VAR_4), &VAR_7);


      FUNC_4(&VAR_10, VAR_2, VAR_9);
      VAR_11 = FUNC_7 (&VAR_7, VAR_10, VAR_6, &VAR_8);

      if (VAR_11 != VAR_1)
        {
          if (VAR_12)
            FUNC_2 ("Cannot find thread-local storage for thread %ld, "
                   "shared library %s:\n%s",
                   (long) FUNC_0 (VAR_4),
                   VAR_5->name, FUNC_8 (VAR_11));
          else
            FUNC_2 ("Cannot find thread-local storage for thread %ld, "
                   "executable file %s:\n%s",
                   (long) FUNC_0 (VAR_4),
                   VAR_5->name, FUNC_8 (VAR_11));
        }


      return FUNC_3(&VAR_8, VAR_2);
    }
  return (0);
}
