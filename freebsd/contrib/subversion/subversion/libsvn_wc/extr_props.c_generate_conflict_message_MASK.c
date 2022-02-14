
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_string_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int const*,int const*) ;
 int * FUNC_3 (int *,int ,char const*) ;

__attribute__((used)) static svn_stringbuf_t *
FUNC_4(const char *VAR_0,
                          const svn_string_t *VAR_1,
                          const svn_string_t *VAR_2,
                          const svn_string_t *VAR_3,
                          const svn_string_t *VAR_4,
                          apr_pool_t *VAR_5)
{
  if (VAR_4 == ((void*)0))
    {

      FUNC_0(VAR_3 != ((void*)0));

      if (VAR_2)
        {

          FUNC_0(!FUNC_2(VAR_2, VAR_3));




          return FUNC_3(VAR_5,
                                       FUNC_1("Trying to add new property '%s'\n"
                                         "but the property already exists.\n"),
                                       VAR_0);
        }



      FUNC_0(VAR_1 != ((void*)0));
      return FUNC_3(VAR_5,
                                   FUNC_1("Trying to add new property '%s'\n"
                                     "but the property has been locally "
                                     "deleted.\n"),
                                   VAR_0);
    }

  if (VAR_3 == ((void*)0))
    {

      FUNC_0(VAR_4 != ((void*)0));


      if (VAR_1 == ((void*)0) && VAR_2 != ((void*)0))
        return FUNC_3(VAR_5,
                                     FUNC_1("Trying to delete property '%s'\n"
                                       "but the property has been locally "
                                       "added.\n"),
                                     VAR_0);




      FUNC_0(VAR_1 != ((void*)0));

      if (FUNC_2(VAR_1, VAR_4))
        {
          if (VAR_2)


            return FUNC_3(VAR_5,
                                         FUNC_1("Trying to delete property '%s'\n"
                                           "but the property has been locally "
                                           "modified.\n"),
                                         VAR_0);
        }
      else if (VAR_2 == ((void*)0))
        {


          return FUNC_3(VAR_5,
                                       FUNC_1("Trying to delete property '%s'\n"
                                         "but the property has been locally "
                                         "deleted and had a different "
                                         "value.\n"),
                                       VAR_0);
        }



      FUNC_0(!FUNC_2(VAR_1, VAR_4));

      return FUNC_3(VAR_5,
                                   FUNC_1("Trying to delete property '%s'\n"
                                     "but the local property value is "
                                     "different.\n"),
                                   VAR_0);
    }






  FUNC_0(!VAR_2 || !FUNC_2(VAR_2, VAR_4));

  if (VAR_1 && VAR_2 && FUNC_2(VAR_1, VAR_2))
    {


      FUNC_0(!FUNC_2(VAR_1, VAR_4));
      return FUNC_3(VAR_5,
                                   FUNC_1("Trying to change property '%s'\n"
                                     "but the local property value conflicts "
                                     "with the incoming change.\n"),
                                   VAR_0);
    }

  if (VAR_1 && VAR_2)
    return FUNC_3(VAR_5,
                                 FUNC_1("Trying to change property '%s'\n"
                                   "but the property has already been locally "
                                   "changed to a different value.\n"),
                                 VAR_0);

  if (VAR_1)
    return FUNC_3(VAR_5,
                                 FUNC_1("Trying to change property '%s'\nbut "
                                   "the property has been locally deleted.\n"),
                                 VAR_0);

  if (VAR_2)
    return FUNC_3(VAR_5,
                                 FUNC_1("Trying to change property '%s'\nbut the "
                                   "property has been locally added with a "
                                   "different value.\n"),
                                 VAR_0);

  return FUNC_3(VAR_5,
                               FUNC_1("Trying to change property '%s'\nbut "
                                 "the property does not exist locally.\n"),
                               VAR_0);
}
